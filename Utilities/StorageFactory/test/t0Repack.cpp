#include "Utilities/StorageFactory/interface/StorageFactory.h"
#include "Utilities/StorageFactory/interface/StorageAccount.h"
#include "FWCore/PluginManager/interface/PluginManager.h"
#include "FWCore/PluginManager/interface/standard.h"
#include "SealBase/Storage.h"
#include "SealIOTools/StorageStreamBuf.h"
#include "SealBase/DebugAids.h"
#include "SealBase/Signal.h"
#include <iostream>
#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <queue>
#include <fstream>
#include <sstream>
#include <memory>
# include <boost/shared_ptr.hpp>
# include "SealBase/IOError.h"

namespace T0Repack {

  class
  Error : public seal::IOError
  {
  public:
    Error (const char *context);
    
    virtual std::string	explainSelf (void) const;
    virtual seal::Error *clone (void) const;
    virtual void	rethrow (void);
    
  private:
    
  };





  /* read full file from seal:storage and save it in a string
   */
  class InputStream : public  std::istringstream {
  public:
    InputStream(const std::string & fURL);

  private:
    std::string m_fileURL;		

  };

  struct Buffer {
    const char * buffer;
    seal::IOSize bufferSize;

  };

  class OutputEventFile {
  public:
    // construct and open (throws on error, clean before throwing ...)
    OutputEventFile(const std::string & fURL);
    // close and clean
    ~OutputEventFile();
    // sequential write
    void put(const Buffer & event);
    // total amount of byte written
    inline seal::IOSize size() const { return m_size;}
    //
    inline const std::string & fileURL() const { return  m_fileURL;}
  private:
    std::string m_fileURL;		
    std::auto_ptr<seal::Storage> storage;
    seal::IOSize m_size;
  };

  /* owns last event */
  class InputEventFile {
  public:
    // construct and open (throws on error, clean before throwing ...)
    InputEventFile(const std::string & fURL);
    // close and clean
    ~InputEventFile();
    // random read
    Buffer get(seal::IOOffset location, seal::IOSize bufferSize);
    // total amount of byte read
    inline seal::IOSize size() const { return m_size;}
    //
    inline const std::string & fileURL() const { return  m_fileURL;}

  private:
    std::string m_fileURL;		
    std::auto_ptr<seal::Storage> storage;
    seal::IOSize m_size;
    std::vector<char> vbuf;
  };

  class Sequencer {
  public:
    Sequencer(std::string& configFileName);

    void parse();

  private:
    enum {N_Actions=4};
    enum Actions {OPEN, CLOSE, INDEX, SELECT, TRACE}; 
    static std::string ActionName[N_Actions];

    void oneStep();
    void parseIndex(const std::string & indexFileName);
    
    struct Step {
      Actions action;
      std::string value;
    };


  private:
    int m_traceLevel;
    int m_selectedStream;
    std::queue<Step> m_steps;
    std::vector<boost::shared_ptr<OutputEventFile> > m_output;
  };


}


using namespace seal;
int main (int argc, char **argv)
{

    Signal::handleFatal (argv [0]);
    edmplugin::PluginManager::configure(edmplugin::standard::config());

    if (argc < 4)
    {
	std::cerr << "please give dataset number, output file name, and list of index files" <<std::endl;
	return EXIT_FAILURE;
    }

    StorageFactory::get ()->enableAccounting(true);

    int datasetN = ::atol(argv [1]);
    std::string outputURL = argv[2];
    std::cerr << "write to file " << outputURL
	      << " dataset " << datasetN << std::endl;
    std::vector<Storage	*> indexFiles;
    std::vector<IOOffset> indexSizes;
    for ( int i=3; i<argc; i++ ) {
      IOOffset    size = -1;
      if (StorageFactory::get ()->check(argv [i], &size)) {	
	indexFiles.push_back(StorageFactory::get ()->
			     open (argv [i],seal::IOFlags::OpenRead));
	indexSizes.push_back(size);
      }
      else {
	std::cerr << "index file " << argv [i] << " does not exists" << std::endl;
	return EXIT_FAILURE;
      }
    }

    // open output file
    Storage  * outputFile = 0;
    try {
      outputFile = StorageFactory::get ()->open (outputURL,
						 IOFlags::OpenWrite
						 | IOFlags::OpenCreate
						 | IOFlags::OpenTruncate);
    } catch (...) {
      std::cerr << "error in opening output file " << outputURL << std::endl;
      return EXIT_FAILURE;
    }

    // parse index file
    // read buffer
    // select and copy to output file
    IOSize totSize=0;
    for (unsigned int i=0; i<indexFiles.size();i++) {
      std::cerr << "reading from index file " <<  argv[i+3] << std::endl;
      //StorageStreamBuf	bufio (indexFiles[i]);
      // std::istream in (&bufio);
      // std::ifstream in(argv [i+3]);
      // get the whole file in memory
      std::istringstream in;
      try {
	std::vector<char> lbuf(indexSizes[i]+1,'\0');
	IOSize nn = indexFiles[i]->read(&lbuf[0],indexSizes[i]);
	if (nn!=indexSizes[i]) {
	      std::cerr << "error in reading from  index file " <<  argv[i+3] << std::endl;
	      std::cerr << "asked for " <<  indexSizes[i] <<". got " << nn << std::endl;
	      return EXIT_FAILURE;
	}
	in.str(&lbuf[0]);
      } catch (...) {
	std::cerr << "error in reading from index file " << argv [i+3] << std::endl;
	return EXIT_FAILURE;
      
      }

	std::string line1; std::getline(in, line1);
	std::cerr << "first line is:\n" << line1 << std::endl;
	std::string::size_type pos = line1.find('=');
      if (pos!=std::string::npos) pos = line1.find_first_not_of(' ',pos+1);
      if (pos==std::string::npos) {
	std::cerr << "badly formed index file " << argv [i+3] << std::endl;
	std::cerr << "first line is:\n" << line1 << std::endl;
	return EXIT_FAILURE;
      }
      line1.erase(0,pos);
      std::cerr << "input event file " << i << " is " << line1 << std::endl;
      Storage	* s; 
      IOOffset size=0;
      try {
	if (StorageFactory::get ()->check(line1, &size)) {	
	 s = StorageFactory::get ()->
	   open (line1,seal::IOFlags::OpenRead);
	}
	else {
	  std::cerr << "input file " << line1 << " does not exists" << std::endl;
	  return EXIT_FAILURE;
	}
      } catch (...) {
	std::cerr << "error in opening input file " << line1 << std::endl;
	  return EXIT_FAILURE;
      }
      //
      std::vector<char> vbuf;
      while(in) {
	int dataset=-1;
	IOOffset bufLoc = -1;
	IOSize   bufSize = 0;
	in >> dataset >> bufLoc >> bufSize;
	if (dataset==datasetN) {
	  std::cerr << "copy buf at " << bufLoc << " of size " << bufSize << std::endl;
	  if (bufSize>vbuf.size()) vbuf.resize(bufSize);
	  char * buf = &vbuf[0];
	  try {
	    s->position(bufLoc);
	    IOSize  n = s->read (buf, bufSize);
	    totSize+=n;
	    if (n!= bufSize) {
	      std::cerr << "error in reading from  input file " << line1 << std::endl;
	      std::cerr << "asked for " << bufSize <<". got " << n << std::endl;
	      return EXIT_FAILURE;
	    }
	  } catch (...) {
	    std::cerr << "error in reading from  input file " << line1 << std::endl;
	    return EXIT_FAILURE;
	  }
	  try {
	    outputFile->write(buf,bufSize);
	  } catch (...) {
	    std::cerr << "error in writing to output file " << outputURL << std::endl;
	    return EXIT_FAILURE;
	  }
	}
      }

      delete s;
 
    }

    outputFile->close();
    delete  outputFile;

    std::cerr << "copied a total of " << totSize << " bytes" << std::endl;


    std::cerr << "stats:\n" << StorageAccount::summaryText () << std::endl;

    return EXIT_SUCCESS;
}


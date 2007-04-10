#include "Utilities/StorageFactory/interface/StorageFactory.h"
#include "Utilities/StorageFactory/interface/StorageAccount.h"
#include "FWCore/PluginManager/interface/PluginManager.h"
#include "SealBase/Storage.h"
#include "SealBase/DebugAids.h"
#include "SealBase/Signal.h"
#include <iostream>
#include <vector>
#include <boost/thread/thread.hpp>

using namespace seal;

namespace {
  
  void dump() {
    
    std::vector<char> buf(10000,'1');
    
    Storage	*s = StorageFactory::get ()->open ("/dev/null", 
						   IOFlags::OpenWrite|IOFlags::OpenAppend);



    for (int i=0;i<10000;i++)
      s->write(&buf[0],buf.size());
    delete s;
    
  }
  
}


int main (int argc, char **argv)
{

  Signal::handleFatal (argv [0]);
  PluginManager::get ()->initialise ();
  StorageFactory::get ()->enableAccounting(true);
  
  std::cerr << "start StorageFactory thread test"  << std::endl;


  const int NUMTHREADS=10;
  boost::thread_group threads;
  for (int i=0; i<NUMTHREADS; ++i)
    threads.create_thread(&dump);
  threads.join_all();
  
  std::cerr << "stats:\n" << StorageAccount::summaryText () << std::endl;
  return EXIT_SUCCESS;
}


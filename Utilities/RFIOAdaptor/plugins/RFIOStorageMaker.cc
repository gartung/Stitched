#include "Utilities/StorageFactory/interface/StorageMaker.h"
#include "Utilities/StorageFactory/interface/StorageMakerFactory.h"
#include "Utilities/RFIOAdaptor/interface/RFIOFile.h"
#include "Utilities/RFIOAdaptor/interface/RFIO.h"
#include "Utilities/RFIOAdaptor/interface/RFIOPluginFactory.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "FWCore/Catalog/interface/SiteLocalConfig.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/Utilities/interface/Exception.h"
#include <cstdlib>

class RFIOStorageMaker : public StorageMaker
{
  /** Normalise new RFIO TURL style.  Handle most obvious mis-spellings
      like excess '/' characters and /dpm vs. /castor syntax
      differences.  */
  std::string normalise (const std::string &path)
  {
    std::string prefix;
    // look for options
    size_t suffix = path.find("?");
    if (suffix == std::string::npos)
    {
      // convert old syntax to new but leave "host:/path" alone
      suffix = 0;
      if (path.find (":") == std::string::npos)
      {
        size_t e = path.find_first_not_of ("/");
        if (e != std::string::npos)
        {
          size_t c = path.find("/castor/");
          if ((c != std::string::npos) && (c == e-1))
	  {
	    // /castor/path -> rfio:///?path=/castor/path
	    suffix = c;
	    prefix = "rfio:///?path=";
          }
          else
	  {
            c = path.find("/dpm/");
            if ((c != std::string::npos) && (c == e-1))
	    {
	      // /dpm/path -> rfio:///dpm/path
	      suffix = c;
	      prefix = "rfio://";
            }
	  }
        }
      }
    }
    else
    {
      // new syntax, leave alone except normalize host
      prefix = path.substr(0, suffix);
      size_t h = prefix.find_first_not_of('/');
      size_t s = prefix.find_last_not_of('/');
      prefix.resize(s+1);
      prefix.replace(0,h,"rfio://");
      prefix += '/';
    }

    return prefix + path.substr(suffix);
  }

public:
  RFIOStorageMaker()
  {
    std::string rfiotype("");
    bool err = false;
    try
    {
      edm::Service<edm::SiteLocalConfig> siteconfig;
      if (!siteconfig.isAvailable())
        err = true;
      else
        rfiotype = siteconfig->rfioType();
    }
    catch (const cms::Exception &e)
    {
      err = true;
    }

    if (err)
      edm::LogWarning("RFIOStorageMaker") 
        << "SiteLocalConfig Failed: SiteLocalConfigService is not loaded yet."
        << "Will use default 'castor' RFIO implementation.";

    if (rfiotype.empty())
      rfiotype = "castor";

    // Force Castor to move control messages out of client TCP buffers faster.
    putenv("RFIO_TCP_NODELAY=1");

    RFIOPluginFactory::get()->create(rfiotype);
    Cthread_init();
  }

  virtual Storage *open (const std::string &proto,
		         const std::string &path,
			 int mode,
			 const std::string &tmpdir)
  {
    return new RFIOFile (normalise(path), mode);
  }

  virtual bool check (const std::string &proto,
		      const std::string &path,
		      IOOffset *size = 0)
  {
    std::string npath = normalise(path);
    if (rfio_access (npath.c_str (), R_OK) != 0)
      return false;

    if (size)
    {
      struct stat buf;
      if (rfio_stat64 (npath.c_str (), &buf) != 0)
        return false;

      *size = buf.st_size;
    }

    return true;
  }
};

DEFINE_EDM_PLUGIN (StorageMakerFactory, RFIOStorageMaker, "rfio");

//////////////////////////////////////////////////////////////////////
//
// $Id: PoolCatalog.cc,v 1.3 2006/01/03 19:38:59 wmtan Exp $
//
// Author: Luca Lista
// Co-Author: Bill Tanenbaum
//
//////////////////////////////////////////////////////////////////////

#include "FWCore/MessageLogger/interface/MessageLogger.h"

#include "IOPool/Common/interface/PoolCatalog.h"
#include "POOLCore/POOLContext.h"
#include "FileCatalog/URIParser.h"
#include "FileCatalog/IFCAction.h"
#include "FileCatalog/IFCContainer.h"

namespace edm {
  PoolCatalog::PoolCatalog(unsigned int rw, std::string const& url) : catalog_() {
    bool read = rw & READ;
    bool write = rw & WRITE;
    assert(read || write);
    pool::POOLContext::loadComponent("SEAL/Services/MessageService");
    //  POOLContext::setMessageVerbosityLevel(seal::Msg::Info);

    pool::URIParser parser(url);
    parser.parse();

    if (read)
      catalog_.addReadCatalog(parser.contactstring());
    if (write)
      catalog_.setWriteCatalog(parser.contactstring());
    catalog_.connect();
    catalog_.start();
  }

  PoolCatalog::~PoolCatalog() {
    catalog_.commit();
    catalog_.disconnect();
  }

  void PoolCatalog::commitCatalog() {
    catalog_.commit();
    catalog_.start();
  }

  void PoolCatalog::registerFile(std::string const& pfn, std::string const& lfn) {
    if (!lfn.empty()) {
      pool::FCregister action;
      catalog_.setAction(action);
      action.registerLFN(pfn, lfn);       
    }
  }

  void PoolCatalog::findFile(std::string & pfn, std::string const& lfn) {
    if (isPhysical(lfn)) {
      pfn = lfn;
    } else {
      pool::FClookup action;
      catalog_.setAction(action);
      pool::FileCatalog::FileID fid;
      action.lookupFileByLFN(lfn, fid);
      if (fid == pool::FileCatalog::FileID()) {
        LogWarning("FwkJob") << "LFN: " << lfn << " not found";
        pfn = "file:" + lfn;
        LogWarning("FwkJob") << "PFN defaulted: " << pfn ;
      } else {
        LogInfo("FwkJob") << "LFN: " << lfn;
        std::string fileType;
        action.lookupBestPFN(fid, pool::FileCatalog::READ, pool::FileCatalog::SEQUENTIAL, pfn, fileType);
      }
    }
  }
}

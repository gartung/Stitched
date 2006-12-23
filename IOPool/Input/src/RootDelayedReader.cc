/*----------------------------------------------------------------------
$Id: RootDelayedReader.cc,v 1.3 2006/06/16 20:26:11 wmtan Exp $
----------------------------------------------------------------------*/

#include "IOPool/Input/src/RootDelayedReader.h"
#include "IOPool/Common/interface/RefStreamer.h"
#include "DataFormats/Common/interface/BranchKey.h"

#include "TClass.h"

namespace edm {

  RootDelayedReader::RootDelayedReader(EntryNumber const& entry,
 boost::shared_ptr<const BranchMap> bMap,
 boost::shared_ptr<TFile const> filePtr)
 : entryNumber_(entry), branches_(bMap), filePtr_(filePtr) {}

  RootDelayedReader::~RootDelayedReader() {}

  std::auto_ptr<EDProduct>
  RootDelayedReader::get(BranchKey const& k, EDProductGetter const* ep) const {
    SetRefStreamer(ep);
    TBranch *br = branches().find(k)->second.second;
    TClass *cp = gROOT->GetClass(branches().find(k)->second.first.c_str());
    std::auto_ptr<EDProduct> p(static_cast<EDProduct *>(cp->New()));
    EDProduct *pp = p.get();
    br->SetAddress(&pp);
    br->GetEntry(entryNumber_);
    return p;
  }
}

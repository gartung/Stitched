#ifndef Framework_RunPrincipal_h
#define Framework_RunPrincipal_h

/*----------------------------------------------------------------------
  
RunPrincipal: This is the class responsible for management of
per run EDProducts. It is not seen by reconstruction code;
such code sees the Run class, which is a proxy for RunPrincipal.

The major internal component of the RunPrincipal
is the DataBlock.

$Id: RunPrincipal.h,v 1.1 2006/10/27 20:56:42 wmtan Exp $

----------------------------------------------------------------------*/

#include "DataFormats/Common/interface/RunAux.h"
#include "FWCore/Framework/interface/DataBlockImpl.h"

namespace edm {
  class RunPrincipal : private DataBlockImpl {
  typedef DataBlockImpl Base;
  public:
    RunPrincipal(RunNumber_t const& id,
	Timestamp time,
	ProductRegistry const& reg,
	ProcessHistoryID const& hist = ProcessHistoryID(),
	boost::shared_ptr<DelayedReader> rtrv = boost::shared_ptr<DelayedReader>(new NoDelayedReader)) :
	  Base(reg, hist, rtrv), aux_(id, time) {}
    ~RunPrincipal() {}

    RunAux const& aux() const {
      return aux_;
    }

    RunNumber_t const& id() const {
      return aux().id();
    }

    Timestamp const& time() const {
      return aux().time();
    }

    using Base::addGroup;
    using Base::addToProcessHistory;
    using Base::begin;
    using Base::beginProcess;
    using Base::end;
    using Base::endProcess;
    using Base::getAllProvenance;
    using Base::getByLabel;
    using Base::get;
    using Base::getBySelector;
    using Base::getByType;
    using Base::getGroup;
    using Base::getIt;
    using Base::getMany;
    using Base::getManyByType;
    using Base::getProvenance;
    using Base::groupGetter;
    using Base::numEDProducts;
    using Base::processHistory;
    using Base::processHistoryID;
    using Base::prodGetter;
    using Base::productRegistry;
    using Base::put;
    using Base::size;
    using Base::store;

  private:
    RunAux aux_;
  };
}
#endif


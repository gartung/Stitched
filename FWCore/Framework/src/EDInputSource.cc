/*----------------------------------------------------------------------
$Id: EDInputSource.cc,v 1.5 2006/12/21 00:05:36 wmtan Exp $
----------------------------------------------------------------------*/

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Framework/interface/EDInputSource.h"
#include "FWCore/Framework/interface/EventPrincipal.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"

namespace edm {
  
  EDInputSource::EDInputSource(ParameterSet const& pset,
				       InputSourceDescription const& desc) :
    InputSource(pset, desc),
    catalog_(pset)
  { }

  EDInputSource::~EDInputSource() {
  }

  void
  EDInputSource::setRun(RunNumber_t) {
      LogWarning("IllegalCall")
        << "EDInputSource::setRun()\n"
        << "Run number cannot be modified for an EDInputSource\n";
  }

  void
  EDInputSource::setLumi(LuminosityBlockNumber_t) {
      LogWarning("IllegalCall")
        << "EDInputSource::setLumi()\n"
        << "Luminosity Block ID cannot be modified for an EDInputSource\n";
  }
}

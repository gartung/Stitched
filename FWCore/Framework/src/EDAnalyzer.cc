/*----------------------------------------------------------------------
  
$Id: EDAnalyzer.cc,v 1.9 2007/09/18 18:06:47 chrjones Exp $

----------------------------------------------------------------------*/

#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/src/CPCSentry.h"

#include "FWCore/ParameterSet/interface/ParameterSetDescription.h"

namespace edm
{
  EDAnalyzer::~EDAnalyzer()
  { }

  void
  EDAnalyzer::doAnalyze(Event const& e, EventSetup const& c,
			CurrentProcessingContext const* cpc) {
    detail::CPCSentry sentry(current_context_, cpc);
    this->analyze(e, c);
  }

  void 
  EDAnalyzer::doBeginJob(EventSetup const& es) {
    this->beginJob(es);
  }
  
  void 
  EDAnalyzer::doEndJob() {
    this->endJob();
  }

  void
  EDAnalyzer::doBeginRun(Run const& r, EventSetup const& c,
			CurrentProcessingContext const* cpc) {
    detail::CPCSentry sentry(current_context_, cpc);
    this->beginRun(r, c);
  }

  void
  EDAnalyzer::doEndRun(Run const& r, EventSetup const& c,
			CurrentProcessingContext const* cpc) {
    detail::CPCSentry sentry(current_context_, cpc);
    this->endRun(r, c);
  }

  void
  EDAnalyzer::doBeginLuminosityBlock(LuminosityBlock const& lb, EventSetup const& c,
			CurrentProcessingContext const* cpc) {
    detail::CPCSentry sentry(current_context_, cpc);
    this->beginLuminosityBlock(lb, c);
  }

  void
  EDAnalyzer::doEndLuminosityBlock(LuminosityBlock const& lb, EventSetup const& c,
			CurrentProcessingContext const* cpc) {
    detail::CPCSentry sentry(current_context_, cpc);
    this->endLuminosityBlock(lb, c);
  }

  void
  EDAnalyzer::doRespondToOpenInputFile(FileBlock const& fb) {
    respondToOpenInputFile(fb);
  }

  void
  EDAnalyzer::doRespondToCloseInputFile(FileBlock const& fb) {
    respondToCloseInputFile(fb);
  }

  void
  EDAnalyzer::doRespondToOpenOutputFiles(FileBlock const& fb) {
    respondToOpenOutputFiles(fb);
  }

  void
  EDAnalyzer::doRespondToCloseOutputFiles(FileBlock const& fb) {
    respondToCloseOutputFiles(fb);
  }

  CurrentProcessingContext const*
  EDAnalyzer::currentContext() const {
    return current_context_;
  }

  void
  EDAnalyzer::fillDescription(ParameterSetDescription& iDesc) {
    iDesc.setUnknown();
  }
  
}
  

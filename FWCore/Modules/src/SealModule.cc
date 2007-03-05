#include "FWCore/Framework/interface/InputSourceMacros.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ServiceRegistry/interface/ServiceMaker.h"
#include "FWCore/Framework/interface/SourceFactory.h"
#include "FWCore/Framework/interface/LooperFactory.h"
#include "FWCore/Modules/src/AsciiOutputModule.h"
#include "FWCore/Modules/src/XMLOutputModule.h"
#include "FWCore/Modules/src/EmptyESSource.h"
#include "FWCore/Modules/src/EmptySource.h"
#include "FWCore/Modules/src/EventContentAnalyzer.h"
#include "FWCore/Modules/src/EventSetupRecordDataGetter.h"
#include "FWCore/Modules/src/Prescaler.h"
#include "FWCore/Modules/src/IterateNTimesLooper.h"
#include "FWCore/Modules/src/PrescaleService.h"

using edm::AsciiOutputModule;
using edm::EventSetupRecordDataGetter;
using edm::EmptyESSource;
using edm::EmptySource;
using edm::Prescaler;
using edm::XMLOutputModule;
using edm::service::PrescaleService;
DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_MODULE(AsciiOutputModule);
DEFINE_ANOTHER_FWK_MODULE(XMLOutputModule);
DEFINE_ANOTHER_FWK_MODULE(EventContentAnalyzer);
DEFINE_ANOTHER_FWK_MODULE(EventSetupRecordDataGetter);
DEFINE_ANOTHER_FWK_MODULE(Prescaler);
DEFINE_ANOTHER_FWK_EVENTSETUP_SOURCE(EmptyESSource);
DEFINE_ANOTHER_FWK_INPUT_SOURCE(EmptySource);
DEFINE_ANOTHER_FWK_LOOPER(IterateNTimesLooper);
DEFINE_ANOTHER_FWK_SERVICE(PrescaleService);

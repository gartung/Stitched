add_library(FWCoreModules SHARED 
  src/AbortOnEventIDAnalyzer.cc
  src/AsciiOutputModule.cc
  src/BunchCrossingFilter.cc
  src/EmptyESSource.cc
  src/EmptySource.cc
  src/EventAuxiliaryHistoryProducer.cc
  src/EventContentAnalyzer.cc
  src/EventIDChecker.cc
  src/EventSetupCacheIdentifierChecker.cc
  src/EventSetupRecordDataGetter.cc
  src/GetProductCheckerOutputModule.cc
  src/IterateNTimesLooper.cc
  src/LogErrorFilter.cc
  src/LogErrorHarvester.cc
  src/ModuloEventIDFilter.cc
  src/ModuloStreamIDFilter.cc
  src/NavigateEventsLooper.cc
  src/PathStatusFilter.cc
  src/Prescaler.cc
  src/PrintEventSetupContent.cc
  src/PrintEventSetupDataRetrieval.cc
  src/ProvenanceCheckerOutputModule.cc
  src/RunLumiEventChecker.cc
  src/SwitchProducer.cc
  src/TestSource.cc
  src/TimeStudyModules.cc
)

target_include_directories(FWCoreModules PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreModules PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(FWCoreModules PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  DataFormatsCommon
  DataFormatsProvenance
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreSources
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

install( TARGETS FWCoreModules DESTINATION  lib  EXPORT stitched::FWCoreModules)


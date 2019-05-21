add_library(FWCoreFrameworkTestDummyForEventSetup SHARED 
  DepOn2Record.cc
  DepRecord.cc
  Dummy2Record.cc
  DummyData.cc
  DummyRecord.cc
)

target_include_directories(FWCoreFrameworkTestDummyForEventSetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTestDummyForEventSetup PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkTest SHARED 
  MockEventProcessor.cc
  stubs/TestBeginEndJobAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTest PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTest PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
Python2::Python
Threads::Threads
)


add_library(TestOutputModule SHARED 
  stubs/TestOutputModule.cc
)

target_include_directories(TestOutputModule PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOutputModule PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestOutputModule PUBLIC
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
FWCoreParameterSet
FWCoreServiceRegistry
Python2::Python
Threads::Threads
)


add_library(TestFilterModule SHARED 
  stubs/TestFilterModule.cc
)

target_include_directories(TestFilterModule PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFilterModule PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFilterModule PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestTBBTasksAnalyzer SHARED 
  stubs/TestNThreadsChecker.cc
  stubs/TestTBBTasksAnalyzer.cc
)

target_include_directories(TestTBBTasksAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestTBBTasksAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestTBBTasksAnalyzer PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_executable(TestFWCoreFrameworkTBBTasks
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTBBTasks PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkTBBTasks PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkTBBTasks TestFWCoreFrameworkTBBTasks)

add_library(TestTriggerNames SHARED 
  stubs/TestTriggerNames.cc
)

target_include_directories(TestTriggerNames PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestTriggerNames PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestTriggerNames PUBLIC
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
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_library(TestMergeResults SHARED 
  stubs/TestMergeResults.cc
)

target_include_directories(TestMergeResults PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestMergeResults PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestMergeResults PUBLIC
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
DataFormatsTestObjects
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_library(RunLumiEventAnalyzer SHARED 
  stubs/RunLumiEventAnalyzer.cc
)

target_include_directories(RunLumiEventAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RunLumiEventAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(RunLumiEventAnalyzer PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestMod SHARED 
  stubs/TestMod.cc
)

target_include_directories(TestMod PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestMod PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestMod PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestToyModules SHARED 
  stubs/DeleteEarlyModules.cc
  stubs/ToyAnalyzers.cc
  stubs/ToyDoubleProducers.cc
  stubs/ToyIntProducers.cc
  stubs/ToyModules.cc
  stubs/ToyRefProducers.cc
  stubs/ToySTLProducers.cc
)

target_include_directories(TestToyModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestToyModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestToyModules PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestGlobalModules SHARED 
  stubs/TestGetPathStatus.cc
  stubs/TestGlobalAnalyzers.cc
  stubs/TestGlobalFilters.cc
  stubs/TestGlobalProducers.cc
)

target_include_directories(TestGlobalModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestGlobalModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestGlobalModules PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestLimitedModules SHARED 
  stubs/TestLimitedAnalyzers.cc
  stubs/TestLimitedFilters.cc
  stubs/TestLimitedProducers.cc
)

target_include_directories(TestLimitedModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLimitedModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestLimitedModules PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestOneModules SHARED 
  stubs/TestOneAnalyzers.cc
  stubs/TestOneFilters.cc
  stubs/TestOneProducers.cc
)

target_include_directories(TestOneModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOneModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestOneModules PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestStreamModules SHARED 
  stubs/TestStreamAnalyzers.cc
  stubs/TestStreamFilters.cc
  stubs/TestStreamProducers.cc
)

target_include_directories(TestStreamModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestStreamModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestStreamModules PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestSchedulerModule1 SHARED 
  stubs/TestSchedulerModule1.cc
)

target_include_directories(TestSchedulerModule1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSchedulerModule1 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestSchedulerModule1 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestSchedulerModule2 SHARED 
  stubs/TestSchedulerModule2.cc
)

target_include_directories(TestSchedulerModule2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSchedulerModule2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestSchedulerModule2 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_library(TestLoadableDummyFinder SHARED 
  stubs/LoadableDummyFinder.cc
)

target_include_directories(TestLoadableDummyFinder PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyFinder PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestLoadableDummyFinder PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Python2::Python
Threads::Threads
)


add_library(TestLoadableDummyESSource SHARED 
  stubs/LoadableDummyESSource.cc
)

target_include_directories(TestLoadableDummyESSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyESSource PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestLoadableDummyESSource PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Python2::Python
Threads::Threads
)


add_library(TestLoadableDummyEventSetupRecordRetriever SHARED 
  stubs/LoadableDummyEventSetupRecordRetriever.cc
)

target_include_directories(TestLoadableDummyEventSetupRecordRetriever PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestLoadableDummyEventSetupRecordRetriever PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
Python2::Python
Threads::Threads
)


add_library(TestLoadableDummyProvider SHARED 
  stubs/LoadableDummyProvider.cc
)

target_include_directories(TestLoadableDummyProvider PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyProvider PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestLoadableDummyProvider PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkTestDummyLooper SHARED 
  stubs/DummyLooper.cc
  stubs/TestModuleChangeLooper.cc
)

target_include_directories(FWCoreFrameworkTestDummyLooper PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTestDummyLooper PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsTestObjects
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkTestESDummyDataAnalyzer SHARED 
  stubs/TestESDummyDataAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
FWCoreParameterSet
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkTestPRegisterModules SHARED 
  stubs/TestPRegisterModule1.cc
  stubs/TestPRegisterModule2.cc
  stubs/TestPRegisterModules.cc
)

target_include_directories(FWCoreFrameworkTestPRegisterModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTestPRegisterModules PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkTestBeginEndJobAnalyzer SHARED 
  stubs/TestBeginEndJobAnalyzerModule.cc
)

target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTest
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkTestFailuresAnalyzer SHARED 
  stubs/TestFailuresAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkTestFailuresAnalyzer PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_library(FWCoreFrameworkHistoryAnalyzer SHARED 
  stubs/HistoryAnalyzer.cc
)

target_include_directories(FWCoreFrameworkHistoryAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreFrameworkHistoryAnalyzer PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
Python2::Python
Threads::Threads
)


add_executable(TestFWCoreFramework
  edconsumerbase_t.cppunit.cc
  edproducer_productregistry_callback.cc
  event_getrefbeforeput_t.cppunit.cc
  generichandle_t.cppunit.cc
  global_module_t.cppunit.cc
  global_outputmodule_t.cppunit.cc
  limited_module_t.cppunit.cc
  limited_outputmodule_t.cppunit.cc
  maker2_t.cppunit.cc
  maker_t.cppunit.cc
  one_outputmodule_t.cppunit.cc
  productregistry.cppunit.cc
  stream_module_t.cppunit.cc
  testRunner.cpp
  throwIfImproperDependencies_t.cppunit.cc
)

target_include_directories(TestFWCoreFramework PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFramework PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFramework PUBLIC
${CPPUNIT_LIBRARY}
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
DataFormatsTestObjects
DataFormatsWrappedStdDictionaries
FWCoreFramework
FWCoreParameterSet
FWCoreParameterSetReader
FWCoreUtilities
FWCoreVersion
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFramework TestFWCoreFramework)

add_executable(TestFWCoreFrameworkeventsetup
  callback_t.cppunit.cc
  datakey_t.cppunit.cc
  dependentrecord_t.cppunit.cc
  esproducer_t.cppunit.cc
  esproducts_t.cppunit.cc
  eventsetup_t.cppunit.cc
  eventsetupplugin_t.cppunit.cc
  eventsetuprecord_t.cppunit.cc
  eventsetupscontroller_t.cppunit.cc
  fullchain_t.cppunit.cc
  intersectingiovrecordintervalfinder_t.cppunit.cc
  interval_t.cppunit.cc
  iovsyncvalue_t.cppunit.cc
  proxyfactoryproducer_t.cppunit.cc
  testRunner.cpp
)

target_include_directories(TestFWCoreFrameworkeventsetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkeventsetup PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkeventsetup TestFWCoreFrameworkeventsetup)

add_executable(TestFWCoreFrameworkeventprocessor
  eventprocessor2_t.cppunit.cc
  eventprocessor_t.cppunit.cc
  testRunner.cpp
)

target_include_directories(TestFWCoreFrameworkeventprocessor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkeventprocessor PUBLIC
${CPPUNIT_LIBRARY}
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
DataFormatsWrappedStdDictionaries
FWCoreFramework
FWCoreFrameworkTest
FWCoreParameterSetReader
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkeventprocessor TestFWCoreFrameworkeventprocessor)

add_executable(TestFWCoreFrameworkeventprincipal
  eventprincipal_t.cppunit.cc
  sharedresourcesregistry_t.cppunit.cc
  testRunner.cpp
)

target_include_directories(TestFWCoreFrameworkeventprincipal PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkeventprincipal PUBLIC
${CPPUNIT_LIBRARY}
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
DataFormatsTestObjects
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkeventprincipal TestFWCoreFrameworkeventprincipal)

add_executable(TestFWCoreFrameworkEvent
  Event_t.cpp
)

target_include_directories(TestFWCoreFrameworkEvent PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEvent PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkEvent PUBLIC
${CPPUNIT_LIBRARY}
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
DataFormatsTestObjects
DataFormatsWrappedStdDictionaries
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkEvent TestFWCoreFrameworkEvent)

add_executable(TestFWCoreFrameworkView
  View_t.cpp
)

target_include_directories(TestFWCoreFrameworkView PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkView PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkView PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkView TestFWCoreFrameworkView)

add_executable(TestFWCoreFrameworkCmsRun
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkCmsRun PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkCmsRun PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkCmsRun TestFWCoreFrameworkCmsRun)

add_executable(TestFWCoreFrameworkESRefer
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkESRefer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkESRefer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkESRefer PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkESRefer TestFWCoreFrameworkESRefer)

add_executable(TestFWCoreFrameworkUnscheduled
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkUnscheduled PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkUnscheduled PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkUnscheduled TestFWCoreFrameworkUnscheduled)

add_executable(TestFWCoreFrameworkGlobalStreamOne
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkGlobalStreamOne PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkGlobalStreamOne PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
DataFormatsWrappedStdDictionaries
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkGlobalStreamOne TestFWCoreFrameworkGlobalStreamOne)

add_executable(TestFWCoreFrameworkMayConsumesDeadlock
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
DataFormatsWrappedStdDictionaries
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkMayConsumesDeadlock TestFWCoreFrameworkMayConsumesDeadlock)

add_executable(TestFWCoreFrameworkReplace
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkReplace PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkReplace PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkReplace PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkReplace TestFWCoreFrameworkReplace)

add_executable(TestFWCoreFrameworkESProducerLooper
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkESProducerLooper PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkESProducerLooper PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkESProducerLooper TestFWCoreFrameworkESProducerLooper)

add_executable(TestFWCoreFrameworkTrigBit
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTrigBit PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkTrigBit PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkTrigBit TestFWCoreFrameworkTrigBit)

add_executable(TestFWCoreFrameworkTrigMask
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTrigMask PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkTrigMask PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkTrigMask TestFWCoreFrameworkTrigMask)

add_executable(TestXMLSafeException
  TestDriver.cpp
)

target_include_directories(TestXMLSafeException PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestXMLSafeException PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestXMLSafeException PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestXMLSafeException TestXMLSafeException)

add_executable(TestFWCoreFrameworkProductSelector
  ProductSelector_t.cpp
)

target_include_directories(TestFWCoreFrameworkProductSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkProductSelector PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkProductSelector TestFWCoreFrameworkProductSelector)

add_executable(TestFWCoreFrameworkEventSelector
  EventSelector_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkEventSelector PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkEventSelector TestFWCoreFrameworkEventSelector)

add_executable(TestFWCoreFrameworkEventSelWildcard
  EventSelWildcard_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelWildcard PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkEventSelWildcard PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkEventSelWildcard TestFWCoreFrameworkEventSelWildcard)

add_executable(TestFWCoreFrameworkEventSelExc
  EventSelExc_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelExc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkEventSelExc PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkEventSelExc TestFWCoreFrameworkEventSelExc)

add_executable(TestFWCoreFrameworkEventSelOverlap
  EventSelOverlap_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelOverlap PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkEventSelOverlap PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkEventSelOverlap TestFWCoreFrameworkEventSelOverlap)

add_executable(TestFWCoreFrameworkRegistryTemplate
  RegistryTemplate_t.cpp
)

target_include_directories(TestFWCoreFrameworkRegistryTemplate PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkRegistryTemplate PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkRegistryTemplate TestFWCoreFrameworkRegistryTemplate)

add_executable(TestFWCoreOutputModuleUtilities
  OutputModuleUtilities_t.cpp
)

target_include_directories(TestFWCoreOutputModuleUtilities PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreOutputModuleUtilities PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
Python2::Python
Threads::Threads
)


add_test(TestFWCoreOutputModuleUtilities TestFWCoreOutputModuleUtilities)

add_executable(TestFWCoreFrameworkStatemachine
  statemachine_t.cc
)

target_include_directories(TestFWCoreFrameworkStatemachine PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkStatemachine PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreFrameworkTest
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkStatemachine TestFWCoreFrameworkStatemachine)

add_executable(TestFWCoreFrameworkStatemachineSH
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkStatemachineSH PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkStatemachineSH PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkStatemachineSH TestFWCoreFrameworkStatemachineSH)

add_executable(TestFWCoreFrameworkInputTagFailure
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkInputTagFailure PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkInputTagFailure PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkInputTagFailure TestFWCoreFrameworkInputTagFailure)

add_executable(TestFWCoreFrameworkDeleteEarly
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkDeleteEarly PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkDeleteEarly PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkDeleteEarly TestFWCoreFrameworkDeleteEarly)

add_executable(TestFWCoreFrameworkEarlyTerminationSignal
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkEarlyTerminationSignal TestFWCoreFrameworkEarlyTerminationSignal)

add_executable(TestFWCoreFrameworkPrintDependencies
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkPrintDependencies PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkPrintDependencies PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkPrintDependencies TestFWCoreFrameworkPrintDependencies)

add_executable(TestFWCoreFrameworkTransitions
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTransitions PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTransitions PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkTransitions PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkTransitions TestFWCoreFrameworkTransitions)

add_executable(TestFWCoreFrameworkCatch2notTP
  test_catch2_main.cc
  test_catch2notTP_MergeableRunProductMetadata.cc
)

target_include_directories(TestFWCoreFrameworkCatch2notTP PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkCatch2notTP PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreFrameworkCatch2notTP PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
Python2::Python
Threads::Threads
)


add_test(TestFWCoreFrameworkCatch2notTP TestFWCoreFrameworkCatch2notTP)


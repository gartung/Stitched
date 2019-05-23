add_library(FWCoreFrameworkTestDummyForEventSetup SHARED ${FWCoreFrameworkTestDummyForEventSetup_EXTRA_SOURCES}
  DepOn2Record.cc
  DepRecord.cc
  Dummy2Record.cc
  DummyData.cc
  DummyRecord.cc
)

set_target_properties(FWCoreFrameworkTestDummyForEventSetup PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_library(FWCoreFrameworkTest SHARED ${FWCoreFrameworkTest_EXTRA_SOURCES}
  MockEventProcessor.cc
  stubs/TestBeginEndJobAnalyzer.cc
)

set_target_properties(FWCoreFrameworkTest PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_library(TestOutputModule SHARED ${TestOutputModule_EXTRA_SOURCES}
  stubs/TestOutputModule.cc
)

set_target_properties(TestOutputModule PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestOutputModule PROPERTIES PREFIX "plugin")
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


add_library(TestFilterModule SHARED ${TestFilterModule_EXTRA_SOURCES}
  stubs/TestFilterModule.cc
)

set_target_properties(TestFilterModule PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestFilterModule PROPERTIES PREFIX "plugin")
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


add_library(TestTBBTasksAnalyzer SHARED ${TestTBBTasksAnalyzer_EXTRA_SOURCES}
  stubs/TestNThreadsChecker.cc
  stubs/TestTBBTasksAnalyzer.cc
)

set_target_properties(TestTBBTasksAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestTBBTasksAnalyzer PROPERTIES PREFIX "plugin")
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

add_test(NAME TestFWCoreFrameworkTBBTasks_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_tbbTasks.sh)
set_tests_properties(TestFWCoreFrameworkTBBTasks_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkTBBTasks_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_library(TestTriggerNames SHARED ${TestTriggerNames_EXTRA_SOURCES}
  stubs/TestTriggerNames.cc
)

set_target_properties(TestTriggerNames PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestTriggerNames PROPERTIES PREFIX "plugin")
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


add_library(TestMergeResults SHARED ${TestMergeResults_EXTRA_SOURCES}
  stubs/TestMergeResults.cc
)

set_target_properties(TestMergeResults PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestMergeResults PROPERTIES PREFIX "plugin")
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


add_library(RunLumiEventAnalyzer SHARED ${RunLumiEventAnalyzer_EXTRA_SOURCES}
  stubs/RunLumiEventAnalyzer.cc
)

set_target_properties(RunLumiEventAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(RunLumiEventAnalyzer PROPERTIES PREFIX "plugin")
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


add_library(TestMod SHARED ${TestMod_EXTRA_SOURCES}
  stubs/TestMod.cc
)

set_target_properties(TestMod PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestMod PROPERTIES PREFIX "plugin")
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


add_library(TestToyModules SHARED ${TestToyModules_EXTRA_SOURCES}
  stubs/DeleteEarlyModules.cc
  stubs/ToyAnalyzers.cc
  stubs/ToyDoubleProducers.cc
  stubs/ToyIntProducers.cc
  stubs/ToyModules.cc
  stubs/ToyRefProducers.cc
  stubs/ToySTLProducers.cc
)

set_target_properties(TestToyModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestToyModules PROPERTIES PREFIX "plugin")
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


add_library(TestGlobalModules SHARED ${TestGlobalModules_EXTRA_SOURCES}
  stubs/TestGetPathStatus.cc
  stubs/TestGlobalAnalyzers.cc
  stubs/TestGlobalFilters.cc
  stubs/TestGlobalProducers.cc
)

set_target_properties(TestGlobalModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestGlobalModules PROPERTIES PREFIX "plugin")
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


add_library(TestLimitedModules SHARED ${TestLimitedModules_EXTRA_SOURCES}
  stubs/TestLimitedAnalyzers.cc
  stubs/TestLimitedFilters.cc
  stubs/TestLimitedProducers.cc
)

set_target_properties(TestLimitedModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestLimitedModules PROPERTIES PREFIX "plugin")
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


add_library(TestOneModules SHARED ${TestOneModules_EXTRA_SOURCES}
  stubs/TestOneAnalyzers.cc
  stubs/TestOneFilters.cc
  stubs/TestOneProducers.cc
)

set_target_properties(TestOneModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestOneModules PROPERTIES PREFIX "plugin")
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


add_library(TestStreamModules SHARED ${TestStreamModules_EXTRA_SOURCES}
  stubs/TestStreamAnalyzers.cc
  stubs/TestStreamFilters.cc
  stubs/TestStreamProducers.cc
)

set_target_properties(TestStreamModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestStreamModules PROPERTIES PREFIX "plugin")
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


add_library(TestSchedulerModule1 SHARED ${TestSchedulerModule1_EXTRA_SOURCES}
  stubs/TestSchedulerModule1.cc
)

set_target_properties(TestSchedulerModule1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestSchedulerModule1 PROPERTIES PREFIX "plugin")
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


add_library(TestSchedulerModule2 SHARED ${TestSchedulerModule2_EXTRA_SOURCES}
  stubs/TestSchedulerModule2.cc
)

set_target_properties(TestSchedulerModule2 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestSchedulerModule2 PROPERTIES PREFIX "plugin")
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


add_library(TestLoadableDummyFinder SHARED ${TestLoadableDummyFinder_EXTRA_SOURCES}
  stubs/LoadableDummyFinder.cc
)

set_target_properties(TestLoadableDummyFinder PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestLoadableDummyFinder PROPERTIES PREFIX "plugin")
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


add_library(TestLoadableDummyESSource SHARED ${TestLoadableDummyESSource_EXTRA_SOURCES}
  stubs/LoadableDummyESSource.cc
)

set_target_properties(TestLoadableDummyESSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestLoadableDummyESSource PROPERTIES PREFIX "plugin")
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


add_library(TestLoadableDummyEventSetupRecordRetriever SHARED ${TestLoadableDummyEventSetupRecordRetriever_EXTRA_SOURCES}
  stubs/LoadableDummyEventSetupRecordRetriever.cc
)

set_target_properties(TestLoadableDummyEventSetupRecordRetriever PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestLoadableDummyEventSetupRecordRetriever PROPERTIES PREFIX "plugin")
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


add_library(TestLoadableDummyProvider SHARED ${TestLoadableDummyProvider_EXTRA_SOURCES}
  stubs/LoadableDummyProvider.cc
)

set_target_properties(TestLoadableDummyProvider PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestLoadableDummyProvider PROPERTIES PREFIX "plugin")
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


add_library(FWCoreFrameworkTestDummyLooper SHARED ${FWCoreFrameworkTestDummyLooper_EXTRA_SOURCES}
  stubs/DummyLooper.cc
  stubs/TestModuleChangeLooper.cc
)

set_target_properties(FWCoreFrameworkTestDummyLooper PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreFrameworkTestDummyLooper PROPERTIES PREFIX "plugin")
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


add_library(FWCoreFrameworkTestESDummyDataAnalyzer SHARED ${FWCoreFrameworkTestESDummyDataAnalyzer_EXTRA_SOURCES}
  stubs/TestESDummyDataAnalyzer.cc
)

set_target_properties(FWCoreFrameworkTestESDummyDataAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreFrameworkTestESDummyDataAnalyzer PROPERTIES PREFIX "plugin")
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


add_library(FWCoreFrameworkTestPRegisterModules SHARED ${FWCoreFrameworkTestPRegisterModules_EXTRA_SOURCES}
  stubs/TestPRegisterModule1.cc
  stubs/TestPRegisterModule2.cc
  stubs/TestPRegisterModules.cc
)

set_target_properties(FWCoreFrameworkTestPRegisterModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreFrameworkTestPRegisterModules PROPERTIES PREFIX "plugin")
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


add_library(FWCoreFrameworkTestBeginEndJobAnalyzer SHARED ${FWCoreFrameworkTestBeginEndJobAnalyzer_EXTRA_SOURCES}
  stubs/TestBeginEndJobAnalyzerModule.cc
)

set_target_properties(FWCoreFrameworkTestBeginEndJobAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreFrameworkTestBeginEndJobAnalyzer PROPERTIES PREFIX "plugin")
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


add_library(FWCoreFrameworkTestFailuresAnalyzer SHARED ${FWCoreFrameworkTestFailuresAnalyzer_EXTRA_SOURCES}
  stubs/TestFailuresAnalyzer.cc
)

set_target_properties(FWCoreFrameworkTestFailuresAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreFrameworkTestFailuresAnalyzer PROPERTIES PREFIX "plugin")
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


add_library(FWCoreFrameworkHistoryAnalyzer SHARED ${FWCoreFrameworkHistoryAnalyzer_EXTRA_SOURCES}
  stubs/HistoryAnalyzer.cc
)

set_target_properties(FWCoreFrameworkHistoryAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreFrameworkHistoryAnalyzer PROPERTIES PREFIX "plugin")
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

add_test(NAME TestFWCoreFramework_CTest COMMAND TestFWCoreFramework)

set_tests_properties(TestFWCoreFramework_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFramework_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFramework PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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

add_test(NAME TestFWCoreFrameworkeventsetup_CTest COMMAND TestFWCoreFrameworkeventsetup)

set_tests_properties(TestFWCoreFrameworkeventsetup_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkeventsetup_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkeventsetup PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkeventprocessor
  eventprocessor2_t.cppunit.cc
  eventprocessor_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreFrameworkeventprocessor_CTest COMMAND TestFWCoreFrameworkeventprocessor)

set_tests_properties(TestFWCoreFrameworkeventprocessor_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkeventprocessor_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkeventprocessor PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkeventprincipal
  eventprincipal_t.cppunit.cc
  sharedresourcesregistry_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreFrameworkeventprincipal_CTest COMMAND TestFWCoreFrameworkeventprincipal)

set_tests_properties(TestFWCoreFrameworkeventprincipal_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkeventprincipal_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkeventprincipal PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkEvent
  Event_t.cpp
)

add_test(NAME TestFWCoreFrameworkEvent_CTest COMMAND TestFWCoreFrameworkEvent)

set_tests_properties(TestFWCoreFrameworkEvent_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkEvent_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkEvent PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkView
  View_t.cpp
)

add_test(NAME TestFWCoreFrameworkView_CTest COMMAND TestFWCoreFrameworkView)

set_tests_properties(TestFWCoreFrameworkView_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkView_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkView PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkCmsRun
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkCmsRun_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_cmsRun.sh)
set_tests_properties(TestFWCoreFrameworkCmsRun_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkCmsRun_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkESRefer
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkESRefer_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_es_refer_tests.sh)
set_tests_properties(TestFWCoreFrameworkESRefer_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkESRefer_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkUnscheduled
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkUnscheduled_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_unscheduled.sh)
set_tests_properties(TestFWCoreFrameworkUnscheduled_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkUnscheduled_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkGlobalStreamOne
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkGlobalStreamOne_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_global_stream_one.sh)
set_tests_properties(TestFWCoreFrameworkGlobalStreamOne_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkGlobalStreamOne_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkMayConsumesDeadlock
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkMayConsumesDeadlock_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_deadlock_test.sh)
set_tests_properties(TestFWCoreFrameworkMayConsumesDeadlock_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkMayConsumesDeadlock_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkReplace
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkReplace_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_replace_tests.sh)
set_tests_properties(TestFWCoreFrameworkReplace_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkReplace_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkESProducerLooper
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkESProducerLooper_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_esproducerlooper.sh)
set_tests_properties(TestFWCoreFrameworkESProducerLooper_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkESProducerLooper_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkTrigBit
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTrigBit_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_trigbit.sh)
set_tests_properties(TestFWCoreFrameworkTrigBit_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkTrigBit_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkTrigMask
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTrigMask_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_trigmask.sh)
set_tests_properties(TestFWCoreFrameworkTrigMask_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkTrigMask_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestXMLSafeException
  TestDriver.cpp
)

add_test(NAME TestXMLSafeException_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_XMLException.sh)
set_tests_properties(TestXMLSafeException_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestXMLSafeException_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkProductSelector
  ProductSelector_t.cpp
)

add_test(NAME TestFWCoreFrameworkProductSelector_CTest COMMAND TestFWCoreFrameworkProductSelector)

set_tests_properties(TestFWCoreFrameworkProductSelector_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkProductSelector_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkProductSelector PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkEventSelector
  EventSelector_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelector_CTest COMMAND TestFWCoreFrameworkEventSelector)

set_tests_properties(TestFWCoreFrameworkEventSelector_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkEventSelector_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkEventSelector PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkEventSelWildcard
  EventSelWildcard_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelWildcard_CTest COMMAND TestFWCoreFrameworkEventSelWildcard)

set_tests_properties(TestFWCoreFrameworkEventSelWildcard_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkEventSelWildcard_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkEventSelWildcard PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkEventSelExc
  EventSelExc_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelExc_CTest COMMAND TestFWCoreFrameworkEventSelExc)

set_tests_properties(TestFWCoreFrameworkEventSelExc_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkEventSelExc_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkEventSelExc PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkEventSelOverlap
  EventSelOverlap_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelOverlap_CTest COMMAND TestFWCoreFrameworkEventSelOverlap)

set_tests_properties(TestFWCoreFrameworkEventSelOverlap_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkEventSelOverlap_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkEventSelOverlap PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkRegistryTemplate
  RegistryTemplate_t.cpp
)

add_test(NAME TestFWCoreFrameworkRegistryTemplate_CTest COMMAND TestFWCoreFrameworkRegistryTemplate)

set_tests_properties(TestFWCoreFrameworkRegistryTemplate_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkRegistryTemplate_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkRegistryTemplate PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreOutputModuleUtilities
  OutputModuleUtilities_t.cpp
)

add_test(NAME TestFWCoreOutputModuleUtilities_CTest COMMAND TestFWCoreOutputModuleUtilities)

set_tests_properties(TestFWCoreOutputModuleUtilities_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreOutputModuleUtilities_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreOutputModuleUtilities PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkStatemachine
  statemachine_t.cc
)

add_test(NAME TestFWCoreFrameworkStatemachine_CTest COMMAND TestFWCoreFrameworkStatemachine)

set_tests_properties(TestFWCoreFrameworkStatemachine_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkStatemachine_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkStatemachine PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCoreFrameworkStatemachineSH
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkStatemachineSH_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_statemachine.sh)
set_tests_properties(TestFWCoreFrameworkStatemachineSH_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkStatemachineSH_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkInputTagFailure
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkInputTagFailure_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_InputTag_cache_failure.sh)
set_tests_properties(TestFWCoreFrameworkInputTagFailure_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkInputTagFailure_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkDeleteEarly
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkDeleteEarly_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_deleteEarly.sh)
set_tests_properties(TestFWCoreFrameworkDeleteEarly_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkDeleteEarly_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkEarlyTerminationSignal
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkEarlyTerminationSignal_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_earlyTerminationSignal.sh)
set_tests_properties(TestFWCoreFrameworkEarlyTerminationSignal_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkEarlyTerminationSignal_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkPrintDependencies
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkPrintDependencies_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_PrintDependencies.sh)
set_tests_properties(TestFWCoreFrameworkPrintDependencies_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkPrintDependencies_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkTransitions
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTransitions_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/transition_test.sh)
set_tests_properties(TestFWCoreFrameworkTransitions_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreFrameworkTransitions_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

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


add_executable(TestFWCoreFrameworkCatch2notTP
  test_catch2_main.cc
  test_catch2notTP_MergeableRunProductMetadata.cc
)

add_test(NAME TestFWCoreFrameworkCatch2notTP_CTest COMMAND TestFWCoreFrameworkCatch2notTP)

set_tests_properties(TestFWCoreFrameworkCatch2notTP_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreFrameworkCatch2notTP_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreFrameworkCatch2notTP PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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



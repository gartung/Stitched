add_executable(TestFWCoreIntegrationStandalone
  standalone_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreIntegrationStandalone_CTest COMMAND TestFWCoreIntegrationStandalone)

set_tests_properties(TestFWCoreIntegrationStandalone_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreIntegrationStandalone_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreIntegrationStandalone PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(TestFWCoreIntegrationStandalone PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreIntegrationStandalone PUBLIC
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

target_link_libraries(TestFWCoreIntegrationStandalone PUBLIC
${CPPUNIT_LIBRARY}
FWCoreFramework
FWCoreIntegration
FWCoreParameterSetReader
FWCorePluginManager
FWCoreUtilities
)


add_executable(TestIntegrationEventHistory
  TestIntegration.cpp
)

add_test(NAME TestIntegrationEventHistory_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/eventHistoryTest.sh)
set_tests_properties(TestIntegrationEventHistory_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationEventHistory_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationEventHistory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationEventHistory PUBLIC
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

target_link_libraries(TestIntegrationEventHistory PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRef
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRef_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/refTest.sh)
set_tests_properties(TestIntegrationRef_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationRef_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationRef PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRef PUBLIC
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

target_link_libraries(TestIntegrationRef PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationTransRef
  TestIntegration.cpp
)

add_test(NAME TestIntegrationTransRef_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/transRefTest.sh)
set_tests_properties(TestIntegrationTransRef_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationTransRef_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationTransRef PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationTransRef PUBLIC
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

target_link_libraries(TestIntegrationTransRef PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationTableTest
  TestIntegration.cpp
)

add_test(NAME TestIntegrationTableTest_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/testTables.sh)
set_tests_properties(TestIntegrationTableTest_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationTableTest_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationTableTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationTableTest PUBLIC
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

target_link_libraries(TestIntegrationTableTest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationProducedSource
  TestIntegration.cpp
)

add_test(NAME TestIntegrationProducedSource_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/inputSourceTest.sh)
set_tests_properties(TestIntegrationProducedSource_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationProducedSource_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationProducedSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationProducedSource PUBLIC
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

target_link_libraries(TestIntegrationProducedSource PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationExternalSource
  TestIntegration.cpp
)

add_test(NAME TestIntegrationExternalSource_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/inputExtSourceTest.sh)
set_tests_properties(TestIntegrationExternalSource_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationExternalSource_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationExternalSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationExternalSource PUBLIC
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

target_link_libraries(TestIntegrationExternalSource PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationEventSetup
  TestIntegration.cpp
)

add_test(NAME TestIntegrationEventSetup_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/eventSetupTest.sh)
set_tests_properties(TestIntegrationEventSetup_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationEventSetup_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationEventSetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationEventSetup PUBLIC
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

target_link_libraries(TestIntegrationEventSetup PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationHierarchyExample
  TestIntegration.cpp
)

add_test(NAME TestIntegrationHierarchyExample_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/hierarchy_example.sh)
set_tests_properties(TestIntegrationHierarchyExample_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationHierarchyExample_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationHierarchyExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationHierarchyExample PUBLIC
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

target_link_libraries(TestIntegrationHierarchyExample PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationServiceExample
  TestIntegration.cpp
)

add_test(NAME TestIntegrationServiceExample_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/service_example.sh)
set_tests_properties(TestIntegrationServiceExample_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationServiceExample_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationServiceExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationServiceExample PUBLIC
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

target_link_libraries(TestIntegrationServiceExample PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationView
  TestIntegration.cpp
)

add_test(NAME TestIntegrationView_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/ViewTest.sh)
set_tests_properties(TestIntegrationView_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationView_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationView PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationView PUBLIC
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

target_link_libraries(TestIntegrationView PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationSeriesOfProcesses
  TestIntegration.cpp
)

add_test(NAME TestIntegrationSeriesOfProcesses_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_SeriesOfProcesses.sh)
set_tests_properties(TestIntegrationSeriesOfProcesses_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationSeriesOfProcesses_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationSeriesOfProcesses PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationSeriesOfProcesses PUBLIC
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

target_link_libraries(TestIntegrationSeriesOfProcesses PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestParentageWithStreamerIO
  TestIntegration.cpp
)

add_test(NAME TestParentageWithStreamerIO_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_ParentageWithStreamerIO.sh)
set_tests_properties(TestParentageWithStreamerIO_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestParentageWithStreamerIO_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestParentageWithStreamerIO PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestParentageWithStreamerIO PUBLIC
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

target_link_libraries(TestParentageWithStreamerIO PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationThinningTests
  TestIntegration.cpp
)

add_test(NAME TestIntegrationThinningTests_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_ThinningTests.sh)
set_tests_properties(TestIntegrationThinningTests_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationThinningTests_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationThinningTests PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationThinningTests PUBLIC
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

target_link_libraries(TestIntegrationThinningTests PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationGetBy
  TestIntegration.cpp
)

add_test(NAME TestIntegrationGetBy_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_TestGetBy.sh)
set_tests_properties(TestIntegrationGetBy_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationGetBy_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationGetBy PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationGetBy PUBLIC
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

target_link_libraries(TestIntegrationGetBy PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationOutput
  TestIntegration.cpp
)

add_test(NAME TestIntegrationOutput_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_TestOutput.sh)
set_tests_properties(TestIntegrationOutput_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationOutput_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationOutput PUBLIC
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

target_link_libraries(TestIntegrationOutput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationDropOnInput
  TestIntegration.cpp
)

add_test(NAME TestIntegrationDropOnInput_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_TestDropOnInput.sh)
set_tests_properties(TestIntegrationDropOnInput_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationDropOnInput_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationDropOnInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationDropOnInput PUBLIC
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

target_link_libraries(TestIntegrationDropOnInput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestSubProcess
  TestIntegration.cpp
)

add_test(NAME TestSubProcess_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_SubProcess.sh)
set_tests_properties(TestSubProcess_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestSubProcess_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestSubProcess PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSubProcess PUBLIC
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

target_link_libraries(TestSubProcess PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationUnscheduledFailOnOutput
  TestIntegration.cpp
)

add_test(NAME TestIntegrationUnscheduledFailOnOutput_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_unscheduledFailOnOutput.sh)
set_tests_properties(TestIntegrationUnscheduledFailOnOutput_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationUnscheduledFailOnOutput_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationUnscheduledFailOnOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationUnscheduledFailOnOutput PUBLIC
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

target_link_libraries(TestIntegrationUnscheduledFailOnOutput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationGetProductAtEnd
  TestIntegration.cpp
)

add_test(NAME TestIntegrationGetProductAtEnd_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_getProductAtEnd.sh)
set_tests_properties(TestIntegrationGetProductAtEnd_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationGetProductAtEnd_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationGetProductAtEnd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationGetProductAtEnd PUBLIC
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

target_link_libraries(TestIntegrationGetProductAtEnd PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationParentless
  TestIntegration.cpp
)

add_test(NAME TestIntegrationParentless_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/parentlessTest.sh)
set_tests_properties(TestIntegrationParentless_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationParentless_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationParentless PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationParentless PUBLIC
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

target_link_libraries(TestIntegrationParentless PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationWaitingThread
  TestIntegration.cpp
)

add_test(NAME TestIntegrationWaitingThread_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/waiting_thread_test.sh)
set_tests_properties(TestIntegrationWaitingThread_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationWaitingThread_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationWaitingThread PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationWaitingThread PUBLIC
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

target_link_libraries(TestIntegrationWaitingThread PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRunMerge
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRunMerge_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_RunMerge.sh)
set_tests_properties(TestIntegrationRunMerge_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationRunMerge_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationRunMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRunMerge PUBLIC
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

target_link_libraries(TestIntegrationRunMerge PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRunMerge2
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRunMerge2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_RunMerge2.sh)
set_tests_properties(TestIntegrationRunMerge2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationRunMerge2_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationRunMerge2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRunMerge2 PUBLIC
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

target_link_libraries(TestIntegrationRunMerge2 PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRefMerge
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRefMerge_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_RefMerge.sh)
set_tests_properties(TestIntegrationRefMerge_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationRefMerge_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationRefMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRefMerge PUBLIC
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

target_link_libraries(TestIntegrationRefMerge PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRefAlias
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRefAlias_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_RefAlias.sh)
set_tests_properties(TestIntegrationRefAlias_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationRefAlias_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationRefAlias PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRefAlias PUBLIC
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

target_link_libraries(TestIntegrationRefAlias PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationParameterSet
  TestIntegration.cpp
)

add_test(NAME TestIntegrationParameterSet_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_ParameterSet.sh)
set_tests_properties(TestIntegrationParameterSet_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationParameterSet_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationParameterSet PUBLIC
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

target_link_libraries(TestIntegrationParameterSet PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationSwitchProducer
  TestIntegration.cpp
)

add_test(NAME TestIntegrationSwitchProducer_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_TestSwitchProducer.sh)
set_tests_properties(TestIntegrationSwitchProducer_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegrationSwitchProducer_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegrationSwitchProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationSwitchProducer PUBLIC
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

target_link_libraries(TestIntegrationSwitchProducer PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegration_TestEDAlias
  TestIntegration.cpp
)

add_test(NAME TestIntegration_TestEDAlias_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_TestEDAlias.sh)
set_tests_properties(TestIntegration_TestEDAlias_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestIntegration_TestEDAlias_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestIntegration_TestEDAlias PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegration_TestEDAlias PUBLIC
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

target_link_libraries(TestIntegration_TestEDAlias PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(CatchStdExceptiontest
  TestIntegration.cpp
)

add_test(NAME CatchStdExceptiontest_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/CatchStdExceptiontest.sh)
set_tests_properties(CatchStdExceptiontest_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(CatchStdExceptiontest_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(CatchStdExceptiontest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CatchStdExceptiontest PUBLIC
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

target_link_libraries(CatchStdExceptiontest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(CatchCmsExceptiontest
  TestIntegration.cpp
)

add_test(NAME CatchCmsExceptiontest_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/CatchCmsExceptiontest.sh)
set_tests_properties(CatchCmsExceptiontest_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(CatchCmsExceptiontest_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(CatchCmsExceptiontest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CatchCmsExceptiontest PUBLIC
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

target_link_libraries(CatchCmsExceptiontest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(ProcessConfiguration_t
  ProcessConfiguration_t.cpp
)

add_test(NAME ProcessConfiguration_t_CTest COMMAND ProcessConfiguration_t)

set_tests_properties(ProcessConfiguration_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(ProcessConfiguration_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(ProcessConfiguration_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(ProcessConfiguration_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessConfiguration_t PUBLIC
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

target_link_libraries(ProcessConfiguration_t PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
)


add_executable(ProcessHistory_t
  ProcessHistory_t.cpp
)

add_test(NAME ProcessHistory_t_CTest COMMAND ProcessHistory_t)

set_tests_properties(ProcessHistory_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(ProcessHistory_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(ProcessHistory_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(ProcessHistory_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessHistory_t PUBLIC
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

target_link_libraries(ProcessHistory_t PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
)


add_executable(SwitchProducer_t
  SwitchProducer_t.cpp
)

add_test(NAME SwitchProducer_t_CTest COMMAND SwitchProducer_t)

set_tests_properties(SwitchProducer_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(SwitchProducer_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(SwitchProducer_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(SwitchProducer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SwitchProducer_t PUBLIC
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

target_link_libraries(SwitchProducer_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
)


add_executable(EDAlias_t
  EDAlias_t.cpp
)

add_test(NAME EDAlias_t_CTest COMMAND EDAlias_t)

set_tests_properties(EDAlias_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(EDAlias_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(EDAlias_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(EDAlias_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EDAlias_t PUBLIC
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

target_link_libraries(EDAlias_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
)


add_library(TestPSetAnalyzer SHARED ${TestPSetAnalyzer_EXTRA_SOURCES}
  TestPSetAnalyzer.cc
)

set_target_properties(TestPSetAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestPSetAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(TestPSetAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPSetAnalyzer PUBLIC
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

target_link_libraries(TestPSetAnalyzer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(SomeTestModules SHARED ${SomeTestModules_EXTRA_SOURCES}
  AssociationMapAnalyzer.cc
  AssociationMapProducer.cc
  GadgetRcd.cc
  MissingDictionaryTestProducer.cc
  PluginUsingProducer.cc
  SwitchProducerProvenanceAnalyzer.cc
  ThingAlgorithm.cc
  ThingProducer.cc
  ThinningTestAnalyzer.cc
  ThinningThingProducer.cc
  TrackOfThingsProducer.cc
  WhatsIt.cc
)

set_target_properties(SomeTestModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(SomeTestModules PROPERTIES PREFIX "plugin")
target_include_directories(SomeTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SomeTestModules PUBLIC
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

target_link_libraries(SomeTestModules PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreIntegrationWaitingServer
)


add_library(TestProducerWithPSetDesc SHARED ${TestProducerWithPSetDesc_EXTRA_SOURCES}
  ProducerWithPSetDesc.cc
)

set_target_properties(TestProducerWithPSetDesc PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestProducerWithPSetDesc PROPERTIES PREFIX "plugin")
target_include_directories(TestProducerWithPSetDesc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestProducerWithPSetDesc PUBLIC
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

target_link_libraries(TestProducerWithPSetDesc PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
)


add_library(TestHistProducer SHARED ${TestHistProducer_EXTRA_SOURCES}
  HistProducer.cc
)

set_target_properties(TestHistProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestHistProducer PROPERTIES PREFIX "plugin")
target_include_directories(TestHistProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHistProducer PUBLIC
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

target_link_libraries(TestHistProducer PUBLIC
FWCoreFramework
FWCoreIntegration
ROOT::Core
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::Physics
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_library(TestHistoryKeeping SHARED ${TestHistoryKeeping_EXTRA_SOURCES}
  TestHistoryKeeping.cc
)

set_target_properties(TestHistoryKeeping PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestHistoryKeeping PROPERTIES PREFIX "plugin")
target_include_directories(TestHistoryKeeping PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHistoryKeeping PUBLIC
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

target_link_libraries(TestHistoryKeeping PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(ThrowingSource SHARED ${ThrowingSource_EXTRA_SOURCES}
  ThrowingSource.cc
)

set_target_properties(ThrowingSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(ThrowingSource PROPERTIES PREFIX "plugin")
target_include_directories(ThrowingSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThrowingSource PUBLIC
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

target_link_libraries(ThrowingSource PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSources
)


add_library(TestThingSource SHARED ${TestThingSource_EXTRA_SOURCES}
  ThingAlgorithm.cc
  ThingSource.cc
)

set_target_properties(TestThingSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestThingSource PROPERTIES PREFIX "plugin")
target_include_directories(TestThingSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingSource PUBLIC
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

target_link_libraries(TestThingSource PUBLIC
FWCoreIntegration
FWCoreSources
)


add_library(TestThingExtSource SHARED ${TestThingExtSource_EXTRA_SOURCES}
  ThingAlgorithm.cc
  ThingExtSource.cc
)

set_target_properties(TestThingExtSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestThingExtSource PROPERTIES PREFIX "plugin")
target_include_directories(TestThingExtSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingExtSource PUBLIC
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

target_link_libraries(TestThingExtSource PUBLIC
FWCoreIntegration
FWCoreSources
)


add_library(TestOtherThingProducer SHARED ${TestOtherThingProducer_EXTRA_SOURCES}
  OtherThingAlgorithm.cc
  OtherThingProducer.cc
)

set_target_properties(TestOtherThingProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestOtherThingProducer PROPERTIES PREFIX "plugin")
target_include_directories(TestOtherThingProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOtherThingProducer PUBLIC
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

target_link_libraries(TestOtherThingProducer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
)


add_library(TestThingWithMergeProducer SHARED ${TestThingWithMergeProducer_EXTRA_SOURCES}
  ThingWithMergeProducer.cc
)

set_target_properties(TestThingWithMergeProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestThingWithMergeProducer PROPERTIES PREFIX "plugin")
target_include_directories(TestThingWithMergeProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingWithMergeProducer PUBLIC
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

target_link_libraries(TestThingWithMergeProducer PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_library(FWCoreIntegrationPathAnalyzer SHARED ${FWCoreIntegrationPathAnalyzer_EXTRA_SOURCES}
  PathAnalyzer.cc
)

set_target_properties(FWCoreIntegrationPathAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreIntegrationPathAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(FWCoreIntegrationPathAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationPathAnalyzer PUBLIC
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

target_link_libraries(FWCoreIntegrationPathAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(FWCoreIntegrationValueExample SHARED ${FWCoreIntegrationValueExample_EXTRA_SOURCES}
  ValueExample.cc
)

set_target_properties(FWCoreIntegrationValueExample PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(FWCoreIntegrationValueExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationValueExample PUBLIC
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

target_link_libraries(FWCoreIntegrationValueExample PUBLIC
FWCoreIntegration
FWCoreParameterSet
)


add_library(FWCoreIntegrationValueExamplePlugin SHARED ${FWCoreIntegrationValueExamplePlugin_EXTRA_SOURCES}
  ValueExamplePlugin.cc
)

set_target_properties(FWCoreIntegrationValueExamplePlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreIntegrationValueExamplePlugin PROPERTIES PREFIX "plugin")
target_include_directories(FWCoreIntegrationValueExamplePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationValueExamplePlugin PUBLIC
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

target_link_libraries(FWCoreIntegrationValueExamplePlugin PUBLIC
FWCoreIntegration
FWCoreIntegrationValueExample
FWCoreParameterSet
FWCoreServiceRegistry
)


add_library(UseValueExampleAnalyzer SHARED ${UseValueExampleAnalyzer_EXTRA_SOURCES}
  UseValueExampleAnalyzer.cc
)

set_target_properties(UseValueExampleAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UseValueExampleAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(UseValueExampleAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UseValueExampleAnalyzer PUBLIC
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

target_link_libraries(UseValueExampleAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreIntegrationValueExample
FWCoreParameterSet
)


add_library(FWCoreIntegrationWaitingServer SHARED ${FWCoreIntegrationWaitingServer_EXTRA_SOURCES}
  WaitingServer.cc
)

set_target_properties(FWCoreIntegrationWaitingServer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(FWCoreIntegrationWaitingServer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingServer PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingServer PUBLIC
FWCoreConcurrency
FWCoreIntegration
)


add_library(FWCoreIntegrationWaitingService SHARED ${FWCoreIntegrationWaitingService_EXTRA_SOURCES}
  WaitingService.cc
)

set_target_properties(FWCoreIntegrationWaitingService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreIntegrationWaitingService PROPERTIES PREFIX "plugin")
target_include_directories(FWCoreIntegrationWaitingService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingService PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingService PUBLIC
FWCoreConcurrency
FWCoreIntegration
FWCoreIntegrationWaitingServer
FWCoreParameterSet
FWCoreServiceRegistry
)


add_library(TestOtherThingAnalyzer SHARED ${TestOtherThingAnalyzer_EXTRA_SOURCES}
  OtherThingAnalyzer.cc
  OtherThingRefComparer.cc
)

set_target_properties(TestOtherThingAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestOtherThingAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(TestOtherThingAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOtherThingAnalyzer PUBLIC
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

target_link_libraries(TestOtherThingAnalyzer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_library(TestProdigalAnalyzer SHARED ${TestProdigalAnalyzer_EXTRA_SOURCES}
  ProdigalAnalyzer.cc
)

set_target_properties(TestProdigalAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestProdigalAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(TestProdigalAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestProdigalAnalyzer PUBLIC
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

target_link_libraries(TestProdigalAnalyzer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_library(FWCoreIntegrationTestFindProduct SHARED ${FWCoreIntegrationTestFindProduct_EXTRA_SOURCES}
  ManyProductProducer.cc
  TestFindProduct.cc
  TestParentage.cc
)

set_target_properties(FWCoreIntegrationTestFindProduct PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(FWCoreIntegrationTestFindProduct PROPERTIES PREFIX "plugin")
target_include_directories(FWCoreIntegrationTestFindProduct PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTestFindProduct PUBLIC
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

target_link_libraries(FWCoreIntegrationTestFindProduct PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(TestViewAnalyzer SHARED ${TestViewAnalyzer_EXTRA_SOURCES}
  ViewAnalyzer.cc
)

set_target_properties(TestViewAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestViewAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(TestViewAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestViewAnalyzer PUBLIC
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

target_link_libraries(TestViewAnalyzer PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_library(HierarchicalEDProducer SHARED ${HierarchicalEDProducer_EXTRA_SOURCES}
  HierarchicalEDProducer.cc
)

set_target_properties(HierarchicalEDProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(HierarchicalEDProducer PROPERTIES PREFIX "plugin")
target_include_directories(HierarchicalEDProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(HierarchicalEDProducer PUBLIC
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

target_link_libraries(HierarchicalEDProducer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(WhatsItESProducer SHARED ${WhatsItESProducer_EXTRA_SOURCES}
  Doodad.cc
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItESProducer.cc
)

set_target_properties(WhatsItESProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(WhatsItESProducer PROPERTIES PREFIX "plugin")
target_include_directories(WhatsItESProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItESProducer PUBLIC
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

target_link_libraries(WhatsItESProducer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(DoodadESProducer SHARED ${DoodadESProducer_EXTRA_SOURCES}
  Doodad.cc
  DoodadESProducer.cc
  GadgetRcd.cc
)

set_target_properties(DoodadESProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(DoodadESProducer PROPERTIES PREFIX "plugin")
target_include_directories(DoodadESProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DoodadESProducer PUBLIC
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

target_link_libraries(DoodadESProducer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(DoodadESSource SHARED ${DoodadESSource_EXTRA_SOURCES}
  DoodadESSource.cc
  GadgetRcd.cc
)

set_target_properties(DoodadESSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(DoodadESSource PROPERTIES PREFIX "plugin")
target_include_directories(DoodadESSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DoodadESSource PUBLIC
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

target_link_libraries(DoodadESSource PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(WhatsItAnalyzer SHARED ${WhatsItAnalyzer_EXTRA_SOURCES}
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItAnalyzer.cc
)

set_target_properties(WhatsItAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(WhatsItAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(WhatsItAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItAnalyzer PUBLIC
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

target_link_libraries(WhatsItAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(TestGetterOfProducts SHARED ${TestGetterOfProducts_EXTRA_SOURCES}
  TestGetterOfProducts.cc
)

set_target_properties(TestGetterOfProducts PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestGetterOfProducts PROPERTIES PREFIX "plugin")
target_include_directories(TestGetterOfProducts PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestGetterOfProducts PUBLIC
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

target_link_libraries(TestGetterOfProducts PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(TestDescriptionComments SHARED ${TestDescriptionComments_EXTRA_SOURCES}
  TestDescriptionComments.cc
)

set_target_properties(TestDescriptionComments PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestDescriptionComments PROPERTIES PREFIX "plugin")
target_include_directories(TestDescriptionComments PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestDescriptionComments PUBLIC
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

target_link_libraries(TestDescriptionComments PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(WhatsItExtensionCordAnalyzer SHARED ${WhatsItExtensionCordAnalyzer_EXTRA_SOURCES}
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItExtensionCordAnalyzer.cc
)

set_target_properties(WhatsItExtensionCordAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(WhatsItExtensionCordAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(WhatsItExtensionCordAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItExtensionCordAnalyzer PUBLIC
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

target_link_libraries(WhatsItExtensionCordAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(WhatsItWatcherAnalyzer SHARED ${WhatsItWatcherAnalyzer_EXTRA_SOURCES}
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItWatcherAnalyzer.cc
)

set_target_properties(WhatsItWatcherAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(WhatsItWatcherAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(WhatsItWatcherAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItWatcherAnalyzer PUBLIC
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

target_link_libraries(WhatsItWatcherAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(ESTestModules SHARED ${ESTestModules_EXTRA_SOURCES}
  ESTestAnalyzers.cc
  ESTestProducers.cc
)

set_target_properties(ESTestModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(ESTestModules PROPERTIES PREFIX "plugin")
target_include_directories(ESTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ESTestModules PUBLIC
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

target_link_libraries(ESTestModules PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
FWCoreParameterSet
)


add_library(IntSource SHARED ${IntSource_EXTRA_SOURCES}
  IntSource.cc
)

set_target_properties(IntSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(IntSource PROPERTIES PREFIX "plugin")
target_include_directories(IntSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IntSource PUBLIC
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

target_link_libraries(IntSource PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSources
)



add_library(StuckAnalyzer SHARED ${StuckAnalyzer_EXTRA_SOURCES}
  StuckAnalyzer.cc
)

set_target_properties(StuckAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(StuckAnalyzer PROPERTIES PREFIX "plugin")
target_include_directories(StuckAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StuckAnalyzer PUBLIC
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

target_link_libraries(StuckAnalyzer PUBLIC
FWCoreFramework
FWCorePluginManager
FWCoreServices
)


add_library(SiteLocalConfigUnitTestClient SHARED ${SiteLocalConfigUnitTestClient_EXTRA_SOURCES}
  SiteLocalConfigServiceTester.cc
)

set_target_properties(SiteLocalConfigUnitTestClient PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(SiteLocalConfigUnitTestClient PROPERTIES PREFIX "plugin")
target_include_directories(SiteLocalConfigUnitTestClient PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SiteLocalConfigUnitTestClient PUBLIC
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

target_link_libraries(SiteLocalConfigUnitTestClient PUBLIC
FWCoreFramework
FWCorePluginManager
FWCoreServices
)


add_executable(TestFWCoreServicesDriver
  TestFWCoreServicesDriver.cpp
)

add_test(NAME TestFWCoreServicesDriver_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_mallocopts.sh)
set_tests_properties(TestFWCoreServicesDriver_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreServicesDriver_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestFWCoreServicesDriver_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_sitelocalconfig.sh)
set_tests_properties(TestFWCoreServicesDriver_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreServicesDriver_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestFWCoreServicesDriver_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_resource.sh)
set_tests_properties(TestFWCoreServicesDriver_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreServicesDriver_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestFWCoreServicesDriver_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_zombiekiller.sh)
set_tests_properties(TestFWCoreServicesDriver_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreServicesDriver_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestFWCoreServicesDriver PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreServicesDriver PUBLIC
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

target_link_libraries(TestFWCoreServicesDriver PUBLIC
FWCoreServices
FWCoreUtilities
)



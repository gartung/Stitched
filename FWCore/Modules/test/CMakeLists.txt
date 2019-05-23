add_executable(TestFWCoreModules
  TestIntegration.cpp
)

add_test(NAME TestFWCoreModules_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/FWCoreModulesTest.sh)
set_tests_properties(TestFWCoreModules_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreModules_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestFWCoreModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreModules PUBLIC
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

target_link_libraries(TestFWCoreModules PUBLIC
FWCoreModules
FWCoreUtilities
)


add_executable(TestFWCoreModulesTP
  test_catch2_LogErrorFilter.cc
  test_catch2_ModuloEventIDFilter.cc
  test_catch2_PathStatusFilter.cc
  test_catch2_Prescaler.cc
  test_catch2_main.cc
)

add_test(NAME TestFWCoreModulesTP_CTest COMMAND TestFWCoreModulesTP)

set_tests_properties(TestFWCoreModulesTP_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCoreModulesTP_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCoreModulesTP PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(TestFWCoreModulesTP PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreModulesTP PUBLIC
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

target_link_libraries(TestFWCoreModulesTP PUBLIC
FWCoreModules
FWCoreTestProcessor
)



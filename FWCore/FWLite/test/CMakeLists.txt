add_executable(testFWCoreFWLite
  ref_t.cppunit.cpp
)

add_test(NAME testFWCoreFWLite_CTest COMMAND testFWCoreFWLite)

set_tests_properties(testFWCoreFWLite_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testFWCoreFWLite_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testFWCoreFWLite PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testFWCoreFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreFWLite PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testFWCoreFWLite PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsTestObjects
FWCoreFWLite
)


add_executable(TestRunnerFWCoreFWLite
  TestRunnerFWCoreFWLite.cpp
)

add_test(NAME TestRunnerFWCoreFWLite_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_all_t.sh)
set_tests_properties(TestRunnerFWCoreFWLite_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestRunnerFWCoreFWLite_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestRunnerFWCoreFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestRunnerFWCoreFWLite PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestRunnerFWCoreFWLite PUBLIC
${CPPUNIT_LIBRARY}
FWCoreFWLite
FWCoreUtilities
)



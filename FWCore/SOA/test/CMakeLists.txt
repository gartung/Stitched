add_executable(testFWCoreSOA
  table_t.cppunit.cpp
)

add_test(NAME testFWCoreSOA_CTest COMMAND testFWCoreSOA)

set_tests_properties(testFWCoreSOA_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testFWCoreSOA_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testFWCoreSOA PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testFWCoreSOA PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSOA PUBLIC
${CPPUNIT_INCLUDE_DIR}
)

target_link_libraries(testFWCoreSOA PUBLIC
${CPPUNIT_LIBRARY}
)



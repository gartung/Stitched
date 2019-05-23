add_executable(testPyBind11ParameterSet
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  processbuilder_t.cppunit.cpp
  readpsetsfrom_t.cppunit.cc
)

add_test(NAME testPyBind11ParameterSet_CTest COMMAND testPyBind11ParameterSet)

set_tests_properties(testPyBind11ParameterSet_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testPyBind11ParameterSet_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testPyBind11ParameterSet PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testPyBind11ParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testPyBind11ParameterSet PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIRS}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testPyBind11ParameterSet PUBLIC
${CPPUNIT_LIBRARY}
FWCoreParameterSet
FWCorePyDevParameterSet
FWCoreUtilities
)



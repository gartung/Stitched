add_executable(TestEdmFastMerge
  TestIOPoolCommon.cpp
)

add_test(NAME TestEdmFastMerge_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/TestEdmFastMerge.sh)
set_tests_properties(TestEdmFastMerge_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestEdmFastMerge_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestEdmFastMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestEdmFastMerge PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestEdmFastMerge PUBLIC
FWCoreUtilities
IOPoolCommon
)


add_executable(TestEdmConfigDump
  TestIOPoolCommon.cpp
)

add_test(NAME TestEdmConfigDump_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_TestEdmConfigDump.sh)
set_tests_properties(TestEdmConfigDump_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestEdmConfigDump_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestEdmConfigDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestEdmConfigDump PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestEdmConfigDump PUBLIC
FWCoreUtilities
IOPoolCommon
)



add_executable(test_precomputed_value_sort
  test_precomputed_value_sort.cpp
)

add_test(NAME test_precomputed_value_sort_CTest COMMAND test_precomputed_value_sort)

set_tests_properties(test_precomputed_value_sort_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(test_precomputed_value_sort_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(test_precomputed_value_sort PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(test_precomputed_value_sort PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(test_precomputed_value_sort PUBLIC
UtilitiesGeneral
)


add_executable(googlebenchmarkbasic
  google-benchmark-basic.cpp
)

add_test(NAME googlebenchmarkbasic_CTest COMMAND googlebenchmarkbasic)

set_tests_properties(googlebenchmarkbasic_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(googlebenchmarkbasic_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(googlebenchmarkbasic PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(googlebenchmarkbasic PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(googlebenchmarkbasic PUBLIC
UtilitiesGeneral
benchmark::benchmark
)


add_executable(googlebenchmarkpassargv
  google-benchmark-pass-argv.cpp
)

add_test(NAME googlebenchmarkpassargv_CTest COMMAND googlebenchmarkpassargv)

set_tests_properties(googlebenchmarkpassargv_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(googlebenchmarkpassargv_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(googlebenchmarkpassargv PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(googlebenchmarkpassargv PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(googlebenchmarkpassargv PUBLIC
UtilitiesGeneral
benchmark::benchmark_main
)



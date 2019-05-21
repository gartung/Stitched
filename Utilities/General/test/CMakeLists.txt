add_executable(test_precomputed_value_sort
  test_precomputed_value_sort.cpp
)

target_include_directories(test_precomputed_value_sort PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(test_precomputed_value_sort PUBLIC
UtilitiesGeneral
)


add_test(test_precomputed_value_sort test_precomputed_value_sort)

add_executable(googlebenchmarkbasic
  google-benchmark-basic.cpp
)

target_include_directories(googlebenchmarkbasic PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(googlebenchmarkbasic PUBLIC
UtilitiesGeneral
benchmark::benchmark
)


add_test(googlebenchmarkbasic googlebenchmarkbasic)

add_executable(googlebenchmarkpassargv
  google-benchmark-pass-argv.cpp
)

target_include_directories(googlebenchmarkpassargv PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(googlebenchmarkpassargv PUBLIC
UtilitiesGeneral
benchmark::benchmark_main
)


add_test(googlebenchmarkpassargv googlebenchmarkpassargv)


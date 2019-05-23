add_executable(testDataFormatsFWLiteMakeInput
  TestRunnerDataFormatsFWLite.cpp
)

add_test(NAME testDataFormatsFWLiteMakeInput_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/RefTest.sh)
set_tests_properties(testDataFormatsFWLiteMakeInput_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(testDataFormatsFWLiteMakeInput_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(testDataFormatsFWLiteMakeInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testDataFormatsFWLiteMakeInput PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsFWLite
FWCoreUtilities
)


add_executable(testDataFormatsFWLite
  format_type_name.cppunit.cpp
  test.cppunit.cpp
)

add_test(NAME testDataFormatsFWLite_CTest COMMAND testDataFormatsFWLite)

set_tests_properties(testDataFormatsFWLite_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testDataFormatsFWLite_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testDataFormatsFWLite PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testDataFormatsFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsFWLite PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testDataFormatsFWLite PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsFWLite
DataFormatsTestObjects
FWCoreFWLite
)


add_executable(TestRunnerDataFormatsFWLite
  TestRunnerDataFormatsFWLite.cpp
)

add_test(NAME TestRunnerDataFormatsFWLite_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_all_t.sh)
set_tests_properties(TestRunnerDataFormatsFWLite_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestRunnerDataFormatsFWLite_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

#add_dependencies(TestRunnerDataFormatsFWLite testDataFormatsFWLite)
target_include_directories(TestRunnerDataFormatsFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestRunnerDataFormatsFWLite PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(TestRunnerDataFormatsFWLite PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsFWLite
FWCoreUtilities
)



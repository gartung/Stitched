add_executable(testFWCoreConcurrency
  limitedtaskqueue_t.cppunit.cpp
  serialtaskqueue_t.cppunit.cpp
  serialtaskqueuechain_t.cppunit.cpp
  waitingtasklist_t.cppunit.cpp
)

add_test(NAME testFWCoreConcurrency_CTest COMMAND testFWCoreConcurrency)

set_tests_properties(testFWCoreConcurrency_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testFWCoreConcurrency_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testFWCoreConcurrency PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testFWCoreConcurrency PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreConcurrency PUBLIC
${CPPUNIT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(testFWCoreConcurrency PUBLIC
${CPPUNIT_LIBRARY}
FWCoreConcurrency
)


add_executable(test_xercesInitialize
  test_xercesInitialize.cpp
)

add_test(NAME test_xercesInitialize_CTest COMMAND test_xercesInitialize)

set_tests_properties(test_xercesInitialize_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(test_xercesInitialize_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(test_xercesInitialize PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(test_xercesInitialize PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_xercesInitialize PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(test_xercesInitialize PUBLIC
FWCoreConcurrency
)


add_executable(test_threadSafeOutputFileStream
  test_threadSafeOutputFileStream.cpp
)

add_test(NAME test_threadSafeOutputFileStream_CTest COMMAND test_threadSafeOutputFileStream)

set_tests_properties(test_threadSafeOutputFileStream_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(test_threadSafeOutputFileStream_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(test_threadSafeOutputFileStream PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(test_threadSafeOutputFileStream PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_threadSafeOutputFileStream PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(test_threadSafeOutputFileStream PUBLIC
FWCoreConcurrency
)


add_executable(ThreadSafeAddOnlyContainer_t
  ThreadSafeAddOnlyContainer_t.cpp
)

add_test(NAME ThreadSafeAddOnlyContainer_t_CTest COMMAND ThreadSafeAddOnlyContainer_t)

set_tests_properties(ThreadSafeAddOnlyContainer_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(ThreadSafeAddOnlyContainer_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(ThreadSafeAddOnlyContainer_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(ThreadSafeAddOnlyContainer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThreadSafeAddOnlyContainer_t PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(ThreadSafeAddOnlyContainer_t PUBLIC
FWCoreConcurrency
)


add_executable(TestFWCoreConcurrencyDriver
  TestFWCoreConcurrencyDriver.cpp
)

add_test(NAME TestFWCoreConcurrencyDriver_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_streamGrapher_test.sh)
set_tests_properties(TestFWCoreConcurrencyDriver_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreConcurrencyDriver_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME TestFWCoreConcurrencyDriver_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/run_threadSafeOutputFileStream_test.sh)
set_tests_properties(TestFWCoreConcurrencyDriver_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(TestFWCoreConcurrencyDriver_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(TestFWCoreConcurrencyDriver PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreConcurrencyDriver PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreConcurrencyDriver PUBLIC
FWCoreConcurrency
FWCoreUtilities
)


add_executable(testFWCoreConcurrencyTBB.cc
  TestTBB.cc
)

add_test(NAME testFWCoreConcurrencyTBB.cc_CTest COMMAND testFWCoreConcurrencyTBB.cc)

set_tests_properties(testFWCoreConcurrencyTBB.cc_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testFWCoreConcurrencyTBB.cc_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testFWCoreConcurrencyTBB.cc PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testFWCoreConcurrencyTBB.cc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreConcurrencyTBB.cc PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(testFWCoreConcurrencyTBB.cc PUBLIC
${TBB_LIBRARIES}
FWCoreConcurrency
)



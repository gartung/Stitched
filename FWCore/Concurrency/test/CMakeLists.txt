add_executable(testFWCoreConcurrency
  limitedtaskqueue_t.cppunit.cpp
  serialtaskqueue_t.cppunit.cpp
  serialtaskqueuechain_t.cppunit.cpp
  waitingtasklist_t.cppunit.cpp
)

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


add_test(testFWCoreConcurrency testFWCoreConcurrency)

add_executable(test_xercesInitialize
  test_xercesInitialize.cpp
)

target_include_directories(test_xercesInitialize PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_xercesInitialize PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(test_xercesInitialize PUBLIC
FWCoreConcurrency
)


add_test(test_xercesInitialize test_xercesInitialize)

add_executable(test_threadSafeOutputFileStream
  test_threadSafeOutputFileStream.cpp
)

target_include_directories(test_threadSafeOutputFileStream PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_threadSafeOutputFileStream PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(test_threadSafeOutputFileStream PUBLIC
FWCoreConcurrency
)


add_test(test_threadSafeOutputFileStream test_threadSafeOutputFileStream)

add_executable(ThreadSafeAddOnlyContainer_t
  ThreadSafeAddOnlyContainer_t.cpp
)

target_include_directories(ThreadSafeAddOnlyContainer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThreadSafeAddOnlyContainer_t PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(ThreadSafeAddOnlyContainer_t PUBLIC
FWCoreConcurrency
)


add_test(ThreadSafeAddOnlyContainer_t ThreadSafeAddOnlyContainer_t)

add_executable(TestFWCoreConcurrencyDriver
  TestFWCoreConcurrencyDriver.cpp
)

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


add_test(TestFWCoreConcurrencyDriver TestFWCoreConcurrencyDriver)

add_executable(testFWCoreConcurrencyTBB.cc
  TestTBB.cc
)

target_include_directories(testFWCoreConcurrencyTBB.cc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreConcurrencyTBB.cc PUBLIC
${TBB_INCLUDE_DIRS}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(testFWCoreConcurrencyTBB.cc PUBLIC
${TBB_LIBRARIES}
FWCoreConcurrency
)


add_test(testFWCoreConcurrencyTBB.cc testFWCoreConcurrencyTBB.cc)


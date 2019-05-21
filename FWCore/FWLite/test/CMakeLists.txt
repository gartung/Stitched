add_executable(testFWCoreFWLite
  ref_t.cppunit.cpp
)

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


add_test(testFWCoreFWLite testFWCoreFWLite)

add_executable(TestRunnerFWCoreFWLite
  TestRunnerFWCoreFWLite.cpp
)

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


add_test(TestRunnerFWCoreFWLite TestRunnerFWCoreFWLite)


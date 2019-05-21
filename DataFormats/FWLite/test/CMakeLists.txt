add_executable(testDataFormatsFWLiteMakeInput
  TestRunnerDataFormatsFWLite.cpp
)

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


add_test(testDataFormatsFWLiteMakeInput testDataFormatsFWLiteMakeInput)

add_executable(testDataFormatsFWLite
  format_type_name.cppunit.cpp
  test.cppunit.cpp
)

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


add_test(testDataFormatsFWLite testDataFormatsFWLite)

add_executable(TestRunnerDataFormatsFWLite
  TestRunnerDataFormatsFWLite.cpp
)

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


add_test(TestRunnerDataFormatsFWLite TestRunnerDataFormatsFWLite)


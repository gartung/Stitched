add_executable(TestRunnerFWCoreTFWLiteSelector
  TestRunnerFWCoreTFWLiteSelector.cpp
)

target_include_directories(TestRunnerFWCoreTFWLiteSelector PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestRunnerFWCoreTFWLiteSelector PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(TestRunnerFWCoreTFWLiteSelector PUBLIC
  FWCoreFWLite
  FWCoreTFWLiteSelector
  FWCoreTFWLiteSelectorTest
  FWCoreUtilities
)

add_test(NAME TestRunnerFWCoreTFWLiteSelector COMMAND TestRunnerFWCoreTFWLiteSelector)

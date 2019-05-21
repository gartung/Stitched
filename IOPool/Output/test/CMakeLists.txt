add_executable(TestPoolOutput
  TestPoolOutput.cpp
)

target_include_directories(TestPoolOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPoolOutput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestPoolOutput PUBLIC
FWCoreUtilities
IOPoolOutput
)


add_test(TestPoolOutput TestPoolOutput)


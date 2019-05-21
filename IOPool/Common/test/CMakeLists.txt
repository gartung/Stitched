add_executable(TestEdmFastMerge
  TestIOPoolCommon.cpp
)

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


add_test(TestEdmFastMerge TestEdmFastMerge)

add_executable(TestEdmConfigDump
  TestIOPoolCommon.cpp
)

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


add_test(TestEdmConfigDump TestEdmConfigDump)


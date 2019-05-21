add_executable(TestPoolInput
  TestPoolInput.cpp
)

target_include_directories(TestPoolInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPoolInput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(TestPoolInput PUBLIC
FWCoreUtilities
IOPoolInput
)


add_test(TestPoolInput TestPoolInput)

add_library(IOExerciser SHARED 
  IOExerciser.cc
)

target_include_directories(IOExerciser PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOExerciser PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOExerciser PUBLIC
FWCoreFramework
FWCoreParameterSet
FWCorePluginManager
IOPoolInput
)



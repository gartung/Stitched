add_executable(edmPluginHelp
  edmPluginHelp.cpp
)

target_include_directories(edmPluginHelp PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmPluginHelp PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmPluginHelp PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreParameterSet
  FWCorePluginManager
  FWCoreUtilities
  dl
)

install( TARGETS edmPluginHelp DESTINATION  bin  EXPORT stitched::edmPluginHelp)

add_executable(edmWriteConfigs
  edmWriteConfigs.cpp
)

target_include_directories(edmWriteConfigs PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmWriteConfigs PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmWriteConfigs PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreParameterSet
  FWCorePluginManager
  FWCoreUtilities
  dl
)

install( TARGETS edmWriteConfigs DESTINATION  bin  EXPORT stitched::edmWriteConfigs)


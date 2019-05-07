add_executable(edmPluginDump
  dump.cc
)

target_include_directories(edmPluginDump PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmPluginDump PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmPluginDump PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCorePluginManager
  dl
)

install( TARGETS edmPluginDump DESTINATION  bin  EXPORT stitched::edmPluginDump)

add_executable(edmPluginRefresh
  refresh.cc
)

target_include_directories(edmPluginRefresh PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmPluginRefresh PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmPluginRefresh PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCorePluginManager
  dl
)

install( TARGETS edmPluginRefresh DESTINATION  bin  EXPORT stitched::edmPluginRefresh)


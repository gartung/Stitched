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
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCorePluginManager
  Python2::Python
  Threads::Threads
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
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCorePluginManager
  Python2::Python
  Threads::Threads
)

install( TARGETS edmPluginRefresh DESTINATION  bin  EXPORT stitched::edmPluginRefresh)


add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCorePluginManager SHARED 
  src/CacheParser.cc
  src/PluginCapabilities.cc
  src/PluginFactoryBase.cc
  src/PluginFactoryManager.cc
  src/PluginManager.cc
  src/PresenceFactory.cc
  src/ProblemTracker.cc
  src/SharedLibrary.cc
  src/standard.cc
)

target_include_directories(FWCorePluginManager PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCorePluginManager PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCorePluginManager PUBLIC
  ${TBB_LIBRARIES}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

install( TARGETS FWCorePluginManager DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCorePluginManager)


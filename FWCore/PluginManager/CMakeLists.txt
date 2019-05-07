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
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreUtilities
  dl
)

install( TARGETS FWCorePluginManager DESTINATION  lib  EXPORT stitched::FWCorePluginManager)


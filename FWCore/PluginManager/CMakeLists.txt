add_subdirectory(bin)
add_subdirectory(test)
add_library(FWCorePluginManager SHARED ${FWCorePluginManager_EXTRA_SOURCES}
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

set_target_properties(FWCorePluginManager PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(FWCore/PluginManager)
install( TARGETS FWCorePluginManager DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


add_executable(Standalone
  Standalone.cpp
)

target_include_directories(Standalone PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Standalone PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(Standalone PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageLogger
FWCoreMessageService
FWCorePluginManager
FWCorePythonParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


install( TARGETS Standalone DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::Standalone)


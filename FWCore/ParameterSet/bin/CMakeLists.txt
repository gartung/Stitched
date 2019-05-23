add_executable(edmPluginHelp
  edmPluginHelp.cpp
)

set_target_properties(edmPluginHelp PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
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
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreParameterSet
FWCorePluginManager
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/ParameterSet/bin/)
install( TARGETS edmPluginHelp DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(edmWriteConfigs
  edmWriteConfigs.cpp
)

set_target_properties(edmWriteConfigs PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
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
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreParameterSet
FWCorePluginManager
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/ParameterSet/bin/)
install( TARGETS edmWriteConfigs DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


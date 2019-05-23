add_executable(edmConfigHash
  edmConfigHash.cpp
)

set_target_properties(edmConfigHash PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(edmConfigHash PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmConfigHash PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(edmConfigHash PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreParameterSet
FWCorePythonParameterSet
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/PythonParameterSet/bin/)
install( TARGETS edmConfigHash DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(edmParameterSetDump
  edmParameterSetDump.cpp
)

set_target_properties(edmParameterSetDump PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(edmParameterSetDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmParameterSetDump PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(edmParameterSetDump PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreParameterSet
FWCorePythonParameterSet
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/PythonParameterSet/bin/)
install( TARGETS edmParameterSetDump DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


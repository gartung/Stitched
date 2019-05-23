add_library(FWCoreParameterSetReader SHARED ${FWCoreParameterSetReader_EXTRA_SOURCES}
  src/ParameterSetReader.cc
)

set_target_properties(FWCoreParameterSetReader PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreParameterSetReader PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreParameterSetReader PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreParameterSetReader PUBLIC
FWCoreParameterSet
FWCorePythonParameterSet
)


add_python_rules(FWCore/ParameterSetReader)
install( TARGETS FWCoreParameterSetReader DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


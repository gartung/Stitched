add_library(FWCoreMessageServicePlugins SHARED ${FWCoreMessageServicePlugins_EXTRA_SOURCES}
  Module.cc
)

set_target_properties(FWCoreMessageServicePlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties(FWCoreMessageServicePlugins PROPERTIES PREFIX "plugin")
target_include_directories(FWCoreMessageServicePlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreMessageServicePlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreMessageServicePlugins PUBLIC
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/plugins/)
install( TARGETS FWCoreMessageServicePlugins DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


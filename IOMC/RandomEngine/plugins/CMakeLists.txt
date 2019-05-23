add_library(IOMCRandomEnginePlugins SHARED ${IOMCRandomEnginePlugins_EXTRA_SOURCES}
  Module.cc
)

set_target_properties(IOMCRandomEnginePlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties(IOMCRandomEnginePlugins PROPERTIES PREFIX "plugin")
target_include_directories(IOMCRandomEnginePlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOMCRandomEnginePlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${GSL_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(IOMCRandomEnginePlugins PUBLIC
FWCoreFramework
FWCoreServiceRegistry
IOMCRandomEngine
)


add_python_rules(IOMC/RandomEngine/plugins/)
install( TARGETS IOMCRandomEnginePlugins DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


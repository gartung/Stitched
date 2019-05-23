add_executable(cmsGetFnConnect
  cmsGetFnConnect.cc
)

set_target_properties(cmsGetFnConnect PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsGetFnConnect PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsGetFnConnect PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(cmsGetFnConnect PUBLIC
FWCoreCatalog
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServices
FWCoreUtilities
)


add_python_rules(FWCore/Services/bin/)
install( TARGETS cmsGetFnConnect DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


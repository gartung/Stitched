add_subdirectory(test)
add_library(FWCoreServiceRegistry SHARED ${FWCoreServiceRegistry_EXTRA_SOURCES}
  src/ActivityRegistry.cc
  src/ConsumesInfo.cc
  src/CurrentModuleOnThread.cc
  src/GlobalContext.cc
  src/InternalContext.cc
  src/ModuleCallingContext.cc
  src/ParentContext.cc
  src/PathContext.cc
  src/PathsAndConsumesOfModulesBase.cc
  src/PlaceInPathContext.cc
  src/ProcessContext.cc
  src/ServiceMakerBase.cc
  src/ServicePluginFactory.cc
  src/ServiceRegistry.cc
  src/ServiceToken.cc
  src/ServiceWrapperBase.cc
  src/ServicesManager.cc
  src/StreamContext.cc
)

set_target_properties(FWCoreServiceRegistry PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreServiceRegistry PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServiceRegistry PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreServiceRegistry PUBLIC
DataFormatsProvenance
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreUtilities
)


add_python_rules(FWCore/ServiceRegistry)
install( TARGETS FWCoreServiceRegistry DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


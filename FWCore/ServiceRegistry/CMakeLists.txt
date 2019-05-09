if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreServiceRegistry SHARED 
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


install( TARGETS FWCoreServiceRegistry DESTINATION  lib  EXPORT cmssw::FWCoreServiceRegistry)


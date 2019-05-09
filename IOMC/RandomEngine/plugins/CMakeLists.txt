add_library(IOMCRandomEnginePlugins SHARED 
  Module.cc
)

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


install( TARGETS IOMCRandomEnginePlugins DESTINATION  lib  EXPORT cmssw::IOMCRandomEnginePlugins)


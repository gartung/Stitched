add_library(FWCorePrescaleServicePlugin SHARED 
  Module.cc
)

target_include_directories(FWCorePrescaleServicePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCorePrescaleServicePlugin PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCorePrescaleServicePlugin PUBLIC
FWCorePrescaleService
FWCoreServiceRegistry
)


install( TARGETS FWCorePrescaleServicePlugin DESTINATION  lib  EXPORT cmssw::FWCorePrescaleServicePlugin)


add_library(FWCoreCommon SHARED 
  src/EventBase.cc
  src/LuminosityBlockBase.cc
  src/Provenance.cc
  src/RunBase.cc
  src/TriggerNames.cc
  src/TriggerResultsByName.cc
)

target_include_directories(FWCoreCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreCommon PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreCommon PUBLIC
DataFormatsProvenance
FWCoreParameterSet
FWCoreUtilities
)


install( TARGETS FWCoreCommon DESTINATION  lib  EXPORT cmssw::FWCoreCommon)

include_directories(
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(FWCoreCommon src/classes.h src/classes_def.xml)

add_dependencies(FWCoreCommon FWCoreCommon-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreCommonDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreCommon.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


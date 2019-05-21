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


install( TARGETS FWCoreCommon DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCoreCommon)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(FWCoreCommon src/classes.h src/classes_def.xml)

add_library(FWCoreCommonDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/FWCoreCommon.cxx)

set_property(TARGET FWCoreCommonDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(FWCoreCommonDictObj FWCoreCommon-dictgen)

add_dependencies(FWCoreCommon FWCoreCommonDictObj)

target_link_libraries(FWCoreCommon PUBLIC $<TARGET_OBJECTS:FWCoreCommonDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreCommon_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreCommonDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


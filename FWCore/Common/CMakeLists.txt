include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(FWCoreCommon src/classes.h src/classes_def.xml)

add_library(FWCoreCommon SHARED ${FWCoreCommon_EXTRA_SOURCES}
  src/EventBase.cc
  src/LuminosityBlockBase.cc
  src/Provenance.cc
  src/RunBase.cc
  src/TriggerNames.cc
  src/TriggerResultsByName.cc
)

add_rootdict_rules(FWCoreCommon)

set_target_properties(FWCoreCommon PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(FWCore/Common)
install( TARGETS FWCoreCommon DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


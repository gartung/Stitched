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

install( TARGETS FWCoreCommon DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreCommon)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_build_dictionary(FWCoreCommon src/classes.h src/classes_def.xml OPTIONS )
add_dependencies(FWCoreCommon FWCoreCommon-dictgen)

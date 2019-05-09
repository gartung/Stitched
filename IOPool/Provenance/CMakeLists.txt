add_library(IOPoolProvenance SHARED 
  src/CommonProvenanceFiller.cc
)

target_include_directories(IOPoolProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolProvenance PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(IOPoolProvenance PUBLIC
Core
DataFormatsProvenance
FWCoreParameterSet
MathCore
Net
RIO
Thread
Tree
)


install( TARGETS IOPoolProvenance DESTINATION  lib  EXPORT cmssw::IOPoolProvenance)


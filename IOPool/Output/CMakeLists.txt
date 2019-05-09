add_subdirectory(plugins)
add_library(IOPoolOutput SHARED 
  src/PoolOutputModule.cc
  src/RootOutputFile.cc
  src/RootOutputTree.cc
  src/TimeoutPoolOutputModule.cc
)

target_include_directories(IOPoolOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolOutput PUBLIC
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

target_link_libraries(IOPoolOutput PUBLIC
Core
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
FWCoreVersion
IOPoolCommon
IOPoolProvenance
MathCore
Net
RIO
Thread
Tree
)


install( TARGETS IOPoolOutput DESTINATION  lib  EXPORT cmssw::IOPoolOutput)


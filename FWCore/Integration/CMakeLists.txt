add_library(FWCoreIntegration SHARED 
  src/ESTestData.cc
  src/ESTestRecords.cc
)

target_include_directories(FWCoreIntegration PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreIntegration PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(FWCoreIntegration PUBLIC
  FWCoreFramework
  FWCoreUtilities
)

install( TARGETS FWCoreIntegration DESTINATION  lib  EXPORT stitched::FWCoreIntegration)


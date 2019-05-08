add_library(FWCoreParameterSetReader SHARED 
  src/ParameterSetReader.cc
)

target_include_directories(FWCoreParameterSetReader PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreParameterSetReader PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreParameterSetReader PUBLIC
  FWCoreParameterSet
  FWCorePythonParameterSet
)

install( TARGETS FWCoreParameterSetReader DESTINATION  lib  EXPORT stitched::FWCoreParameterSetReader)


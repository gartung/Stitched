add_library(IOPoolOutputPlugins SHARED 
  Module.cc
)

target_include_directories(IOPoolOutputPlugins PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(IOPoolOutputPlugins PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(IOPoolOutputPlugins PUBLIC
  IOPoolOutput
)

install( TARGETS IOPoolOutputPlugins DESTINATION  lib  EXPORT stitched::IOPoolOutputPlugins)


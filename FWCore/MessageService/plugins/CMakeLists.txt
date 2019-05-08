add_library(FWCoreMessageServicePlugins SHARED 
  Module.cc
)

target_include_directories(FWCoreMessageServicePlugins PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreMessageServicePlugins PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreMessageServicePlugins PUBLIC
  FWCoreMessageService
)

install( TARGETS FWCoreMessageServicePlugins DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreMessageServicePlugins)


add_executable(edmToFriendlyClassName
  edmToFriendlyClassName.cc
)

target_include_directories(edmToFriendlyClassName PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmToFriendlyClassName PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmToFriendlyClassName PUBLIC
  FWCoreUtilities
)

install( TARGETS edmToFriendlyClassName DESTINATION  ${CMAKE_INSTALL_BINDIR}  EXPORT stitched::edmToFriendlyClassName)

add_executable(cms_adler32
  adler32.c
)

target_include_directories(cms_adler32 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cms_adler32 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
 ${ZLIB_INCLUDE_DIR}
)
target_link_libraries(cms_adler32 PUBLIC
  FWCoreUtilities
  z
)

install( TARGETS cms_adler32 DESTINATION  ${CMAKE_INSTALL_BINDIR}  EXPORT stitched::cms_adler32)


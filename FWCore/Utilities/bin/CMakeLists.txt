add_executable(edmToFriendlyClassName
  edmToFriendlyClassName.cc
)

set_target_properties(edmToFriendlyClassName PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
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


add_python_rules(FWCore/Utilities/bin/)
install( TARGETS edmToFriendlyClassName DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(cms_adler32
  adler32.c
)

set_target_properties(cms_adler32 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
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


add_python_rules(FWCore/Utilities/bin/)
install( TARGETS cms_adler32 DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


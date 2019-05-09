add_executable(cms_anycp
  anycp.cpp
)

target_include_directories(cms_anycp PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cms_anycp PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(cms_anycp PUBLIC
UtilitiesStorageFactory
)


install( TARGETS cms_anycp DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cms_anycp)


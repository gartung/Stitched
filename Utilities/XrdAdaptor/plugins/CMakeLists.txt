add_library(UtilitiesXrdAdaptorPlugin SHARED ${UtilitiesXrdAdaptorPlugin_EXTRA_SOURCES}
  XrdStorageMaker.cc
)

set_target_properties(UtilitiesXrdAdaptorPlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties(UtilitiesXrdAdaptorPlugin PROPERTIES PREFIX "plugin")
target_include_directories(UtilitiesXrdAdaptorPlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UtilitiesXrdAdaptorPlugin PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XROOTD_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64")

target_link_libraries(UtilitiesXrdAdaptorPlugin PUBLIC
UtilitiesStorageFactory
UtilitiesXrdAdaptor
XrdCl
)


add_python_rules(Utilities/XrdAdaptor/plugins/)
install( TARGETS UtilitiesXrdAdaptorPlugin DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


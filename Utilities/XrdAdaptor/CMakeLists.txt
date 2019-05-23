add_subdirectory(plugins)
add_library(UtilitiesXrdAdaptor SHARED ${UtilitiesXrdAdaptor_EXTRA_SOURCES}
  src/QualityMetric.cc
  src/XrdFile.cc
  src/XrdRequest.cc
  src/XrdRequestManager.cc
  src/XrdSource.cc
  src/XrdStatistics.cc
)

set_target_properties(UtilitiesXrdAdaptor PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(UtilitiesXrdAdaptor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UtilitiesXrdAdaptor PUBLIC
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

target_link_libraries(UtilitiesXrdAdaptor PUBLIC
FWCoreMessageLogger
FWCoreUtilities
UtilitiesStorageFactory
XrdCl
XrdClient
XrdUtils
)


add_python_rules(Utilities/XrdAdaptor)
install( TARGETS UtilitiesXrdAdaptor DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


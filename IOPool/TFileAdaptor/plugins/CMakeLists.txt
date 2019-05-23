add_library(IOPoolTFileAdaptorAuto SHARED ${IOPoolTFileAdaptorAuto_EXTRA_SOURCES}
  module.cc
)

set_target_properties(IOPoolTFileAdaptorAuto PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties(IOPoolTFileAdaptorAuto PROPERTIES PREFIX "plugin")
target_include_directories(IOPoolTFileAdaptorAuto PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolTFileAdaptorAuto PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOPoolTFileAdaptorAuto PUBLIC
IOPoolTFileAdaptor
)


add_python_rules(IOPool/TFileAdaptor/plugins/)
install( TARGETS IOPoolTFileAdaptorAuto DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


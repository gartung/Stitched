add_library(IOPoolStreamerPlugins SHARED 
  Module.cc
)

target_include_directories(IOPoolStreamerPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolStreamerPlugins PUBLIC
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
${ZLIB_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOPoolStreamerPlugins PUBLIC
FWCoreFramework
FWCoreServiceRegistry
IOPoolStreamer
)


install( TARGETS IOPoolStreamerPlugins DESTINATION  lib  EXPORT cmssw::IOPoolStreamerPlugins)


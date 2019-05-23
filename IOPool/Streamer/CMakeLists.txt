add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(IOPoolStreamer SHARED ${IOPoolStreamer_EXTRA_SOURCES}
  src/ClassFiller.cc
  src/DumpTools.cc
  src/EventMessage.cc
  src/EventMsgBuilder.cc
  src/FRDEventMessage.cc
  src/InitMessage.cc
  src/InitMsgBuilder.cc
  src/StreamSerializer.cc
  src/StreamerFileIO.cc
  src/StreamerFileReader.cc
  src/StreamerFileWriter.cc
  src/StreamerInputFile.cc
  src/StreamerInputSource.cc
  src/StreamerOutputFile.cc
  src/StreamerOutputModuleBase.cc
)

set_target_properties(IOPoolStreamer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(IOPoolStreamer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolStreamer PUBLIC
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

target_link_libraries(IOPoolStreamer PUBLIC
DataFormatsCommon
DataFormatsProvenance
DataFormatsStreamer
FWCoreCatalog
FWCoreFramework
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreSources
FWCoreUtilities
FWCoreVersion
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
UtilitiesStorageFactory
z
)


add_python_rules(IOPool/Streamer)
install( TARGETS IOPoolStreamer DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


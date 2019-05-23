add_library(FWCoreSources SHARED ${FWCoreSources_EXTRA_SOURCES}
  src/DaqProvenanceHelper.cc
  src/EventSkipperByID.cc
  src/FromFiles.cc
  src/ProducerSourceBase.cc
  src/ProducerSourceFromFiles.cc
  src/PuttableSourceBase.cc
  src/RawInputSource.cc
  src/RawInputSourceFromFiles.cc
  src/VectorInputSource.cc
  src/VectorInputSourceFactory.cc
)

set_target_properties(FWCoreSources PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreSources PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreSources PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(FWCoreSources PUBLIC
${TBB_LIBRARIES}
DataFormatsProvenance
FWCoreCatalog
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCorePluginManager
FWCoreUtilities
)


add_python_rules(FWCore/Sources)
install( TARGETS FWCoreSources DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


add_library(IOPoolInput SHARED 
  src/DuplicateChecker.cc
  src/EmbeddedRootSource.cc
  src/InputFile.cc
  src/Module.cc
  src/OneLumiPoolSource.cc
  src/PoolSource.cc
  src/ProvenanceAdaptor.cc
  src/RootDelayedReader.cc
  src/RootEmbeddedFileSequence.cc
  src/RootFile.cc
  src/RootInputFileSequence.cc
  src/RootPrimaryFileSequence.cc
  src/RootSecondaryFileSequence.cc
  src/RootTree.cc
  src/RunHelper.cc
)

target_include_directories(IOPoolInput PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(IOPoolInput PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${CLHEP_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(IOPoolInput PUBLIC
  ${CLHEP_MAIN_LIBRARY}
  Core
  DataFormatsCommon
  DataFormatsProvenance
  FWCoreCatalog
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreSources
  FWCoreUtilities
  IOPoolCommon
  MathCore
  Net
  RIO
  Thread
  Tree
  UtilitiesStorageFactory
)

install( TARGETS IOPoolInput DESTINATION  lib  EXPORT stitched::IOPoolInput)


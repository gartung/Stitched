if(${BUILDTEST})
add_subdirectory(test)
endif()
add_library(DataFormatsProvenance SHARED 
  src/BranchChildren.cc
  src/BranchDescription.cc
  src/BranchID.cc
  src/BranchIDListHelper.cc
  src/BranchKey.cc
  src/BranchType.cc
  src/ESRecordAuxiliary.cc
  src/ElementID.cc
  src/EventAux.cc
  src/EventAuxiliary.cc
  src/EventEntryDescription.cc
  src/EventEntryInfo.cc
  src/EventID.cc
  src/EventRange.cc
  src/FileFormatVersion.cc
  src/FileID.cc
  src/FileIndex.cc
  src/Hash.cc
  src/History.cc
  src/IndexIntoFile.cc
  src/LuminosityBlockAux.cc
  src/LuminosityBlockAuxiliary.cc
  src/LuminosityBlockID.cc
  src/LuminosityBlockRange.cc
  src/MergeableRunProductMetadataBase.cc
  src/ModuleDescription.cc
  src/ParameterSetBlob.cc
  src/Parentage.cc
  src/ParentageRegistry.cc
  src/ProcessConfiguration.cc
  src/ProcessHistory.cc
  src/ProcessHistoryRegistry.cc
  src/ProductID.cc
  src/ProductIDToBranchID.cc
  src/ProductProvenance.cc
  src/ProductProvenanceRetriever.cc
  src/ProductRegistry.cc
  src/ProductResolverIndexHelper.cc
  src/Provenance.cc
  src/RunAux.cc
  src/RunAuxiliary.cc
  src/RunID.cc
  src/RunLumiEntryInfo.cc
  src/StableProvenance.cc
  src/StoredMergeableRunProductMetadata.cc
  src/SubProcessParentageHelper.cc
  src/ThinnedAssociationsHelper.cc
  src/Timestamp.cc
  src/ViewTypeChecker.cc
)

target_include_directories(DataFormatsProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsProvenance PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DataFormatsProvenance PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageLogger
FWCoreUtilities
Python2::Python
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


install( TARGETS DataFormatsProvenance DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::DataFormatsProvenance)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(DataFormatsProvenance src/classes.h src/classes_def.xml)

add_library(DataFormatsProvenanceDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsProvenance.cxx)

set_property(TARGET DataFormatsProvenanceDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(DataFormatsProvenanceDictObj DataFormatsProvenance-dictgen)

add_dependencies(DataFormatsProvenance DataFormatsProvenanceDictObj)

target_link_libraries(DataFormatsProvenance PUBLIC $<TARGET_OBJECTS:DataFormatsProvenanceDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsProvenance_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsProvenanceDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


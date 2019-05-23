add_subdirectory(bin)
add_subdirectory(test)
include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(FWCoreFWLite src/classes.h src/classes_def.xml)

add_library(FWCoreFWLite SHARED ${FWCoreFWLite_EXTRA_SOURCES}
  src/AutoLibraryLoader.cc
  src/BareRootProductGetter.cc
  src/BranchMapReader.cc
  src/FWLiteEnabler.cc
  src/RefStreamer.cc
  src/branchToClass.cc
)

add_rootdict_rules(FWCoreFWLite)

set_target_properties(FWCoreFWLite PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFWLite PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreFWLite PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCorePluginManager
FWCoreUtilities
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(FWCore/FWLite)
install( TARGETS FWCoreFWLite DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


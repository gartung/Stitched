add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreFWLite SHARED 
  src/AutoLibraryLoader.cc
  src/BareRootProductGetter.cc
  src/BranchMapReader.cc
  src/FWLiteEnabler.cc
  src/RefStreamer.cc
  src/branchToClass.cc
)

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
Core
DataFormatsCommon
DataFormatsProvenance
FWCorePluginManager
FWCoreUtilities
MathCore
Net
RIO
Thread
Tree
)


install( TARGETS FWCoreFWLite DESTINATION  lib  EXPORT cmssw::FWCoreFWLite)

include_directories(
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(FWCoreFWLite src/classes.h src/classes_def.xml)

add_dependencies(FWCoreFWLite FWCoreFWLite-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLiteDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLite.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


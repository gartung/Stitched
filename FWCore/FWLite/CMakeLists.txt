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

install( TARGETS FWCoreFWLite DESTINATION  lib  EXPORT stitched::FWCoreFWLite)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(FWCoreFWLite src/classes.h src/classes_def.xml ROOTMAPLIB FWCoreFWLiteDict)
add_library(FWCoreFWLiteDict SHARED FWCoreFWLiteDict.cpp)
add_dependencies(FWCoreFWLite FWCoreFWLiteGen)
install( TARGETS FWCoreFWLiteDict DESTINATION lib EXPORT stitched::FWCoreFWLiteDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLiteDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLite.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

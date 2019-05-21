add_subdirectory(bin)
if(${BUILDTEST})
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


install( TARGETS FWCoreFWLite DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCoreFWLite)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(FWCoreFWLite src/classes.h src/classes_def.xml)

add_library(FWCoreFWLiteDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLite.cxx)

set_property(TARGET FWCoreFWLiteDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(FWCoreFWLiteDictObj FWCoreFWLite-dictgen)

add_dependencies(FWCoreFWLite FWCoreFWLiteDictObj)

target_link_libraries(FWCoreFWLite PUBLIC $<TARGET_OBJECTS:FWCoreFWLiteDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLite_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreFWLiteDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


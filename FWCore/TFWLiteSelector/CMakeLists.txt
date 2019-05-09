if(${BUILDTEST})
add_subdirectory(test)
endif()
add_library(FWCoreTFWLiteSelector SHARED 
  src/TFWLiteSelectorBasic.cc
)

target_include_directories(FWCoreTFWLiteSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreTFWLiteSelector PUBLIC
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

target_link_libraries(FWCoreTFWLiteSelector PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


install( TARGETS FWCoreTFWLiteSelector DESTINATION  lib  EXPORT cmssw::FWCoreTFWLiteSelector)

include_directories(
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

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml)

add_dependencies(FWCoreTFWLiteSelector FWCoreTFWLiteSelector-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelector.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


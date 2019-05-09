add_library(FWCoreTFWLiteSelectorTest SHARED 
  src/ThingsTSelector.cc
  src/ThingsTSelector2.cc
)

target_include_directories(FWCoreTFWLiteSelectorTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC
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

target_link_libraries(FWCoreTFWLiteSelectorTest PUBLIC
DataFormatsCommon
FWCoreTFWLiteSelector
ROOT::Core
ROOT::Gpad
ROOT::Graf
ROOT::Graf3d
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::Postscript
ROOT::RIO
ROOT::Thread
ROOT::Tree
ROOT::TreePlayer
)


install( TARGETS FWCoreTFWLiteSelectorTest DESTINATION  lib  EXPORT cmssw::FWCoreTFWLiteSelectorTest)

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

reflex_build_dictionary(FWCoreTFWLiteSelectorTest src/classes.h src/classes_def.xml)

add_dependencies(FWCoreTFWLiteSelectorTest FWCoreTFWLiteSelectorTest-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTestDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTest.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


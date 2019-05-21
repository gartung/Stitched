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


install( TARGETS FWCoreTFWLiteSelectorTest DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCoreTFWLiteSelectorTest)

include_directories(${CMAKE_SOURCE_DIR}
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

reflex_build_dictionary(FWCoreTFWLiteSelectorTest src/classes.h src/classes_def.xml)

add_library(FWCoreTFWLiteSelectorTestDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTest.cxx)

set_property(TARGET FWCoreTFWLiteSelectorTestDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(FWCoreTFWLiteSelectorTestDictObj FWCoreTFWLiteSelectorTest-dictgen)

add_dependencies(FWCoreTFWLiteSelectorTest FWCoreTFWLiteSelectorTestDictObj)

target_link_libraries(FWCoreTFWLiteSelectorTest PUBLIC $<TARGET_OBJECTS:FWCoreTFWLiteSelectorTestDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTest_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTestDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


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


install( TARGETS FWCoreTFWLiteSelector DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCoreTFWLiteSelector)

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

reflex_build_dictionary(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml)

add_library(FWCoreTFWLiteSelectorDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelector.cxx)

set_property(TARGET FWCoreTFWLiteSelectorDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(FWCoreTFWLiteSelectorDictObj FWCoreTFWLiteSelector-dictgen)

add_dependencies(FWCoreTFWLiteSelector FWCoreTFWLiteSelectorDictObj)

target_link_libraries(FWCoreTFWLiteSelector PUBLIC $<TARGET_OBJECTS:FWCoreTFWLiteSelectorDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelector_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


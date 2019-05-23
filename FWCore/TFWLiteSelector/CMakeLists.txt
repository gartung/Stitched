add_subdirectory(test)
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

cms_rootdict(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml)

add_library(FWCoreTFWLiteSelector SHARED ${FWCoreTFWLiteSelector_EXTRA_SOURCES}
  src/TFWLiteSelectorBasic.cc
)

add_rootdict_rules(FWCoreTFWLiteSelector)

set_target_properties(FWCoreTFWLiteSelector PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(FWCore/TFWLiteSelector)
install( TARGETS FWCoreTFWLiteSelector DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


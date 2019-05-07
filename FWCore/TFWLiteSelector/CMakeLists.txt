if(BUILDTEST)
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(FWCoreTFWLiteSelector PUBLIC
  Core
  DataFormatsCommon
  DataFormatsProvenance
  FWCoreFramework
  FWCoreParameterSet
  FWCoreUtilities
  MathCore
  Net
  RIO
  Thread
  Tree
)

install( TARGETS FWCoreTFWLiteSelector DESTINATION  lib  EXPORT stitched::FWCoreTFWLiteSelector)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${Boost_INCLUDE_DIR}/python)
include_directories(${MD5_INCLUDE_DIR})
include_directories(${PYTHON_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
include_directories(${XERCESC_INCLUDE_DIR})
reflex_generate_dictionary(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml ROOTMAPLIB FWCoreTFWLiteSelectorDict)
add_library(FWCoreTFWLiteSelectorDict SHARED FWCoreTFWLiteSelectorDict.cpp)
add_dependencies(FWCoreTFWLiteSelector FWCoreTFWLiteSelectorGen)
install( TARGETS FWCoreTFWLiteSelectorDict DESTINATION lib EXPORT stitched::FWCoreTFWLiteSelectorDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelector.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

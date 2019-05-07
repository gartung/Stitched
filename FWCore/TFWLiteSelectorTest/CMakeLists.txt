add_library(FWCoreTFWLiteSelectorTest SHARED 
  src/ThingsTSelector.cc
  src/ThingsTSelector2.cc
)

target_include_directories(FWCoreTFWLiteSelectorTest PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC
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
target_link_libraries(FWCoreTFWLiteSelectorTest PUBLIC
  Core
  DataFormatsCommon
  FWCoreTFWLiteSelector
  Gpad
  Graf
  Graf3d
  Hist
  MathCore
  Matrix
  Net
  Postscript
  RIO
  Thread
  Tree
  TreePlayer
)

install( TARGETS FWCoreTFWLiteSelectorTest DESTINATION  lib  EXPORT stitched::FWCoreTFWLiteSelectorTest)

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
reflex_generate_dictionary(FWCoreTFWLiteSelectorTest src/classes.h src/classes_def.xml ROOTMAPLIB FWCoreTFWLiteSelectorTestDict)
add_library(FWCoreTFWLiteSelectorTestDict SHARED FWCoreTFWLiteSelectorTestDict.cpp)
add_dependencies(FWCoreTFWLiteSelectorTest FWCoreTFWLiteSelectorTestGen)
install( TARGETS FWCoreTFWLiteSelectorTestDict DESTINATION lib EXPORT stitched::FWCoreTFWLiteSelectorTestDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTestDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreTFWLiteSelectorTest.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

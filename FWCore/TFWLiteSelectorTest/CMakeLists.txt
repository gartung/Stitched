add_library(FWCoreTFWLiteSelectorTest SHARED 
  src/ThingsTSelector.cc
  src/ThingsTSelector2.cc
)

target_include_directories(FWCoreTFWLiteSelectorTest PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(FWCoreTFWLiteSelectorTest PUBLIC
  DataFormatsCommon
  FWCoreTFWLiteSelector
  ROOT::Graf3d
  ROOT::Postscript
  ROOT::TreePlayer
)

install( TARGETS FWCoreTFWLiteSelectorTest DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreTFWLiteSelectorTest)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${Boost_INCLUDE_DIR}/python)
include_directories(${MD5_INCLUDE_DIR})
include_directories(${Python2_INCLUDE_DIRS})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
include_directories(${XERCESC_INCLUDE_DIR})
reflex_build_dictionary(FWCoreTFWLiteSelectorTest src/classes.h src/classes_def.xml OPTIONS )
add_dependencies(FWCoreTFWLiteSelectorTest FWCoreTFWLiteSelectorTest-dictgen)

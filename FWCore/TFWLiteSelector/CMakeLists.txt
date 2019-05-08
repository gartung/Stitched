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
 ${Python2_INCLUDE_DIRS}
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
  ROOT::MathCore
  ROOT::Net
  ROOT::Thread
  ROOT::Tree
)

install( TARGETS FWCoreTFWLiteSelector DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreTFWLiteSelector)

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
reflex_build_dictionary(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml OPTIONS )
add_dependencies(FWCoreTFWLiteSelector FWCoreTFWLiteSelector-dictgen)

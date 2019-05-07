if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(DataFormatsTestObjects SHARED 
  src/DeleteEarly.cc
  src/StreamTestThing.cc
  src/ThingWithIsEqual.cc
  src/ThingWithMerge.cc
  src/ToyProducts.cc
)

target_include_directories(DataFormatsTestObjects PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(DataFormatsTestObjects PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(DataFormatsTestObjects PUBLIC
  DataFormatsCommon
)

install( TARGETS DataFormatsTestObjects DESTINATION  lib  EXPORT stitched::DataFormatsTestObjects)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(DataFormatsTestObjects src/classes.h src/classes_def.xml ROOTMAPLIB DataFormatsTestObjectsDict)
add_library(DataFormatsTestObjectsDict SHARED DataFormatsTestObjectsDict.cpp)
add_dependencies(DataFormatsTestObjects DataFormatsTestObjectsGen)
install( TARGETS DataFormatsTestObjectsDict DESTINATION lib EXPORT stitched::DataFormatsTestObjectsDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjectsDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjects.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

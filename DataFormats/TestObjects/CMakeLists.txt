if(${BUILDTEST})
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


install( TARGETS DataFormatsTestObjects DESTINATION  lib  EXPORT cmssw::DataFormatsTestObjects)

include_directories(
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(DataFormatsTestObjects src/classes.h src/classes_def.xml)

add_dependencies(DataFormatsTestObjects DataFormatsTestObjects-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjectsDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjects.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


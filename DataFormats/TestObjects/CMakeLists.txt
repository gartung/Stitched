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


install( TARGETS DataFormatsTestObjects DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::DataFormatsTestObjects)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(DataFormatsTestObjects src/classes.h src/classes_def.xml)

add_library(DataFormatsTestObjectsDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjects.cxx)

set_property(TARGET DataFormatsTestObjectsDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(DataFormatsTestObjectsDictObj DataFormatsTestObjects-dictgen)

add_dependencies(DataFormatsTestObjects DataFormatsTestObjectsDictObj)

target_link_libraries(DataFormatsTestObjects PUBLIC $<TARGET_OBJECTS:DataFormatsTestObjectsDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjects_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsTestObjectsDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


add_subdirectory(test)
include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(DataFormatsTestObjects src/classes.h src/classes_def.xml)

add_library(DataFormatsTestObjects SHARED ${DataFormatsTestObjects_EXTRA_SOURCES}
  src/DeleteEarly.cc
  src/StreamTestThing.cc
  src/ThingWithIsEqual.cc
  src/ThingWithMerge.cc
  src/ToyProducts.cc
)

add_rootdict_rules(DataFormatsTestObjects)

set_target_properties(DataFormatsTestObjects PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(DataFormats/TestObjects)
install( TARGETS DataFormatsTestObjects DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


add_library(DataFormatsStreamer SHARED 
  src/StreamedProducts.cc
)

target_include_directories(DataFormatsStreamer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsStreamer PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DataFormatsStreamer PUBLIC
Core
DataFormatsProvenance
DataFormatsStdDictionaries
MathCore
Net
RIO
Thread
Tree
)


install( TARGETS DataFormatsStreamer DESTINATION  lib  EXPORT cmssw::DataFormatsStreamer)

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

reflex_build_dictionary(DataFormatsStreamer src/classes.h src/classes_def.xml)

add_dependencies(DataFormatsStreamer DataFormatsStreamer-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamerDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamer.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


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

install( TARGETS DataFormatsStreamer DESTINATION  lib  EXPORT stitched::DataFormatsStreamer)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(DataFormatsStreamer src/classes.h src/classes_def.xml ROOTMAPLIB DataFormatsStreamerDict)
add_library(DataFormatsStreamerDict SHARED DataFormatsStreamerDict.cpp)
add_dependencies(DataFormatsStreamer DataFormatsStreamerGen)
install( TARGETS DataFormatsStreamerDict DESTINATION lib EXPORT stitched::DataFormatsStreamerDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamerDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamer.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

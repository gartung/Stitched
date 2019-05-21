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
DataFormatsProvenance
DataFormatsStdDictionaries
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


install( TARGETS DataFormatsStreamer DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::DataFormatsStreamer)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(DataFormatsStreamer src/classes.h src/classes_def.xml)

add_library(DataFormatsStreamerDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamer.cxx)

set_property(TARGET DataFormatsStreamerDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(DataFormatsStreamerDictObj DataFormatsStreamer-dictgen)

add_dependencies(DataFormatsStreamer DataFormatsStreamerDictObj)

target_link_libraries(DataFormatsStreamer PUBLIC $<TARGET_OBJECTS:DataFormatsStreamerDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamer_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStreamerDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


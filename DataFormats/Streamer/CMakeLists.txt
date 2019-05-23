include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(DataFormatsStreamer src/classes.h src/classes_def.xml)

add_library(DataFormatsStreamer SHARED ${DataFormatsStreamer_EXTRA_SOURCES}
  src/StreamedProducts.cc
)

add_rootdict_rules(DataFormatsStreamer)

set_target_properties(DataFormatsStreamer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(DataFormats/Streamer)
install( TARGETS DataFormatsStreamer DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


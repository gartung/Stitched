include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml)

add_library(SimDataFormatsRandomEngine SHARED ${SimDataFormatsRandomEngine_EXTRA_SOURCES}
  src/RandomEngineState.cc
  src/RandomEngineStates.cc
)

add_rootdict_rules(SimDataFormatsRandomEngine)

set_target_properties(SimDataFormatsRandomEngine PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(SimDataFormatsRandomEngine PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SimDataFormatsRandomEngine PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(SimDataFormatsRandomEngine PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsCommon
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(SimDataFormats/RandomEngine)
install( TARGETS SimDataFormatsRandomEngine DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


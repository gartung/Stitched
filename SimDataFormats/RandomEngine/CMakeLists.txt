add_library(SimDataFormatsRandomEngine SHARED 
  src/RandomEngineState.cc
  src/RandomEngineStates.cc
)

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
Python::python
Threads::Threads
)


install( TARGETS SimDataFormatsRandomEngine DESTINATION  lib  EXPORT cmssw::SimDataFormatsRandomEngine)

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

reflex_build_dictionary(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml)

add_dependencies(SimDataFormatsRandomEngine SimDataFormatsRandomEngine-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngineDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngine.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


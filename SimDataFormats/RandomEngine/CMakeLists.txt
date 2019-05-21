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
Python2::Python
Threads::Threads
)


install( TARGETS SimDataFormatsRandomEngine DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::SimDataFormatsRandomEngine)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml)

add_library(SimDataFormatsRandomEngineDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngine.cxx)

set_property(TARGET SimDataFormatsRandomEngineDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(SimDataFormatsRandomEngineDictObj SimDataFormatsRandomEngine-dictgen)

add_dependencies(SimDataFormatsRandomEngine SimDataFormatsRandomEngineDictObj)

target_link_libraries(SimDataFormatsRandomEngine PUBLIC $<TARGET_OBJECTS:SimDataFormatsRandomEngineDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngine_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngineDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


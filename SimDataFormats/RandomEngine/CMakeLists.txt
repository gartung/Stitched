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
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsCommon
  FWCoreUtilities
  dl
)

install( TARGETS SimDataFormatsRandomEngine DESTINATION  lib  EXPORT stitched::SimDataFormatsRandomEngine)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml ROOTMAPLIB SimDataFormatsRandomEngineDict)
add_library(SimDataFormatsRandomEngineDict SHARED SimDataFormatsRandomEngineDict.cpp)
add_dependencies(SimDataFormatsRandomEngine SimDataFormatsRandomEngineGen)
install( TARGETS SimDataFormatsRandomEngineDict DESTINATION lib EXPORT stitched::SimDataFormatsRandomEngineDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngineDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/SimDataFormatsRandomEngine.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

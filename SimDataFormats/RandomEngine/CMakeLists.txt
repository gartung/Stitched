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

install( TARGETS SimDataFormatsRandomEngine DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::SimDataFormatsRandomEngine)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_build_dictionary(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml OPTIONS )
add_dependencies(SimDataFormatsRandomEngine SimDataFormatsRandomEngine-dictgen)

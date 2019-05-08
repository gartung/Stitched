add_library(FWCoreMessageLogger SHARED 
  src/AbstractMLscribe.cc
  src/ELextendedID.cc
  src/ELmap.cc
  src/ELseverityLevel.cc
  src/ELstring.cc
  src/ErrorObj.cc
  src/ExceptionMessages.cc
  src/JobReport.cc
  src/MessageDrop.cc
  src/MessageLogger.cc
  src/MessageLoggerQ.cc
  src/MessageSender.cc
  src/SilentMLscribe.cc
)

target_include_directories(FWCoreMessageLogger PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreMessageLogger PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreMessageLogger PUBLIC
  ${TBB_LIBRARIES}
  ${TINYXML2_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

install( TARGETS FWCoreMessageLogger DESTINATION  lib  EXPORT stitched::FWCoreMessageLogger)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(FWCoreMessageLogger src/classes.h src/classes_def.xml ROOTMAPLIB FWCoreMessageLoggerDict)
add_library(FWCoreMessageLoggerDict SHARED FWCoreMessageLoggerDict.cpp)
add_dependencies(FWCoreMessageLogger FWCoreMessageLoggerGen)
install( TARGETS FWCoreMessageLoggerDict DESTINATION lib EXPORT stitched::FWCoreMessageLoggerDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreMessageLoggerDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreMessageLogger.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

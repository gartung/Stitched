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
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  ${TINYXML2_LIBRARY}
  FWCoreUtilities
  dl
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

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


install( TARGETS FWCoreMessageLogger DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCoreMessageLogger)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(FWCoreMessageLogger src/classes.h src/classes_def.xml)

add_library(FWCoreMessageLoggerDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/FWCoreMessageLogger.cxx)

set_property(TARGET FWCoreMessageLoggerDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(FWCoreMessageLoggerDictObj FWCoreMessageLogger-dictgen)

add_dependencies(FWCoreMessageLogger FWCoreMessageLoggerDictObj)

target_link_libraries(FWCoreMessageLogger PUBLIC $<TARGET_OBJECTS:FWCoreMessageLoggerDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/FWCoreMessageLogger_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/FWCoreMessageLoggerDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


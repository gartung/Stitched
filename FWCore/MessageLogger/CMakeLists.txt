include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(FWCoreMessageLogger src/classes.h src/classes_def.xml)

add_library(FWCoreMessageLogger SHARED ${FWCoreMessageLogger_EXTRA_SOURCES}
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

add_rootdict_rules(FWCoreMessageLogger)

set_target_properties(FWCoreMessageLogger PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(FWCore/MessageLogger)
install( TARGETS FWCoreMessageLogger DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


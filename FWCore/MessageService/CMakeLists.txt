add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(FWCoreMessageService SHARED 
  src/ELadministrator.cc
  src/ELdestination.cc
  src/ELlimitsTable.cc
  src/ELoutput.cc
  src/ELstatistics.cc
  src/HardwiredDefaults.cc
  src/MainThreadMLscribe.cc
  src/MessageLogger.cc
  src/MessageLoggerDefaults.cc
  src/MessageLoggerScribe.cc
  src/MessageServicePSetValidation.cc
  src/MessageServicePresence.cc
  src/SingleThreadMSPresence.cc
  src/ThreadQueue.cc
  src/ThreadSafeLogMessageLoggerScribe.cc
)

target_include_directories(FWCoreMessageService PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreMessageService PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreMessageService PUBLIC
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
  DataFormatsProvenance
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
)

install( TARGETS FWCoreMessageService DESTINATION  lib  EXPORT stitched::FWCoreMessageService)


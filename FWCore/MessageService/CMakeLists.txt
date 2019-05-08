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
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreMessageService PUBLIC
  ${TBB_LIBRARIES}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  DataFormatsProvenance
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

install( TARGETS FWCoreMessageService DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreMessageService)


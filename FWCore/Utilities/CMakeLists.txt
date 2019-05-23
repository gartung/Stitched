add_subdirectory(bin)
add_subdirectory(test)
add_library(FWCoreUtilities SHARED ${FWCoreUtilities_EXTRA_SOURCES}
  src/Adler32Calculator.cc
  src/BaseWithDict.cc
  src/CPUServiceBase.cc
  src/CPUTimer.cc
  src/CRC32Calculator.cc
  src/ConvertException.cc
  src/DebugMacros.cc
  src/DictionaryTools.cc
  src/Digest.cc
  src/EDMException.cc
  src/ESInputTag.cc
  src/Exception.cc
  src/ExceptionCollector.cc
  src/ExceptionPropagate.cc
  src/FriendlyName.cc
  src/FunctionWithDict.cc
  src/GlobalIdentifier.cc
  src/Guid.cc
  src/InputTag.cc
  src/IterWithDict.cc
  src/LuminosityBlockIndex.cc
  src/MallocOpts.cc
  src/MemberWithDict.cc
  src/OStreamColumn.cc
  src/ObjectWithDict.cc
  src/Parse.cc
  src/Presence.cc
  src/RandomNumberGenerator.cc
  src/RegexMatch.cc
  src/ReleaseVersion.cc
  src/RunIndex.cc
  src/SingleConsumerQ.cc
  src/TestHelper.cc
  src/TimeOfDay.cc
  src/TimingServiceBase.cc
  src/TypeDemangler.cc
  src/TypeID.cc
  src/TypeWithDict.cc
  src/UnixSignalHandlers.cc
  src/WallclockTimer.cc
  src/WrappedClassName.cc
  src/resolveSymbolicLinks.cc
  src/typelookup.cc
)

set_target_properties(FWCoreUtilities PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreUtilities PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreUtilities PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreUtilities PUBLIC
${MD5_LIBRARY}
${TBB_LIBRARIES}
${UUID_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
Python2::Python
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


add_python_rules(FWCore/Utilities)
install( TARGETS FWCoreUtilities DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


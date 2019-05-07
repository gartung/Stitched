add_library(FWCoreServicesPlugins SHARED 
  CPU.cc
  CheckTransitions.cc
  ConcurrentModuleTimer.cc
  CondorStatusUpdater.cc
  DependencyGraph.cc
  InitRootHandlers.cc
  LoadAllDictionaries.cc
  Module.cc
  PrintLoadingPlugins.cc
  ProcInfoFetcher.cc
  ProductRegistryDumper.cc
  ResourceEnforcer.cc
  SimpleMemoryCheck.cc
  StallMonitor.cc
  Timing.cc
  Tracer.cc
  UnixSignalService.cc
  ZombieKillerService.cc
)

target_include_directories(FWCoreServicesPlugins PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreServicesPlugins PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
 ${XROOTD_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64")
target_link_libraries(FWCoreServicesPlugins PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreServices
  UtilitiesStorageFactory
  UtilitiesXrdAdaptor
  atomic
  dl
)

install( TARGETS FWCoreServicesPlugins DESTINATION  lib  EXPORT stitched::FWCoreServicesPlugins)


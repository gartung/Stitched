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
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
 ${XROOTD_INCLUDE_DIR}
 ${XROOTD_INCLUDE_DIR}/xrootd
)
add_compile_options("-D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64")
target_link_libraries(FWCoreServicesPlugins PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreServices
  Python2::Python
  Threads::Threads
  UtilitiesStorageFactory
  UtilitiesXrdAdaptor
  atomic
)

install( TARGETS FWCoreServicesPlugins DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreServicesPlugins)


add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(UtilitiesStorageFactory SHARED 
  src/File.cc
  src/IOChannel.cc
  src/IOInput.cc
  src/IOOutput.cc
  src/LocalCacheFile.cc
  src/LocalFileSystem.cc
  src/RemoteFile.cc
  src/StatisticsSenderService.cc
  src/Storage.cc
  src/StorageAccount.cc
  src/StorageAccountProxy.cc
  src/StorageFactory.cc
  src/StorageMaker.cc
  src/StorageMakerFactory.cc
  src/Throw.cc
  src/UnixFile.cc
  src/UnixIOChannel.cc
)

target_include_directories(UtilitiesStorageFactory PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(UtilitiesStorageFactory PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(UtilitiesStorageFactory PUBLIC
  ${OPENSSL_CRYPTO_LIBRARY}
  ${OPENSSL_SSL_LIBRARY}
  ${TBB_LIBRARIES}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageLogger
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

install( TARGETS UtilitiesStorageFactory DESTINATION  lib  EXPORT stitched::UtilitiesStorageFactory)


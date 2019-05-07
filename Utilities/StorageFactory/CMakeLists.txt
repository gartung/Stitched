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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(UtilitiesStorageFactory PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${OPENSSL_CRYPTO_LIBRARY}
  ${OPENSSL_SSL_LIBRARY}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreMessageLogger
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
)

install( TARGETS UtilitiesStorageFactory DESTINATION  lib  EXPORT stitched::UtilitiesStorageFactory)


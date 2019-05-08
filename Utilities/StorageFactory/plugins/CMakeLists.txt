add_library(UtilitiesStorageFactoryPlugins SHARED 
  GsiFTPStorageMaker.cc
  HttpStorageMaker.cc
  LocalStorageMaker.cc
  StatisticsSenderServiceMaker.cc
  StormLCGStorageMaker.cc
  StormStorageMaker.cc
)

target_include_directories(UtilitiesStorageFactoryPlugins PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(UtilitiesStorageFactoryPlugins PUBLIC
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
target_link_libraries(UtilitiesStorageFactoryPlugins PUBLIC
  UtilitiesStorageFactory
)

install( TARGETS UtilitiesStorageFactoryPlugins DESTINATION  lib  EXPORT stitched::UtilitiesStorageFactoryPlugins)


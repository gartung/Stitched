add_library(UtilitiesStorageFactoryPlugins SHARED ${UtilitiesStorageFactoryPlugins_EXTRA_SOURCES}
  GsiFTPStorageMaker.cc
  HttpStorageMaker.cc
  LocalStorageMaker.cc
  StatisticsSenderServiceMaker.cc
  StormLCGStorageMaker.cc
  StormStorageMaker.cc
)

set_target_properties(UtilitiesStorageFactoryPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set_target_properties(UtilitiesStorageFactoryPlugins PROPERTIES PREFIX "plugin")
target_include_directories(UtilitiesStorageFactoryPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UtilitiesStorageFactoryPlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(UtilitiesStorageFactoryPlugins PUBLIC
UtilitiesStorageFactory
)


add_python_rules(Utilities/StorageFactory/plugins/)
install( TARGETS UtilitiesStorageFactoryPlugins DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


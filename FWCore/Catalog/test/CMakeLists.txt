add_executable(edmCatalogFileLocator_t
  FileLocator_t.cpp
)

target_include_directories(edmCatalogFileLocator_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmCatalogFileLocator_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(edmCatalogFileLocator_t PUBLIC
FWCoreCatalog
FWCorePluginManager
FWCoreServiceRegistry
)


add_test(NAME edmCatalogFileLocator_t COMMAND edmCatalogFileLocator_t)


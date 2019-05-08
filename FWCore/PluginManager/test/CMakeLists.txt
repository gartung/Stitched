add_executable(TestFWCorePluginManagerPluginFactoryManager
  pluginfactorymanager_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginFactoryManager PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCorePluginManagerPluginFactoryManager PUBLIC
  ${CPPUNIT_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCorePluginManager
  Python2::Python
  Threads::Threads
)

add_test(NAME TestFWCorePluginManagerPluginFactoryManager COMMAND TestFWCorePluginManagerPluginFactoryManager)
add_executable(TestFWCorePluginManagerPluginManager
  pluginmanager_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginManager PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCorePluginManagerPluginManager PUBLIC
  ${CPPUNIT_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCorePluginManager
  Python2::Python
  TestFWCorePluginManagerDummyFactory
  Threads::Threads
)

add_test(NAME TestFWCorePluginManagerPluginManager COMMAND TestFWCorePluginManagerPluginManager)
add_executable(TestFWCorePluginManagerCacheParser
  cacheparser_t.cc
)

target_include_directories(TestFWCorePluginManagerCacheParser PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCorePluginManagerCacheParser PUBLIC
  ${CPPUNIT_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCorePluginManager
  Python2::Python
  Threads::Threads
)

add_test(NAME TestFWCorePluginManagerCacheParser COMMAND TestFWCorePluginManagerCacheParser)
add_executable(TestFWCorePluginManagerPluginFactory
  pluginfactory_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginFactory PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCorePluginManagerPluginFactory PUBLIC
  ${CPPUNIT_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCorePluginManager
  Python2::Python
  Threads::Threads
)

add_test(NAME TestFWCorePluginManagerPluginFactory COMMAND TestFWCorePluginManagerPluginFactory)
add_library(TestFWCorePluginManagerDummyFactory SHARED 
  DummyFactory.cc
)

target_include_directories(TestFWCorePluginManagerDummyFactory PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCorePluginManagerDummyFactory PUBLIC
  FWCorePluginManager
)

add_library(TestFWCorePluginManagerDummyPlugins SHARED 
  OneDummy.cc
  TwoDummy.cc
)

target_include_directories(TestFWCorePluginManagerDummyPlugins PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCorePluginManagerDummyPlugins PUBLIC
  FWCorePluginManager
  TestFWCorePluginManagerDummyFactory
)


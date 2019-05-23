add_executable(TestFWCorePluginManagerPluginFactoryManager
  pluginfactorymanager_t.cc
)

add_test(NAME TestFWCorePluginManagerPluginFactoryManager_CTest COMMAND TestFWCorePluginManagerPluginFactoryManager)

set_tests_properties(TestFWCorePluginManagerPluginFactoryManager_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCorePluginManagerPluginFactoryManager_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCorePluginManagerPluginFactoryManager PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCorePluginManagerPluginManager
  pluginmanager_t.cc
)

add_test(NAME TestFWCorePluginManagerPluginManager_CTest COMMAND TestFWCorePluginManagerPluginManager)

set_tests_properties(TestFWCorePluginManagerPluginManager_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCorePluginManagerPluginManager_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCorePluginManagerPluginManager PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCorePluginManagerCacheParser
  cacheparser_t.cc
)

add_test(NAME TestFWCorePluginManagerCacheParser_CTest COMMAND TestFWCorePluginManagerCacheParser)

set_tests_properties(TestFWCorePluginManagerCacheParser_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCorePluginManagerCacheParser_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCorePluginManagerCacheParser PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_executable(TestFWCorePluginManagerPluginFactory
  pluginfactory_t.cc
)

add_test(NAME TestFWCorePluginManagerPluginFactory_CTest COMMAND TestFWCorePluginManagerPluginFactory)

set_tests_properties(TestFWCorePluginManagerPluginFactory_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(TestFWCorePluginManagerPluginFactory_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(TestFWCorePluginManagerPluginFactory PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_library(TestFWCorePluginManagerDummyFactory SHARED ${TestFWCorePluginManagerDummyFactory_EXTRA_SOURCES}
  DummyFactory.cc
)

set_target_properties(TestFWCorePluginManagerDummyFactory PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
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


add_library(TestFWCorePluginManagerDummyPlugins SHARED ${TestFWCorePluginManagerDummyPlugins_EXTRA_SOURCES}
  OneDummy.cc
  TwoDummy.cc
)

set_target_properties(TestFWCorePluginManagerDummyPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(TestFWCorePluginManagerDummyPlugins PROPERTIES PREFIX "plugin")
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



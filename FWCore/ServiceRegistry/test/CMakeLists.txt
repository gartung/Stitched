add_library(FWCoreServiceRegistryTestDummyService SHARED 
  stubs/DependsOnDummyService.cc
  stubs/DummyService.cc
  stubs/DummyServiceE0.cc
  stubs/DummyStoreConfigService.cc
)

target_include_directories(FWCoreServiceRegistryTestDummyService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreServiceRegistryTestDummyService PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreServiceRegistry
Python::python
Threads::Threads
)


add_library(FWCoreServiceRegistryTestDummyServicePlugin SHARED 
  stubs/Modules.cc
)

target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreServiceRegistry
FWCoreServiceRegistryTestDummyService
Python::python
Threads::Threads
)


add_executable(testServiceRegistry
  connect_but_block_self_t.cppunit.cc
  serviceregistry_t.cppunit.cpp
  servicesmanager_t.cppunit.cc
)

target_include_directories(testServiceRegistry PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testServiceRegistry PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testServiceRegistry PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServiceRegistryTestDummyService
FWCoreUtilities
Python::python
Threads::Threads
)


add_test(NAME testServiceRegistry COMMAND testServiceRegistry)

add_executable(servicesmanager_order
  servicesmanager_order.cpp
)

target_include_directories(servicesmanager_order PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(servicesmanager_order PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(servicesmanager_order PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServiceRegistryTestDummyService
FWCoreUtilities
Python::python
Threads::Threads
)


add_test(NAME servicesmanager_order COMMAND servicesmanager_order)


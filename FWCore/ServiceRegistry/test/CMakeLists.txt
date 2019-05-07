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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreServiceRegistryTestDummyService PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistry
  dl
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistry
  FWCoreServiceRegistryTestDummyService
  dl
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(testServiceRegistry PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreParameterSet
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreServiceRegistryTestDummyService
  FWCoreUtilities
  dl
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(servicesmanager_order PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${PYTHON_LIBRARY}
  FWCoreParameterSet
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreServiceRegistryTestDummyService
  FWCoreUtilities
  dl
)

add_test(NAME servicesmanager_order COMMAND servicesmanager_order)

add_library(StuckAnalyzer SHARED 
  StuckAnalyzer.cc
)

target_include_directories(StuckAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(StuckAnalyzer PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(StuckAnalyzer PUBLIC
  FWCoreFramework
  FWCorePluginManager
  FWCoreServices
)

add_library(SiteLocalConfigUnitTestClient SHARED 
  SiteLocalConfigServiceTester.cc
)

target_include_directories(SiteLocalConfigUnitTestClient PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(SiteLocalConfigUnitTestClient PUBLIC
  FWCoreFramework
  FWCorePluginManager
  FWCoreServices
)

add_executable(TestFWCoreServicesDriver
  TestFWCoreServicesDriver.cpp
)

target_include_directories(TestFWCoreServicesDriver PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCoreServicesDriver PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(TestFWCoreServicesDriver PUBLIC
  FWCoreServices
  FWCoreUtilities
)

add_test(NAME TestFWCoreServicesDriver COMMAND TestFWCoreServicesDriver)

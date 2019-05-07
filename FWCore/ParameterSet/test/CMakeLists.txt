add_executable(testParameterSet
  ps_t.cppunit.cc
)

target_include_directories(testParameterSet PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(testParameterSet PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(testParameterSet PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreParameterSet
  FWCoreUtilities
)

add_test(NAME testParameterSet COMMAND testParameterSet)
add_executable(TestFWCoreParameterSetDescription
  parameterSetDescription_t.cc
)

target_include_directories(TestFWCoreParameterSetDescription PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCoreParameterSetDescription PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  FWCoreParameterSet
  FWCoreUtilities
  dl
)

add_test(NAME TestFWCoreParameterSetDescription COMMAND TestFWCoreParameterSetDescription)
add_executable(TestFWCoreParameterSetDriver
  TestFWCoreParameterSetDriver.cpp
)

target_include_directories(TestFWCoreParameterSetDriver PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestFWCoreParameterSetDriver PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(TestFWCoreParameterSetDriver PUBLIC
  FWCoreParameterSet
  FWCoreUtilities
)

add_test(NAME TestFWCoreParameterSetDriver COMMAND TestFWCoreParameterSetDriver)
add_executable(testDefaultModuleLabel
  defaultModuleLabel_t.cc
)

target_include_directories(testDefaultModuleLabel PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(testDefaultModuleLabel PUBLIC
 ${Boost_INCLUDE_DIR}
 ${CPPUNIT_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(testDefaultModuleLabel PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreParameterSet
)

add_test(NAME testDefaultModuleLabel COMMAND testDefaultModuleLabel)

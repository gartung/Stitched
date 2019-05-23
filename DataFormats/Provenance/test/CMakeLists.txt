add_executable(testDataFormatsProvenance
  eventid_t.cppunit.cc
  eventrange_t.cppunit.cc
  indexIntoFile1_t.cppunit.cc
  indexIntoFile2_t.cppunit.cc
  indexIntoFile3_t.cppunit.cc
  indexIntoFile4_t.cppunit.cc
  indexIntoFile5_t.cppunit.cc
  indexIntoFile_t.cppunit.cc
  lumirange_t.cppunit.cc
  parametersetid_t.cppunit.cc
  testRunner.cpp
  timestamp_t.cppunit.cc
)

add_test(NAME testDataFormatsProvenance_CTest COMMAND testDataFormatsProvenance)

set_tests_properties(testDataFormatsProvenance_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testDataFormatsProvenance_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testDataFormatsProvenance PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testDataFormatsProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsProvenance PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testDataFormatsProvenance PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsProvenance
)


add_executable(EntryDescription_t
  EntryDescription_t.cpp
)

add_test(NAME EntryDescription_t_CTest COMMAND EntryDescription_t)

set_tests_properties(EntryDescription_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(EntryDescription_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(EntryDescription_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(EntryDescription_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EntryDescription_t PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(EntryDescription_t PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsProvenance
)


add_executable(ElementID_t
  ElementID_t.cpp
)

add_test(NAME ElementID_t_CTest COMMAND ElementID_t)

set_tests_properties(ElementID_t_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(ElementID_t_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(ElementID_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(ElementID_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ElementID_t PUBLIC
${Boost_INCLUDE_DIR}
${CATCH2_INCLUDE_DIRS}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(ElementID_t PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsProvenance
)


add_executable(testProductResolverIndexHelper
  productResolverIndexHelper_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME testProductResolverIndexHelper_CTest COMMAND testProductResolverIndexHelper)

set_tests_properties(testProductResolverIndexHelper_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testProductResolverIndexHelper_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testProductResolverIndexHelper PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testProductResolverIndexHelper PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testProductResolverIndexHelper PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testProductResolverIndexHelper PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsProvenance
DataFormatsTestObjects
)


add_executable(productResolverIndexHelperTest
  productResolverIndexHelperTest.cc
)

add_test(NAME productResolverIndexHelperTest_CTest COMMAND productResolverIndexHelperTest)

set_tests_properties(productResolverIndexHelperTest_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(productResolverIndexHelperTest_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(productResolverIndexHelperTest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(productResolverIndexHelperTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(productResolverIndexHelperTest PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(productResolverIndexHelperTest PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsProvenance
)



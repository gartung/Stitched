add_executable(testFEDRawData
  FEDRawDataProduct_t.cc
  FEDRawData_t.cpp
)

add_test(NAME testFEDRawData_CTest COMMAND testFEDRawData)

set_tests_properties(testFEDRawData_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(testFEDRawData_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(testFEDRawData PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(testFEDRawData PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFEDRawData PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testFEDRawData PUBLIC
${CPPUNIT_LIBRARY}
DataFormatsFEDRawData
)


add_library(testDumpFEDRawDataProduct SHARED ${testDumpFEDRawDataProduct_EXTRA_SOURCES}
  DumpFEDRawDataProduct.cc
)

set_target_properties(testDumpFEDRawDataProduct PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(testDumpFEDRawDataProduct PROPERTIES PREFIX "plugin")
target_include_directories(testDumpFEDRawDataProduct PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDumpFEDRawDataProduct PUBLIC
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

target_link_libraries(testDumpFEDRawDataProduct PUBLIC
DataFormatsFEDRawData
FWCoreFramework
)



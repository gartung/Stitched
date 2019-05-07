add_executable(testFEDRawData
  FEDRawDataProduct_t.cc
  FEDRawData_t.cpp
)

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

add_test(NAME testFEDRawData COMMAND testFEDRawData)
add_library(testDumpFEDRawDataProduct SHARED 
  DumpFEDRawDataProduct.cc
)

target_include_directories(testDumpFEDRawDataProduct PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(testDumpFEDRawDataProduct PUBLIC
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
target_link_libraries(testDumpFEDRawDataProduct PUBLIC
  DataFormatsFEDRawData
  FWCoreFramework
)


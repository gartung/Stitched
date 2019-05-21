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


add_test(testDataFormatsProvenance testDataFormatsProvenance)

add_executable(EntryDescription_t
  EntryDescription_t.cpp
)

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


add_test(EntryDescription_t EntryDescription_t)

add_executable(ElementID_t
  ElementID_t.cpp
)

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


add_test(ElementID_t ElementID_t)

add_executable(testProductResolverIndexHelper
  productResolverIndexHelper_t.cppunit.cc
  testRunner.cpp
)

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


add_test(testProductResolverIndexHelper testProductResolverIndexHelper)

add_executable(productResolverIndexHelperTest
  productResolverIndexHelperTest.cc
)

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


add_test(productResolverIndexHelperTest productResolverIndexHelperTest)


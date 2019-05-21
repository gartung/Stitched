add_executable(testFWCoreSOA
  table_t.cppunit.cpp
)

target_include_directories(testFWCoreSOA PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSOA PUBLIC
${CPPUNIT_INCLUDE_DIR}
)

target_link_libraries(testFWCoreSOA PUBLIC
${CPPUNIT_LIBRARY}
)


add_test(testFWCoreSOA testFWCoreSOA)


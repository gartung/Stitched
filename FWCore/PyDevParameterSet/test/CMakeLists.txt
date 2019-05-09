add_executable(testPyBind11ParameterSet
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  processbuilder_t.cppunit.cpp
  readpsetsfrom_t.cppunit.cc
)

target_include_directories(testPyBind11ParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testPyBind11ParameterSet PUBLIC
${Boost_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIRS}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testPyBind11ParameterSet PUBLIC
${CPPUNIT_LIBRARY}
FWCoreParameterSet
FWCorePyDevParameterSet
FWCoreUtilities
)


add_test(NAME testPyBind11ParameterSet COMMAND testPyBind11ParameterSet)


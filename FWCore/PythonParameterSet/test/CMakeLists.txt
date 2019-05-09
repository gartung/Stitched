add_executable(testPythonParameterSet
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  processbuilder_t.cppunit.cpp
  readpsetsfrom_t.cppunit.cc
)

target_include_directories(testPythonParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testPythonParameterSet PUBLIC
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

target_link_libraries(testPythonParameterSet PUBLIC
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
FWCorePythonParameterSet
FWCoreUtilities
Python::python
Threads::Threads
)


add_test(NAME testPythonParameterSet COMMAND testPythonParameterSet)


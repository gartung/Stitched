add_executable(testFWCoreTestProcessor
  testprocessor_t.cppunit.cc
)

target_include_directories(testFWCoreTestProcessor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreTestProcessor PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(testFWCoreTestProcessor PUBLIC
${CPPUNIT_LIBRARY}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreIntegration
FWCoreParameterSet
FWCorePythonParameterSet
FWCoreTestProcessor
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_test(testFWCoreTestProcessor testFWCoreTestProcessor)


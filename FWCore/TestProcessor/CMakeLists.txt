if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreTestProcessor SHARED 
  src/Event.cc
  src/EventSetupTestHelper.cc
  src/TestProcessor.cc
)

target_include_directories(FWCoreTestProcessor PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreTestProcessor PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(FWCoreTestProcessor PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreFramework
  FWCorePythonParameterSet
  Python2::Python
  Threads::Threads
)

install( TARGETS FWCoreTestProcessor DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCoreTestProcessor)


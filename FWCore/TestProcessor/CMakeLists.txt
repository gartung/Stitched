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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(FWCoreTestProcessor PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreFramework
  FWCorePythonParameterSet
  dl
)

install( TARGETS FWCoreTestProcessor DESTINATION  lib  EXPORT stitched::FWCoreTestProcessor)


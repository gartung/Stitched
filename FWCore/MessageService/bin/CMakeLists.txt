add_executable(Standalone
  Standalone.cpp
)

target_include_directories(Standalone PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(Standalone PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(Standalone PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreMessageLogger
  FWCoreMessageService
  FWCorePluginManager
  FWCorePythonParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
)

install( TARGETS Standalone DESTINATION  bin  EXPORT stitched::Standalone)


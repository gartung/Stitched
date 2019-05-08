add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCorePythonParameterSet SHARED 
  src/MakeParameterSets.cc
  src/PythonParameterSet.cc
  src/PythonProcessDesc.cc
  src/PythonWrapper.cc
  src/initializeModule.cc
  src/pythonFileToConfigure.cc
)

target_include_directories(FWCorePythonParameterSet PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCorePythonParameterSet PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCorePythonParameterSet PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  DataFormatsProvenance
  FWCoreParameterSet
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

install( TARGETS FWCorePythonParameterSet DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::FWCorePythonParameterSet)


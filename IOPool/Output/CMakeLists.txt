add_subdirectory(test)
add_subdirectory(plugins)
add_library(IOPoolOutput SHARED ${IOPoolOutput_EXTRA_SOURCES}
  src/PoolOutputModule.cc
  src/RootOutputFile.cc
  src/RootOutputTree.cc
  src/TimeoutPoolOutputModule.cc
)

set_target_properties(IOPoolOutput PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(IOPoolOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolOutput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(IOPoolOutput PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
FWCoreVersion
IOPoolCommon
IOPoolProvenance
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(IOPool/Output)
install( TARGETS IOPoolOutput DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(FWCoreServices SHARED 
  src/JobReportService.cc
  src/SiteLocalConfigService.cc
)

target_include_directories(FWCoreServices PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreServices PUBLIC
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
target_link_libraries(FWCoreServices PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${XERCESC_LIBRARIES}
  Core
  DataFormatsCommon
  DataFormatsProvenance
  DataFormatsStreamer
  FWCoreConcurrency
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  Hist
  MathCore
  Matrix
  Net
  RIO
  Thread
  Tree
  dl
)

install( TARGETS FWCoreServices DESTINATION  lib  EXPORT stitched::FWCoreServices)


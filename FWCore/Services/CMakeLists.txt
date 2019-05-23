add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(FWCoreServices SHARED ${FWCoreServices_EXTRA_SOURCES}
  src/JobReportService.cc
  src/SiteLocalConfigService.cc
)

set_target_properties(FWCoreServices PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreServices PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServices PUBLIC
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

target_link_libraries(FWCoreServices PUBLIC
${XERCESC_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
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
Python2::Python
ROOT::Core
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


add_python_rules(FWCore/Services)
install( TARGETS FWCoreServices DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


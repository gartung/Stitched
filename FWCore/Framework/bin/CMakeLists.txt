add_executable(cmsRunGlibC
  cmsRun.cpp
)

set_target_properties(cmsRunGlibC PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsRunGlibC PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunGlibC PUBLIC
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

target_link_libraries(cmsRunGlibC PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
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


add_python_rules(FWCore/Framework/bin/)
install( TARGETS cmsRunGlibC DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(cmsRunTC
  cmsRun.cpp
)

set_target_properties(cmsRunTC PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsRunTC PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunTC PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TCMALLOC_INCLUDE_DIR}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(cmsRunTC PUBLIC
${TBB_LIBRARIES}
${tcmalloc_minimal}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/Framework/bin/)
install( TARGETS cmsRunTC DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(cmsRun
  cmsRun.cpp
)

set_target_properties(cmsRun PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsRun PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRun PUBLIC
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

target_link_libraries(cmsRun PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/Framework/bin/)
install( TARGETS cmsRun DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(cmsRunVDT
  cmsRun.cpp
)

set_target_properties(cmsRunVDT PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsRunVDT PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunVDT PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${JEMALLOC_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${VDT_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(cmsRunVDT PUBLIC
${TBB_LIBRARIES}
${jemalloc}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
vdt
)


add_python_rules(FWCore/Framework/bin/)
install( TARGETS cmsRunVDT DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(cmsRunJE
  cmsRun.cpp
)

set_target_properties(cmsRunJE PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsRunJE PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunJE PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${JEMALLOC_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(cmsRunJE PUBLIC
${TBB_LIBRARIES}
${jemalloc}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/Framework/bin/)
install( TARGETS cmsRunJE DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(cmsRunPyDev
  cmsRunPyDev.cpp
)

set_target_properties(cmsRunPyDev PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(cmsRunPyDev PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunPyDev PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIRS}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(cmsRunPyDev PUBLIC
${TBB_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCorePluginManager
FWCorePyDevParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/Framework/bin/)
install( TARGETS cmsRunPyDev DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


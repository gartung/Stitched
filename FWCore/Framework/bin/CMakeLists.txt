add_executable(cmsRunGlibC
  cmsRun.cpp
)

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


install( TARGETS cmsRunGlibC DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cmsRunGlibC)

add_executable(cmsRunTC
  cmsRun.cpp
)

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
tcmalloc_minimal
)


install( TARGETS cmsRunTC DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cmsRunTC)

add_executable(cmsRun
  cmsRun.cpp
)

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


install( TARGETS cmsRun DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cmsRun)

add_executable(cmsRunVDT
  cmsRun.cpp
)

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
jemalloc
vdt
)


install( TARGETS cmsRunVDT DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cmsRunVDT)

add_executable(cmsRunJE
  cmsRun.cpp
)

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
jemalloc
)


install( TARGETS cmsRunJE DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cmsRunJE)

add_executable(cmsRunPyDev
  cmsRunPyDev.cpp
)

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


install( TARGETS cmsRunPyDev DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::cmsRunPyDev)


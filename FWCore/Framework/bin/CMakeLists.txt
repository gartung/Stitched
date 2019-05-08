add_executable(cmsRunGlibC
  cmsRun.cpp
)

target_include_directories(cmsRunGlibC PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunGlibC PUBLIC
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
  ROOT::Hist
  ROOT::Matrix
  Threads::Threads
)

install( TARGETS cmsRunGlibC DESTINATION  bin  EXPORT stitched::cmsRunGlibC)

add_executable(cmsRunTC
  cmsRun.cpp
)

target_include_directories(cmsRunTC PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunTC PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TCMALLOC_INCLUDE_DIR}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunTC PUBLIC
  ${TBB_LIBRARIES}
  ${TCMALLOC_LIBRARY}
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

install( TARGETS cmsRunTC DESTINATION  bin  EXPORT stitched::cmsRunTC)

add_executable(cmsRun
  cmsRun.cpp
)

target_include_directories(cmsRun PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRun PUBLIC
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

install( TARGETS cmsRun DESTINATION  bin  EXPORT stitched::cmsRun)

add_executable(cmsRunVDT
  cmsRun.cpp
)

target_include_directories(cmsRunVDT PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunVDT PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${JEMALLOC_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${VDT_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunVDT PUBLIC
  ${JEMALLOC_LIBRARY}
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
  vdt
)

install( TARGETS cmsRunVDT DESTINATION  bin  EXPORT stitched::cmsRunVDT)

add_executable(cmsRunJE
  cmsRun.cpp
)

target_include_directories(cmsRunJE PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunJE PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${JEMALLOC_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunJE PUBLIC
  ${JEMALLOC_LIBRARY}
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

install( TARGETS cmsRunJE DESTINATION  bin  EXPORT stitched::cmsRunJE)

add_executable(cmsRunPyDev
  cmsRunPyDev.cpp
)

target_include_directories(cmsRunPyDev PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunPyDev PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${Python2_INCLUDE_DIRS}/pybind11
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

install( TARGETS cmsRunPyDev DESTINATION  bin  EXPORT stitched::cmsRunPyDev)


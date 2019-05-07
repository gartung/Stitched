add_executable(cmsRunGlibC
  cmsRun.cpp
)

target_include_directories(cmsRunGlibC PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunGlibC PUBLIC
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
target_link_libraries(cmsRunGlibC PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  Core
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreParameterSetReader
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

install( TARGETS cmsRunGlibC DESTINATION  bin  EXPORT stitched::cmsRunGlibC)

add_executable(cmsRunTC
  cmsRun.cpp
)

target_include_directories(cmsRunTC PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(cmsRunTC PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TCMALLOC_INCLUDE_DIR}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunTC PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreParameterSetReader
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
  tcmalloc_minimal
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRun PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreParameterSetReader
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${VDT_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunVDT PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreParameterSetReader
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
  jemalloc
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
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunJE PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreParameterSetReader
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
  jemalloc
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
 ${PYTHON_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}/pybind11
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(cmsRunPyDev PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCorePluginManager
  FWCorePyDevParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
)

install( TARGETS cmsRunPyDev DESTINATION  bin  EXPORT stitched::cmsRunPyDev)


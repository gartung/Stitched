add_executable(edmProvDump
  EdmProvDump.cc
)

target_include_directories(edmProvDump PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmProvDump PUBLIC
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
target_link_libraries(edmProvDump PUBLIC
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  Core
  DataFormatsCommon
  DataFormatsProvenance
  DataFormatsStdDictionaries
  DataFormatsWrappedStdDictionaries
  FWCoreCatalog
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreServices
  FWCoreUtilities
  IOPoolCommon
  MathCore
  Net
  RIO
  Thread
  Tree
)

install( TARGETS edmProvDump DESTINATION  bin  EXPORT stitched::edmProvDump)

add_executable(edmFileUtil
  CollUtil.cc
  EdmFileUtil.cpp
)

target_include_directories(edmFileUtil PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmFileUtil PUBLIC
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
target_link_libraries(edmFileUtil PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  Core
  DataFormatsProvenance
  FWCoreCatalog
  FWCoreParameterSet
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreServices
  Hist
  IOPoolCommon
  MathCore
  Matrix
  Net
  RIO
  Thread
  Tree
  dl
)

install( TARGETS edmFileUtil DESTINATION  bin  EXPORT stitched::edmFileUtil)

add_executable(edmCopyUtil
  EdmCopyUtil.cpp
)

target_include_directories(edmCopyUtil PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmCopyUtil PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(edmCopyUtil PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreCatalog
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreServices
  IOPoolCommon
  UtilitiesStorageFactory
  dl
)

install( TARGETS edmCopyUtil DESTINATION  bin  EXPORT stitched::edmCopyUtil)


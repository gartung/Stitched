add_executable(edmClassStorageSize
  storageSize.cc
)

target_include_directories(edmClassStorageSize PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmClassStorageSize PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmClassStorageSize PUBLIC
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
  FWCoreFWLite
  MathCore
  Net
  RIO
  Thread
  Tree
  dl
)

install( TARGETS edmClassStorageSize DESTINATION  bin  EXPORT stitched::edmClassStorageSize)

add_executable(edmBranchStorageSize
  storageSizeForBranch.cc
)

target_include_directories(edmBranchStorageSize PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(edmBranchStorageSize PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(edmBranchStorageSize PUBLIC
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
  FWCoreFWLite
  MathCore
  Net
  RIO
  Thread
  Tree
  dl
)

install( TARGETS edmBranchStorageSize DESTINATION  bin  EXPORT stitched::edmBranchStorageSize)


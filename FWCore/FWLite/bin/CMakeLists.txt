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
  ${TINYXML2_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreFWLite
  Python2::Python
  ROOT::MathCore
  ROOT::Net
  ROOT::Thread
  ROOT::Tree
  Threads::Threads
)

install( TARGETS edmClassStorageSize DESTINATION  ${CMAKE_INSTALL_BINDIR}  EXPORT stitched::edmClassStorageSize)

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
  ${TINYXML2_LIBRARY}
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreFWLite
  Python2::Python
  ROOT::MathCore
  ROOT::Net
  ROOT::Thread
  ROOT::Tree
  Threads::Threads
)

install( TARGETS edmBranchStorageSize DESTINATION  ${CMAKE_INSTALL_BINDIR}  EXPORT stitched::edmBranchStorageSize)


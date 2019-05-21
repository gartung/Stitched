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
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


install( TARGETS edmClassStorageSize DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::edmClassStorageSize)

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
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
)


install( TARGETS edmBranchStorageSize DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::edmBranchStorageSize)


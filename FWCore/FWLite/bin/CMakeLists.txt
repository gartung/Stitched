add_executable(edmClassStorageSize
  storageSize.cc
)

set_target_properties(edmClassStorageSize PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
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


add_python_rules(FWCore/FWLite/bin/)
install( TARGETS edmClassStorageSize DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(edmBranchStorageSize
  storageSizeForBranch.cc
)

set_target_properties(edmBranchStorageSize PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
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


add_python_rules(FWCore/FWLite/bin/)
install( TARGETS edmBranchStorageSize DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


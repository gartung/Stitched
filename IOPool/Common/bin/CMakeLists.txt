add_executable(edmProvDump
  EdmProvDump.cc
)

set_target_properties(edmProvDump PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(edmProvDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmProvDump PUBLIC
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

target_link_libraries(edmProvDump PUBLIC
Boost::program_options
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
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(IOPool/Common/bin/)
install( TARGETS edmProvDump DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(edmFileUtil
  CollUtil.cc
  EdmFileUtil.cpp
)

set_target_properties(edmFileUtil PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(edmFileUtil PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmFileUtil PUBLIC
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

target_link_libraries(edmFileUtil PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
DataFormatsProvenance
FWCoreCatalog
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServices
IOPoolCommon
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


add_python_rules(IOPool/Common/bin/)
install( TARGETS edmFileUtil DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)

add_executable(edmCopyUtil
  EdmCopyUtil.cpp
)

set_target_properties(edmCopyUtil PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
target_include_directories(edmCopyUtil PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmCopyUtil PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(edmCopyUtil PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreCatalog
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreServices
IOPoolCommon
Python2::Python
Threads::Threads
UtilitiesStorageFactory
)


add_python_rules(IOPool/Common/bin/)
install( TARGETS edmCopyUtil DESTINATION ${CMAKE_INSTALL_BINDIR}  EXPORT fwcore::)


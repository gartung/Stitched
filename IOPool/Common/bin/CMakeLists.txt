add_executable(edmProvDump
  EdmProvDump.cc
)

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


install( TARGETS edmProvDump DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::edmProvDump)

add_executable(edmFileUtil
  CollUtil.cc
  EdmFileUtil.cpp
)

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
Python::python
RIO
Thread
Threads::Threads
Tree
)


install( TARGETS edmFileUtil DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::edmFileUtil)

add_executable(edmCopyUtil
  EdmCopyUtil.cpp
)

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
Python::python
Threads::Threads
UtilitiesStorageFactory
)


install( TARGETS edmCopyUtil DESTINATION ${CMAKE_BIN_INSTALLDIR}  EXPORT cmssw::edmCopyUtil)


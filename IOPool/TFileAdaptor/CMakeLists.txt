if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(IOPoolTFileAdaptor SHARED 
  src/ReadRepacker.cc
  src/TFileAdaptor.cc
  src/TStorageFactoryFile.cc
  src/TStorageFactorySystem.cc
)

target_include_directories(IOPoolTFileAdaptor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolTFileAdaptor PUBLIC
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

target_link_libraries(IOPoolTFileAdaptor PUBLIC
Core
FWCoreCatalog
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
MathCore
Net
RIO
Thread
Tree
UtilitiesStorageFactory
)


install( TARGETS IOPoolTFileAdaptor DESTINATION  lib  EXPORT cmssw::IOPoolTFileAdaptor)

include_directories(
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

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(IOPoolTFileAdaptor src/classes.h src/classes_def.xml)

add_dependencies(IOPoolTFileAdaptor IOPoolTFileAdaptor-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptorDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptor.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


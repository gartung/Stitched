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
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
add_compile_options("-D_FILE_OFFSET_BITS=64")
target_link_libraries(IOPoolTFileAdaptor PUBLIC
  FWCoreCatalog
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreServiceRegistry
  ROOT::Core
  UtilitiesStorageFactory
)

install( TARGETS IOPoolTFileAdaptor DESTINATION  lib  EXPORT stitched::IOPoolTFileAdaptor)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${Boost_INCLUDE_DIR}/python)
include_directories(${MD5_INCLUDE_DIR})
include_directories(${OPENSSL_INCLUDE_DIR})
include_directories(${Python2_INCLUDE_DIRS})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
include_directories(${XERCESC_INCLUDE_DIR})
reflex_generate_dictionary(IOPoolTFileAdaptor src/classes.h src/classes_def.xml ROOTMAPLIB IOPoolTFileAdaptorDict)
add_library(IOPoolTFileAdaptorDict SHARED IOPoolTFileAdaptorDict.cpp)
add_dependencies(IOPoolTFileAdaptor IOPoolTFileAdaptorGen)
install( TARGETS IOPoolTFileAdaptorDict DESTINATION lib EXPORT stitched::IOPoolTFileAdaptorDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptorDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptor.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

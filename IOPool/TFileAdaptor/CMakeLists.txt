if(${BUILDTEST})
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
FWCoreCatalog
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
UtilitiesStorageFactory
)


install( TARGETS IOPoolTFileAdaptor DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::IOPoolTFileAdaptor)

include_directories(${CMAKE_SOURCE_DIR}
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

reflex_build_dictionary(IOPoolTFileAdaptor src/classes.h src/classes_def.xml)

add_library(IOPoolTFileAdaptorDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptor.cxx)

set_property(TARGET IOPoolTFileAdaptorDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(IOPoolTFileAdaptorDictObj IOPoolTFileAdaptor-dictgen)

add_dependencies(IOPoolTFileAdaptor IOPoolTFileAdaptorDictObj)

target_link_libraries(IOPoolTFileAdaptor PUBLIC $<TARGET_OBJECTS:IOPoolTFileAdaptorDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptor_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/IOPoolTFileAdaptorDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


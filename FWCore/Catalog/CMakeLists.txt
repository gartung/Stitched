if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreCatalog SHARED 
  src/FileLocator.cc
  src/InputFileCatalog.cc
)

target_include_directories(FWCoreCatalog PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCoreCatalog PUBLIC
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
target_link_libraries(FWCoreCatalog PUBLIC
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${XERCESC_LIBRARIES}
  FWCoreConcurrency
  FWCoreServiceRegistry
  FWCoreUtilities
  dl
)

install( TARGETS FWCoreCatalog DESTINATION  lib  EXPORT stitched::FWCoreCatalog)


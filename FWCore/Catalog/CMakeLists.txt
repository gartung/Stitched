add_subdirectory(test)
add_library(FWCoreCatalog SHARED ${FWCoreCatalog_EXTRA_SOURCES}
  src/FileLocator.cc
  src/InputFileCatalog.cc
)

set_target_properties(FWCoreCatalog PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCoreCatalog PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreCatalog PUBLIC
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

target_link_libraries(FWCoreCatalog PUBLIC
${XERCESC_LIBRARIES}
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreConcurrency
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_python_rules(FWCore/Catalog)
install( TARGETS FWCoreCatalog DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


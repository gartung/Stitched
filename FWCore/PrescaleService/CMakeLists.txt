add_subdirectory(plugins)
add_library(FWCorePrescaleService SHARED 
  src/PrescaleService.cc
)

target_include_directories(FWCorePrescaleService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCorePrescaleService PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCorePrescaleService PUBLIC
DataFormatsProvenance
FWCoreMessageLogger
FWCoreParameterSet
FWCoreUtilities
)


install( TARGETS FWCorePrescaleService DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::FWCorePrescaleService)


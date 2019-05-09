add_subdirectory(bin)
add_library(IOPoolCommon SHARED 
  src/RootServiceChecker.cc
)

target_include_directories(IOPoolCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolCommon PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(IOPoolCommon PUBLIC
FWCoreServiceRegistry
FWCoreUtilities
)


install( TARGETS IOPoolCommon DESTINATION  lib  EXPORT cmssw::IOPoolCommon)


add_library(IOPoolProvenance SHARED 
  src/CommonProvenanceFiller.cc
)

target_include_directories(IOPoolProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolProvenance PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(IOPoolProvenance PUBLIC
DataFormatsProvenance
FWCoreParameterSet
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


install( TARGETS IOPoolProvenance DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::IOPoolProvenance)


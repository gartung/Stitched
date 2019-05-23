add_library(IOPoolProvenance SHARED ${IOPoolProvenance_EXTRA_SOURCES}
  src/CommonProvenanceFiller.cc
)

set_target_properties(IOPoolProvenance PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(IOPool/Provenance)
install( TARGETS IOPoolProvenance DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


add_subdirectory(test)
add_library(FWCorePyDevParameterSet SHARED ${FWCorePyDevParameterSet_EXTRA_SOURCES}
  src/MakePyBind11ParameterSets.cc
  src/PyBind11ProcessDesc.cc
  src/PyBind11Wrapper.cc
  src/Python11ParameterSet.cc
  src/initializePyBind11Module.cc
)

set_target_properties(FWCorePyDevParameterSet PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
target_include_directories(FWCorePyDevParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCorePyDevParameterSet PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIRS}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(FWCorePyDevParameterSet PUBLIC
DataFormatsProvenance
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/PyDevParameterSet)
install( TARGETS FWCorePyDevParameterSet DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


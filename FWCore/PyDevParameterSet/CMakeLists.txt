if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCorePyDevParameterSet SHARED 
  src/MakePyBind11ParameterSets.cc
  src/PyBind11ProcessDesc.cc
  src/PyBind11Wrapper.cc
  src/Python11ParameterSet.cc
  src/initializePyBind11Module.cc
)

target_include_directories(FWCorePyDevParameterSet PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(FWCorePyDevParameterSet PUBLIC
 ${Boost_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}/pybind11
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(FWCorePyDevParameterSet PUBLIC
  ${PYBIND11_LIBRARY}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  FWCoreParameterSet
  FWCoreUtilities
)

install( TARGETS FWCorePyDevParameterSet DESTINATION  lib  EXPORT stitched::FWCorePyDevParameterSet)


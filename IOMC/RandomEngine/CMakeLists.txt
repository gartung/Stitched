if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(IOMCRandomEngine SHARED 
  src/RandomEngineStateProducer.cc
  src/RandomFilter.cc
  src/RandomNumberGeneratorService.cc
  src/TRandomAdaptor.cc
)

target_include_directories(IOMCRandomEngine PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${CLHEP_INCLUDE_DIR}
 ${GSL_INCLUDE_DIR}
 ${MD5_INCLUDE_DIR}
 ${PYTHON_INCLUDE_DIR}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(IOMCRandomEngine PUBLIC
  ${CLHEP_MAIN_LIBRARY}
  Core
  DataFormatsProvenance
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  GenVector
  MathCore
  MathMore
  Net
  RIO
  SimDataFormatsRandomEngine
  Thread
  Tree
  gsl
)

install( TARGETS IOMCRandomEngine DESTINATION  lib  EXPORT stitched::IOMCRandomEngine)


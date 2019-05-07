add_library(IOMCRandomEngineTestRandomNumberServiceGlobal SHARED 
  TestRandomNumberServiceGlobal.cc
)

target_include_directories(IOMCRandomEngineTestRandomNumberServiceGlobal PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(IOMCRandomEngineTestRandomNumberServiceGlobal PUBLIC
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
target_link_libraries(IOMCRandomEngineTestRandomNumberServiceGlobal PUBLIC
  ${CLHEP_MAIN_LIBRARY}
  DataFormatsProvenance
  FWCoreFramework
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  IOMCRandomEngine
)

add_executable(TestIOMCRandomEngineService
  TestIOMCRandomEngineService.cpp
)

target_include_directories(TestIOMCRandomEngineService PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(TestIOMCRandomEngineService PUBLIC
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
target_link_libraries(TestIOMCRandomEngineService PUBLIC
  ${CLHEP_MAIN_LIBRARY}
  DataFormatsProvenance
  FWCoreFramework
  FWCoreParameterSet
  FWCoreServiceRegistry
  FWCoreUtilities
  IOMCRandomEngine
)

add_test(NAME TestIOMCRandomEngineService COMMAND TestIOMCRandomEngineService)

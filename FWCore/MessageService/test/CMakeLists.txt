add_library(UnitTestClient_A SHARED ${UnitTestClient_A_EXTRA_SOURCES}
  UnitTestClient_A.cc
)

set_target_properties(UnitTestClient_A PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_A PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_A PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_A PUBLIC
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

target_link_libraries(UnitTestClient_A PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_Ad SHARED ${UnitTestClient_Ad_EXTRA_SOURCES}
  UnitTestClient_Ad.cc
)

set_target_properties(UnitTestClient_Ad PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_Ad PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_Ad PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Ad PUBLIC
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

target_link_libraries(UnitTestClient_Ad PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_B SHARED ${UnitTestClient_B_EXTRA_SOURCES}
  UnitTestClient_B.cc
)

set_target_properties(UnitTestClient_B PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_B PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_B PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_B PUBLIC
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

target_link_libraries(UnitTestClient_B PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_C SHARED ${UnitTestClient_C_EXTRA_SOURCES}
  UnitTestClient_C.cc
)

set_target_properties(UnitTestClient_C PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_C PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_C PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_C PUBLIC
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

target_link_libraries(UnitTestClient_C PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_D SHARED ${UnitTestClient_D_EXTRA_SOURCES}
  UnitTestClient_D.cc
)

set_target_properties(UnitTestClient_D PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_D PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_D PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_D PUBLIC
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

target_link_libraries(UnitTestClient_D PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_E SHARED ${UnitTestClient_E_EXTRA_SOURCES}
  UnitTestClient_E.cc
)

set_target_properties(UnitTestClient_E PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_E PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_E PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_E PUBLIC
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

target_link_libraries(UnitTestClient_E PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_F SHARED ${UnitTestClient_F_EXTRA_SOURCES}
  UnitTestClient_F.cc
)

set_target_properties(UnitTestClient_F PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_F PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_F PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_F PUBLIC
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

target_link_libraries(UnitTestClient_F PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_G SHARED ${UnitTestClient_G_EXTRA_SOURCES}
  UnitTestClient_G.cc
)

set_target_properties(UnitTestClient_G PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_G PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_G PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_G PUBLIC
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

target_link_libraries(UnitTestClient_G PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_H SHARED ${UnitTestClient_H_EXTRA_SOURCES}
  UnitTestClient_H.cc
)

set_target_properties(UnitTestClient_H PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_H PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_H PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_H PUBLIC
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

target_link_libraries(UnitTestClient_H PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_Hd SHARED ${UnitTestClient_Hd_EXTRA_SOURCES}
  UnitTestClient_Hd.cc
)

set_target_properties(UnitTestClient_Hd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_Hd PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_Hd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Hd PUBLIC
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

target_link_libraries(UnitTestClient_Hd PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_I SHARED ${UnitTestClient_I_EXTRA_SOURCES}
  UnitTestClient_I.cc
)

set_target_properties(UnitTestClient_I PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_I PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_I PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_I PUBLIC
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

target_link_libraries(UnitTestClient_I PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_J SHARED ${UnitTestClient_J_EXTRA_SOURCES}
  UnitTestClient_J.cc
)

set_target_properties(UnitTestClient_J PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_J PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_J PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_J PUBLIC
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

target_link_libraries(UnitTestClient_J PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_K SHARED ${UnitTestClient_K_EXTRA_SOURCES}
  UnitTestClient_K.cc
)

set_target_properties(UnitTestClient_K PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_K PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_K PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_K PUBLIC
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

target_link_libraries(UnitTestClient_K PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_M SHARED ${UnitTestClient_M_EXTRA_SOURCES}
  UnitTestClient_M.cc
)

set_target_properties(UnitTestClient_M PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_M PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_M PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_M PUBLIC
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

target_link_libraries(UnitTestClient_M PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_N SHARED ${UnitTestClient_N_EXTRA_SOURCES}
  UnitTestClient_N.cc
)

set_target_properties(UnitTestClient_N PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_N PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_N PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_N PUBLIC
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

target_link_libraries(UnitTestClient_N PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_Nd SHARED ${UnitTestClient_Nd_EXTRA_SOURCES}
  UnitTestClient_Nd.cc
)

set_target_properties(UnitTestClient_Nd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_Nd PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_Nd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Nd PUBLIC
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

target_link_libraries(UnitTestClient_Nd PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_O SHARED ${UnitTestClient_O_EXTRA_SOURCES}
  UnitTestClient_O.cc
)

set_target_properties(UnitTestClient_O PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_O PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_O PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_O PUBLIC
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

target_link_libraries(UnitTestClient_O PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_P SHARED ${UnitTestClient_P_EXTRA_SOURCES}
  UnitTestClient_P.cc
)

set_target_properties(UnitTestClient_P PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_P PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_P PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_P PUBLIC
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

target_link_libraries(UnitTestClient_P PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_Q SHARED ${UnitTestClient_Q_EXTRA_SOURCES}
  UnitTestClient_Q.cc
)

set_target_properties(UnitTestClient_Q PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_Q PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_Q PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Q PUBLIC
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

target_link_libraries(UnitTestClient_Q PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_R SHARED ${UnitTestClient_R_EXTRA_SOURCES}
  UnitTestClient_R.cc
)

set_target_properties(UnitTestClient_R PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_R PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_R PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_R PUBLIC
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

target_link_libraries(UnitTestClient_R PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_S SHARED ${UnitTestClient_S_EXTRA_SOURCES}
  UnitTestClient_S.cc
)

set_target_properties(UnitTestClient_S PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_S PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_S PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_S PUBLIC
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

target_link_libraries(UnitTestClient_S PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_T SHARED ${UnitTestClient_T_EXTRA_SOURCES}
  UnitTestClient_T.cc
)

set_target_properties(UnitTestClient_T PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_T PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_T PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_T PUBLIC
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

target_link_libraries(UnitTestClient_T PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_V SHARED ${UnitTestClient_V_EXTRA_SOURCES}
  UnitTestClient_V.cc
)

set_target_properties(UnitTestClient_V PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_V PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_V PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_V PUBLIC
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

target_link_libraries(UnitTestClient_V PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_Vd SHARED ${UnitTestClient_Vd_EXTRA_SOURCES}
  UnitTestClient_Vd.cc
)

set_target_properties(UnitTestClient_Vd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_Vd PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_Vd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Vd PUBLIC
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

target_link_libraries(UnitTestClient_Vd PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_W SHARED ${UnitTestClient_W_EXTRA_SOURCES}
  UnitTestClient_W.cc
)

set_target_properties(UnitTestClient_W PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_W PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_W PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_W PUBLIC
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

target_link_libraries(UnitTestClient_W PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_X SHARED ${UnitTestClient_X_EXTRA_SOURCES}
  UnitTestClient_X.cc
)

set_target_properties(UnitTestClient_X PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_X PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_X PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_X PUBLIC
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

target_link_libraries(UnitTestClient_X PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(ProblemTestClient_t1 SHARED ${ProblemTestClient_t1_EXTRA_SOURCES}
  ProblemTestClient_t1.cc
)

set_target_properties(ProblemTestClient_t1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(ProblemTestClient_t1 PROPERTIES PREFIX "plugin")
target_include_directories(ProblemTestClient_t1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProblemTestClient_t1 PUBLIC
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

target_link_libraries(ProblemTestClient_t1 PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(MessageLoggerClient SHARED ${MessageLoggerClient_EXTRA_SOURCES}
  MessageLoggerClient.cc
)

set_target_properties(MessageLoggerClient PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(MessageLoggerClient PROPERTIES PREFIX "plugin")
target_include_directories(MessageLoggerClient PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MessageLoggerClient PUBLIC
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

target_link_libraries(MessageLoggerClient PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(makeSignals SHARED ${makeSignals_EXTRA_SOURCES}
  makeSignals.cc
)

set_target_properties(makeSignals PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(makeSignals PROPERTIES PREFIX "plugin")
target_include_directories(makeSignals PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(makeSignals PUBLIC
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

target_link_libraries(makeSignals PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_library(MemoryTestClient_A SHARED ${MemoryTestClient_A_EXTRA_SOURCES}
  MemoryTestClient_A.cc
)

set_target_properties(MemoryTestClient_A PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(MemoryTestClient_A PROPERTIES PREFIX "plugin")
target_include_directories(MemoryTestClient_A PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MemoryTestClient_A PUBLIC
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

target_link_libraries(MemoryTestClient_A PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(UnitTestClient_SLumi SHARED ${UnitTestClient_SLumi_EXTRA_SOURCES}
  UnitTestClient_SLumi.cc
)

set_target_properties(UnitTestClient_SLumi PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(UnitTestClient_SLumi PROPERTIES PREFIX "plugin")
target_include_directories(UnitTestClient_SLumi PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_SLumi PUBLIC
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

target_link_libraries(UnitTestClient_SLumi PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(PSetTestClient_A SHARED ${PSetTestClient_A_EXTRA_SOURCES}
  PSetTestClient_A.cc
)

set_target_properties(PSetTestClient_A PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(PSetTestClient_A PROPERTIES PREFIX "plugin")
target_include_directories(PSetTestClient_A PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(PSetTestClient_A PUBLIC
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

target_link_libraries(PSetTestClient_A PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_library(MLexampleModule_1 SHARED ${MLexampleModule_1_EXTRA_SOURCES}
  MLexampleModule_1.cc
)

set_target_properties(MLexampleModule_1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
set_target_properties(MLexampleModule_1 PROPERTIES PREFIX "plugin")
target_include_directories(MLexampleModule_1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MLexampleModule_1 PUBLIC
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

target_link_libraries(MLexampleModule_1 PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_executable(standAloneWithMessageLogger
  standAloneTest.cpp
)

add_test(NAME standAloneWithMessageLogger_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/standAlone_1.sh)
set_tests_properties(standAloneWithMessageLogger_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(standAloneWithMessageLogger_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(standAloneWithMessageLogger PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(standAloneWithMessageLogger PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(standAloneWithMessageLogger PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageLogger
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(trivial_main
  trivial_main.cpp
)

add_test(NAME trivial_main_CTest COMMAND trivial_main)

set_tests_properties(trivial_main_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(trivial_main_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(trivial_main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(trivial_main PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(trivial_main PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(trivial_main PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageLogger
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(testLoggerInCmsRun
  testLoggerInCmsRun.cpp
)

add_test(NAME testLoggerInCmsRun_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/testLoggerInCmsRun.sh)
set_tests_properties(testLoggerInCmsRun_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(testLoggerInCmsRun_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(testLoggerInCmsRun PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testLoggerInCmsRun PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(testLoggerInCmsRun PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_d
  unitTestsGroup_d.cpp
)

add_test(NAME unitTestsGroup_d_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u1d.sh)
set_tests_properties(unitTestsGroup_d_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_d_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u13d.sh)
set_tests_properties(unitTestsGroup_d_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_d_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u16.sh)
set_tests_properties(unitTestsGroup_d_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_d_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u16t.sh)
set_tests_properties(unitTestsGroup_d_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_d_6_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u19d.sh)
set_tests_properties(unitTestsGroup_d_6_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_6_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_d_7_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u33d.sh)
set_tests_properties(unitTestsGroup_d_7_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_7_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_d_8_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u33td.sh)
set_tests_properties(unitTestsGroup_d_8_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_d_8_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_d PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_d PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_d PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_1
  unitTestsGroup_1.cpp
)

add_test(NAME unitTestsGroup_1_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u1.sh)
set_tests_properties(unitTestsGroup_1_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_1_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u1t.sh)
set_tests_properties(unitTestsGroup_1_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_1_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u2.sh)
set_tests_properties(unitTestsGroup_1_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_1_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u2t.sh)
set_tests_properties(unitTestsGroup_1_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_1_6_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u6.sh)
set_tests_properties(unitTestsGroup_1_6_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_6_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_1_7_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u6t.sh)
set_tests_properties(unitTestsGroup_1_7_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_7_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_1_8_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u21.sh)
set_tests_properties(unitTestsGroup_1_8_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_1_8_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_1 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_1 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsStatistics
  unitTestsStatistics.cpp
)

add_test(NAME unitTestsStatistics_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u3.sh)
set_tests_properties(unitTestsStatistics_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsStatistics_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsStatistics_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u4.sh)
set_tests_properties(unitTestsStatistics_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsStatistics_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsStatistics_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u5.sh)
set_tests_properties(unitTestsStatistics_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsStatistics_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsStatistics_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u5t.sh)
set_tests_properties(unitTestsStatistics_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsStatistics_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsStatistics_6_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u28.sh)
set_tests_properties(unitTestsStatistics_6_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsStatistics_6_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsStatistics PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsStatistics PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsStatistics PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsLimits
  unitTestsLimits.cpp
)

add_test(NAME unitTestsLimits_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u7.sh)
set_tests_properties(unitTestsLimits_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsLimits_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsLimits_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u8.sh)
set_tests_properties(unitTestsLimits_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsLimits_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsLimits_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u8t.sh)
set_tests_properties(unitTestsLimits_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsLimits_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsLimits_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u11.sh)
set_tests_properties(unitTestsLimits_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsLimits_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsLimits_6_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u11t.sh)
set_tests_properties(unitTestsLimits_6_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsLimits_6_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsLimits_7_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u36.sh)
set_tests_properties(unitTestsLimits_7_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsLimits_7_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsLimits PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsLimits PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsLimits PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_2
  unitTestsGroup_2.cpp
)

add_test(NAME unitTestsGroup_2_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u9.sh)
set_tests_properties(unitTestsGroup_2_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_2_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u9t.sh)
set_tests_properties(unitTestsGroup_2_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_2_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u12.sh)
set_tests_properties(unitTestsGroup_2_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_2_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u13.sh)
set_tests_properties(unitTestsGroup_2_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_2_6_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u14.sh)
set_tests_properties(unitTestsGroup_2_6_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_6_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_2_7_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u14t.sh)
set_tests_properties(unitTestsGroup_2_7_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_7_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_2_8_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u15.sh)
set_tests_properties(unitTestsGroup_2_8_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_2_8_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_2 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_3
  unitTestsGroup_3.cpp
)

add_test(NAME unitTestsGroup_3_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u10.sh)
set_tests_properties(unitTestsGroup_3_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_3_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_3_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u17.sh)
set_tests_properties(unitTestsGroup_3_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_3_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_3_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u34.sh)
set_tests_properties(unitTestsGroup_3_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_3_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_3_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u35.sh)
set_tests_properties(unitTestsGroup_3_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_3_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_3 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_3 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_3 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_4
  unitTestsGroup_4.cpp
)

add_test(NAME unitTestsGroup_4_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u18.sh)
set_tests_properties(unitTestsGroup_4_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_4_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_4_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u19.sh)
set_tests_properties(unitTestsGroup_4_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_4_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_4_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u20.sh)
set_tests_properties(unitTestsGroup_4_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_4_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_4_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u20t.sh)
set_tests_properties(unitTestsGroup_4_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_4_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_4 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_4 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_4 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_5
  unitTestsGroup_5.cpp
)

add_test(NAME unitTestsGroup_5_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u22.sh)
set_tests_properties(unitTestsGroup_5_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_5_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_5_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u22t.sh)
set_tests_properties(unitTestsGroup_5_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_5_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_5_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u24.sh)
set_tests_properties(unitTestsGroup_5_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_5_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_5_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u25.sh)
set_tests_properties(unitTestsGroup_5_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_5_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_5 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_5 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_5 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(unitTestsGroup_6
  unitTestsGroup_6.cpp
)

add_test(NAME unitTestsGroup_6_2_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u23.sh)
set_tests_properties(unitTestsGroup_6_2_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_2_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_3_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u23t.sh)
set_tests_properties(unitTestsGroup_6_3_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_3_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_4_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u27.sh)
set_tests_properties(unitTestsGroup_6_4_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_4_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_5_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u27t.sh)
set_tests_properties(unitTestsGroup_6_5_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_5_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_6_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u30.sh)
set_tests_properties(unitTestsGroup_6_6_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_6_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_7_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u30t.sh)
set_tests_properties(unitTestsGroup_6_7_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_7_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_8_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u31.sh)
set_tests_properties(unitTestsGroup_6_8_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_8_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_9_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u31t.sh)
set_tests_properties(unitTestsGroup_6_9_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_9_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_10_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u33.sh)
set_tests_properties(unitTestsGroup_6_10_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_10_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

add_test(NAME unitTestsGroup_6_11_CTest COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/u33t.sh)
set_tests_properties(unitTestsGroup_6_11_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test)
set_tests_properties(unitTestsGroup_6_11_CTest
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

target_include_directories(unitTestsGroup_6 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_6 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(unitTestsGroup_6 PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreMessageService
FWCoreUtilities
Python2::Python
Threads::Threads
)


add_executable(makeJobReport
  makeJobReport.cpp
)

add_test(NAME makeJobReport_CTest COMMAND makeJobReport)

set_tests_properties(makeJobReport_CTest PROPERTIES WORKING_DIR ${CMAKE_BINARY_DIR}/test )
set_tests_properties(makeJobReport_CTest 
PROPERTIES ENVIRONMENT "CMSSW_SEARCH_PATH=${CMAKE_BINARY_DIR}/lib:${CMAKE_BINARY_DIR}/test;PYTHONPATH=${CMAKE_BINARY_DIR}/python;PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/bin:$ENV{PATH};LD_LIBRARY_PATH=${CMAKE_BINARY_DIR}/test:${CMAKE_BINARY_DIR}/lib:$ENV{LD_LIBRARY_PATH};LOCAL_TMP_DIR=${CMAKE_BINARY_DIR}/test;LOCAL_TEST_DIR=${CMAKE_CURRENT_SOURCE_DIR}/")

set_target_properties(makeJobReport PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)
target_include_directories(makeJobReport PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(makeJobReport PUBLIC
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

target_link_libraries(makeJobReport PUBLIC
Boost::filesystem
Boost::iostreams
Boost::program_options
Boost::python27
Boost::regex
Boost::serialization
Boost::system
Boost::thread
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Python2::Python
Threads::Threads
)



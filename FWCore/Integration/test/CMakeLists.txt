add_executable(TestFWCoreIntegrationStandalone
  standalone_t.cppunit.cc
  testRunner.cpp
)

target_include_directories(TestFWCoreIntegrationStandalone PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreIntegrationStandalone PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CPPUNIT_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(TestFWCoreIntegrationStandalone PUBLIC
${CPPUNIT_LIBRARY}
FWCoreFramework
FWCoreIntegration
FWCoreParameterSetReader
FWCorePluginManager
FWCoreUtilities
)


add_test(TestFWCoreIntegrationStandalone TestFWCoreIntegrationStandalone)

add_executable(TestIntegrationEventHistory
  TestIntegration.cpp
)

target_include_directories(TestIntegrationEventHistory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationEventHistory PUBLIC
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

target_link_libraries(TestIntegrationEventHistory PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationEventHistory TestIntegrationEventHistory)

add_executable(TestIntegrationRef
  TestIntegration.cpp
)

target_include_directories(TestIntegrationRef PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRef PUBLIC
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

target_link_libraries(TestIntegrationRef PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationRef TestIntegrationRef)

add_executable(TestIntegrationTransRef
  TestIntegration.cpp
)

target_include_directories(TestIntegrationTransRef PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationTransRef PUBLIC
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

target_link_libraries(TestIntegrationTransRef PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationTransRef TestIntegrationTransRef)

add_executable(TestIntegrationTableTest
  TestIntegration.cpp
)

target_include_directories(TestIntegrationTableTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationTableTest PUBLIC
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

target_link_libraries(TestIntegrationTableTest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationTableTest TestIntegrationTableTest)

add_executable(TestIntegrationProducedSource
  TestIntegration.cpp
)

target_include_directories(TestIntegrationProducedSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationProducedSource PUBLIC
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

target_link_libraries(TestIntegrationProducedSource PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationProducedSource TestIntegrationProducedSource)

add_executable(TestIntegrationExternalSource
  TestIntegration.cpp
)

target_include_directories(TestIntegrationExternalSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationExternalSource PUBLIC
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

target_link_libraries(TestIntegrationExternalSource PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationExternalSource TestIntegrationExternalSource)

add_executable(TestIntegrationEventSetup
  TestIntegration.cpp
)

target_include_directories(TestIntegrationEventSetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationEventSetup PUBLIC
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

target_link_libraries(TestIntegrationEventSetup PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationEventSetup TestIntegrationEventSetup)

add_executable(TestIntegrationHierarchyExample
  TestIntegration.cpp
)

target_include_directories(TestIntegrationHierarchyExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationHierarchyExample PUBLIC
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

target_link_libraries(TestIntegrationHierarchyExample PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationHierarchyExample TestIntegrationHierarchyExample)

add_executable(TestIntegrationServiceExample
  TestIntegration.cpp
)

target_include_directories(TestIntegrationServiceExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationServiceExample PUBLIC
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

target_link_libraries(TestIntegrationServiceExample PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationServiceExample TestIntegrationServiceExample)

add_executable(TestIntegrationView
  TestIntegration.cpp
)

target_include_directories(TestIntegrationView PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationView PUBLIC
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

target_link_libraries(TestIntegrationView PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationView TestIntegrationView)

add_executable(TestIntegrationSeriesOfProcesses
  TestIntegration.cpp
)

target_include_directories(TestIntegrationSeriesOfProcesses PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationSeriesOfProcesses PUBLIC
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

target_link_libraries(TestIntegrationSeriesOfProcesses PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationSeriesOfProcesses TestIntegrationSeriesOfProcesses)

add_executable(TestParentageWithStreamerIO
  TestIntegration.cpp
)

target_include_directories(TestParentageWithStreamerIO PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestParentageWithStreamerIO PUBLIC
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

target_link_libraries(TestParentageWithStreamerIO PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestParentageWithStreamerIO TestParentageWithStreamerIO)

add_executable(TestIntegrationThinningTests
  TestIntegration.cpp
)

target_include_directories(TestIntegrationThinningTests PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationThinningTests PUBLIC
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

target_link_libraries(TestIntegrationThinningTests PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationThinningTests TestIntegrationThinningTests)

add_executable(TestIntegrationGetBy
  TestIntegration.cpp
)

target_include_directories(TestIntegrationGetBy PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationGetBy PUBLIC
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

target_link_libraries(TestIntegrationGetBy PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationGetBy TestIntegrationGetBy)

add_executable(TestIntegrationOutput
  TestIntegration.cpp
)

target_include_directories(TestIntegrationOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationOutput PUBLIC
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

target_link_libraries(TestIntegrationOutput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationOutput TestIntegrationOutput)

add_executable(TestIntegrationDropOnInput
  TestIntegration.cpp
)

target_include_directories(TestIntegrationDropOnInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationDropOnInput PUBLIC
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

target_link_libraries(TestIntegrationDropOnInput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationDropOnInput TestIntegrationDropOnInput)

add_executable(TestSubProcess
  TestIntegration.cpp
)

target_include_directories(TestSubProcess PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSubProcess PUBLIC
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

target_link_libraries(TestSubProcess PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestSubProcess TestSubProcess)

add_executable(TestIntegrationUnscheduledFailOnOutput
  TestIntegration.cpp
)

target_include_directories(TestIntegrationUnscheduledFailOnOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationUnscheduledFailOnOutput PUBLIC
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

target_link_libraries(TestIntegrationUnscheduledFailOnOutput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationUnscheduledFailOnOutput TestIntegrationUnscheduledFailOnOutput)

add_executable(TestIntegrationGetProductAtEnd
  TestIntegration.cpp
)

target_include_directories(TestIntegrationGetProductAtEnd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationGetProductAtEnd PUBLIC
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

target_link_libraries(TestIntegrationGetProductAtEnd PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationGetProductAtEnd TestIntegrationGetProductAtEnd)

add_executable(TestIntegrationParentless
  TestIntegration.cpp
)

target_include_directories(TestIntegrationParentless PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationParentless PUBLIC
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

target_link_libraries(TestIntegrationParentless PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationParentless TestIntegrationParentless)

add_executable(TestIntegrationWaitingThread
  TestIntegration.cpp
)

target_include_directories(TestIntegrationWaitingThread PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationWaitingThread PUBLIC
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

target_link_libraries(TestIntegrationWaitingThread PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationWaitingThread TestIntegrationWaitingThread)

add_executable(TestIntegrationRunMerge
  TestIntegration.cpp
)

target_include_directories(TestIntegrationRunMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRunMerge PUBLIC
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

target_link_libraries(TestIntegrationRunMerge PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationRunMerge TestIntegrationRunMerge)

add_executable(TestIntegrationRunMerge2
  TestIntegration.cpp
)

target_include_directories(TestIntegrationRunMerge2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRunMerge2 PUBLIC
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

target_link_libraries(TestIntegrationRunMerge2 PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationRunMerge2 TestIntegrationRunMerge2)

add_executable(TestIntegrationRefMerge
  TestIntegration.cpp
)

target_include_directories(TestIntegrationRefMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRefMerge PUBLIC
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

target_link_libraries(TestIntegrationRefMerge PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationRefMerge TestIntegrationRefMerge)

add_executable(TestIntegrationRefAlias
  TestIntegration.cpp
)

target_include_directories(TestIntegrationRefAlias PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRefAlias PUBLIC
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

target_link_libraries(TestIntegrationRefAlias PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationRefAlias TestIntegrationRefAlias)

add_executable(TestIntegrationParameterSet
  TestIntegration.cpp
)

target_include_directories(TestIntegrationParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationParameterSet PUBLIC
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

target_link_libraries(TestIntegrationParameterSet PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationParameterSet TestIntegrationParameterSet)

add_executable(TestIntegrationSwitchProducer
  TestIntegration.cpp
)

target_include_directories(TestIntegrationSwitchProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationSwitchProducer PUBLIC
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

target_link_libraries(TestIntegrationSwitchProducer PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegrationSwitchProducer TestIntegrationSwitchProducer)

add_executable(TestIntegration_TestEDAlias
  TestIntegration.cpp
)

target_include_directories(TestIntegration_TestEDAlias PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegration_TestEDAlias PUBLIC
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

target_link_libraries(TestIntegration_TestEDAlias PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(TestIntegration_TestEDAlias TestIntegration_TestEDAlias)

add_executable(CatchStdExceptiontest
  TestIntegration.cpp
)

target_include_directories(CatchStdExceptiontest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CatchStdExceptiontest PUBLIC
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

target_link_libraries(CatchStdExceptiontest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(CatchStdExceptiontest CatchStdExceptiontest)

add_executable(CatchCmsExceptiontest
  TestIntegration.cpp
)

target_include_directories(CatchCmsExceptiontest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CatchCmsExceptiontest PUBLIC
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

target_link_libraries(CatchCmsExceptiontest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_test(CatchCmsExceptiontest CatchCmsExceptiontest)

add_executable(ProcessConfiguration_t
  ProcessConfiguration_t.cpp
)

target_include_directories(ProcessConfiguration_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessConfiguration_t PUBLIC
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

target_link_libraries(ProcessConfiguration_t PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
)


add_test(ProcessConfiguration_t ProcessConfiguration_t)

add_executable(ProcessHistory_t
  ProcessHistory_t.cpp
)

target_include_directories(ProcessHistory_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessHistory_t PUBLIC
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

target_link_libraries(ProcessHistory_t PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
)


add_test(ProcessHistory_t ProcessHistory_t)

add_executable(SwitchProducer_t
  SwitchProducer_t.cpp
)

target_include_directories(SwitchProducer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SwitchProducer_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(SwitchProducer_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
)


add_test(SwitchProducer_t SwitchProducer_t)

add_executable(EDAlias_t
  EDAlias_t.cpp
)

target_include_directories(EDAlias_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EDAlias_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${MD5_INCLUDE_DIR}
${Python2_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XERCESC_INCLUDE_DIR}
)

target_link_libraries(EDAlias_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
)


add_test(EDAlias_t EDAlias_t)

add_library(TestPSetAnalyzer SHARED 
  TestPSetAnalyzer.cc
)

target_include_directories(TestPSetAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPSetAnalyzer PUBLIC
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

target_link_libraries(TestPSetAnalyzer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(SomeTestModules SHARED 
  AssociationMapAnalyzer.cc
  AssociationMapProducer.cc
  GadgetRcd.cc
  MissingDictionaryTestProducer.cc
  PluginUsingProducer.cc
  SwitchProducerProvenanceAnalyzer.cc
  ThingAlgorithm.cc
  ThingProducer.cc
  ThinningTestAnalyzer.cc
  ThinningThingProducer.cc
  TrackOfThingsProducer.cc
  WhatsIt.cc
)

target_include_directories(SomeTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SomeTestModules PUBLIC
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

target_link_libraries(SomeTestModules PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreIntegrationWaitingServer
)


add_library(TestProducerWithPSetDesc SHARED 
  ProducerWithPSetDesc.cc
)

target_include_directories(TestProducerWithPSetDesc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestProducerWithPSetDesc PUBLIC
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

target_link_libraries(TestProducerWithPSetDesc PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
)


add_library(TestHistProducer SHARED 
  HistProducer.cc
)

target_include_directories(TestHistProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHistProducer PUBLIC
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

target_link_libraries(TestHistProducer PUBLIC
FWCoreFramework
FWCoreIntegration
ROOT::Core
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::Physics
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_library(TestHistoryKeeping SHARED 
  TestHistoryKeeping.cc
)

target_include_directories(TestHistoryKeeping PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHistoryKeeping PUBLIC
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

target_link_libraries(TestHistoryKeeping PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(ThrowingSource SHARED 
  ThrowingSource.cc
)

target_include_directories(ThrowingSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThrowingSource PUBLIC
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

target_link_libraries(ThrowingSource PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSources
)


add_library(TestThingSource SHARED 
  ThingAlgorithm.cc
  ThingSource.cc
)

target_include_directories(TestThingSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingSource PUBLIC
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

target_link_libraries(TestThingSource PUBLIC
FWCoreIntegration
FWCoreSources
)


add_library(TestThingExtSource SHARED 
  ThingAlgorithm.cc
  ThingExtSource.cc
)

target_include_directories(TestThingExtSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingExtSource PUBLIC
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

target_link_libraries(TestThingExtSource PUBLIC
FWCoreIntegration
FWCoreSources
)


add_library(TestOtherThingProducer SHARED 
  OtherThingAlgorithm.cc
  OtherThingProducer.cc
)

target_include_directories(TestOtherThingProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOtherThingProducer PUBLIC
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

target_link_libraries(TestOtherThingProducer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
)


add_library(TestThingWithMergeProducer SHARED 
  ThingWithMergeProducer.cc
)

target_include_directories(TestThingWithMergeProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingWithMergeProducer PUBLIC
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

target_link_libraries(TestThingWithMergeProducer PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_library(FWCoreIntegrationPathAnalyzer SHARED 
  PathAnalyzer.cc
)

target_include_directories(FWCoreIntegrationPathAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationPathAnalyzer PUBLIC
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

target_link_libraries(FWCoreIntegrationPathAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(FWCoreIntegrationValueExample SHARED 
  ValueExample.cc
)

target_include_directories(FWCoreIntegrationValueExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationValueExample PUBLIC
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

target_link_libraries(FWCoreIntegrationValueExample PUBLIC
FWCoreIntegration
FWCoreParameterSet
)


add_library(FWCoreIntegrationValueExamplePlugin SHARED 
  ValueExamplePlugin.cc
)

target_include_directories(FWCoreIntegrationValueExamplePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationValueExamplePlugin PUBLIC
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

target_link_libraries(FWCoreIntegrationValueExamplePlugin PUBLIC
FWCoreIntegration
FWCoreIntegrationValueExample
FWCoreParameterSet
FWCoreServiceRegistry
)


add_library(UseValueExampleAnalyzer SHARED 
  UseValueExampleAnalyzer.cc
)

target_include_directories(UseValueExampleAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UseValueExampleAnalyzer PUBLIC
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

target_link_libraries(UseValueExampleAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreIntegrationValueExample
FWCoreParameterSet
)


add_library(FWCoreIntegrationWaitingServer SHARED 
  WaitingServer.cc
)

target_include_directories(FWCoreIntegrationWaitingServer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingServer PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingServer PUBLIC
FWCoreConcurrency
FWCoreIntegration
)


add_library(FWCoreIntegrationWaitingService SHARED 
  WaitingService.cc
)

target_include_directories(FWCoreIntegrationWaitingService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingService PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingService PUBLIC
FWCoreConcurrency
FWCoreIntegration
FWCoreIntegrationWaitingServer
FWCoreParameterSet
FWCoreServiceRegistry
)


add_library(TestOtherThingAnalyzer SHARED 
  OtherThingAnalyzer.cc
  OtherThingRefComparer.cc
)

target_include_directories(TestOtherThingAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOtherThingAnalyzer PUBLIC
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

target_link_libraries(TestOtherThingAnalyzer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_library(TestProdigalAnalyzer SHARED 
  ProdigalAnalyzer.cc
)

target_include_directories(TestProdigalAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestProdigalAnalyzer PUBLIC
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

target_link_libraries(TestProdigalAnalyzer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_library(FWCoreIntegrationTestFindProduct SHARED 
  ManyProductProducer.cc
  TestFindProduct.cc
  TestParentage.cc
)

target_include_directories(FWCoreIntegrationTestFindProduct PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTestFindProduct PUBLIC
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

target_link_libraries(FWCoreIntegrationTestFindProduct PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(TestViewAnalyzer SHARED 
  ViewAnalyzer.cc
)

target_include_directories(TestViewAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestViewAnalyzer PUBLIC
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

target_link_libraries(TestViewAnalyzer PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_library(HierarchicalEDProducer SHARED 
  HierarchicalEDProducer.cc
)

target_include_directories(HierarchicalEDProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(HierarchicalEDProducer PUBLIC
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

target_link_libraries(HierarchicalEDProducer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(WhatsItESProducer SHARED 
  Doodad.cc
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItESProducer.cc
)

target_include_directories(WhatsItESProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItESProducer PUBLIC
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

target_link_libraries(WhatsItESProducer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(DoodadESProducer SHARED 
  Doodad.cc
  DoodadESProducer.cc
  GadgetRcd.cc
)

target_include_directories(DoodadESProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DoodadESProducer PUBLIC
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

target_link_libraries(DoodadESProducer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(DoodadESSource SHARED 
  DoodadESSource.cc
  GadgetRcd.cc
)

target_include_directories(DoodadESSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DoodadESSource PUBLIC
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

target_link_libraries(DoodadESSource PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(WhatsItAnalyzer SHARED 
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItAnalyzer.cc
)

target_include_directories(WhatsItAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItAnalyzer PUBLIC
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

target_link_libraries(WhatsItAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(TestGetterOfProducts SHARED 
  TestGetterOfProducts.cc
)

target_include_directories(TestGetterOfProducts PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestGetterOfProducts PUBLIC
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

target_link_libraries(TestGetterOfProducts PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(TestDescriptionComments SHARED 
  TestDescriptionComments.cc
)

target_include_directories(TestDescriptionComments PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestDescriptionComments PUBLIC
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

target_link_libraries(TestDescriptionComments PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_library(WhatsItExtensionCordAnalyzer SHARED 
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItExtensionCordAnalyzer.cc
)

target_include_directories(WhatsItExtensionCordAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItExtensionCordAnalyzer PUBLIC
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

target_link_libraries(WhatsItExtensionCordAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(WhatsItWatcherAnalyzer SHARED 
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItWatcherAnalyzer.cc
)

target_include_directories(WhatsItWatcherAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItWatcherAnalyzer PUBLIC
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

target_link_libraries(WhatsItWatcherAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_library(ESTestModules SHARED 
  ESTestAnalyzers.cc
  ESTestProducers.cc
)

target_include_directories(ESTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ESTestModules PUBLIC
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

target_link_libraries(ESTestModules PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
FWCoreParameterSet
)


add_library(IntSource SHARED 
  IntSource.cc
)

target_include_directories(IntSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IntSource PUBLIC
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

target_link_libraries(IntSource PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSources
)



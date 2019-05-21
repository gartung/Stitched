if(${BUILDTEST})
add_subdirectory(test)
endif()
add_library(DataFormatsFWLite SHARED 
  src/ChainEvent.cc
  src/DataGetterHelper.cc
  src/ESHandle.cc
  src/EntryFinder.cc
  src/ErrorThrower.cc
  src/Event.cc
  src/EventBase.cc
  src/EventHistoryGetter.cc
  src/EventSetup.cc
  src/HistoryGetterBase.cc
  src/IOVSyncValue.cc
  src/LumiHistoryGetter.cc
  src/LuminosityBlock.cc
  src/LuminosityBlockBase.cc
  src/MultiChainEvent.cc
  src/Record.cc
  src/Run.cc
  src/RunBase.cc
  src/RunFactory.cc
  src/RunHistoryGetter.cc
  src/format_type_name.cc
)

target_include_directories(DataFormatsFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsFWLite PUBLIC
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

target_link_libraries(DataFormatsFWLite PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreCommon
FWCoreFWLite
FWCoreParameterSet
FWCoreUtilities
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


install( TARGETS DataFormatsFWLite DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::DataFormatsFWLite)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(DataFormatsFWLite src/classes.h src/classes_def.xml)

add_library(DataFormatsFWLiteDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFWLite.cxx)

set_property(TARGET DataFormatsFWLiteDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(DataFormatsFWLiteDictObj DataFormatsFWLite-dictgen)

add_dependencies(DataFormatsFWLite DataFormatsFWLiteDictObj)

target_link_libraries(DataFormatsFWLite PUBLIC $<TARGET_OBJECTS:DataFormatsFWLiteDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFWLite_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFWLiteDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


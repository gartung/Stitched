if(BUILDTEST)
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
)

install( TARGETS DataFormatsFWLite DESTINATION  lib  EXPORT stitched::DataFormatsFWLite)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_generate_dictionary(DataFormatsFWLite src/classes.h src/classes_def.xml ROOTMAPLIB DataFormatsFWLiteDict)
add_library(DataFormatsFWLiteDict SHARED DataFormatsFWLiteDict.cpp)
add_dependencies(DataFormatsFWLite DataFormatsFWLiteGen)
install( TARGETS DataFormatsFWLiteDict DESTINATION lib EXPORT stitched::DataFormatsFWLiteDict )
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFWLiteDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsFWLite.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

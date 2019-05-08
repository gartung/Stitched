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
  ROOT::MathCore
  ROOT::Net
  ROOT::Thread
  ROOT::Tree
)

install( TARGETS DataFormatsFWLite DESTINATION  ${CMAKE_INSTALL_LIBDIR}  EXPORT stitched::DataFormatsFWLite)

include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
include_directories(${Boost_INCLUDE_DIR})
include_directories(${MD5_INCLUDE_DIR})
include_directories(${ROOT_INCLUDE_DIR})
include_directories(${TBB_INCLUDE_DIRS})
include_directories(${TINYXML2_INCLUDE_DIR})
include_directories(${UUID_INCLUDE_DIR})
reflex_build_dictionary(DataFormatsFWLite src/classes.h src/classes_def.xml OPTIONS )
add_dependencies(DataFormatsFWLite DataFormatsFWLite-dictgen)

add_subdirectory(test)
include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(DataFormatsFWLite src/classes.h src/classes_def.xml)

add_library(DataFormatsFWLite SHARED ${DataFormatsFWLite_EXTRA_SOURCES}
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

add_rootdict_rules(DataFormatsFWLite)

set_target_properties(DataFormatsFWLite PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
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


add_python_rules(DataFormats/FWLite)
install( TARGETS DataFormatsFWLite DESTINATION ${CMAKE_INSTALL_LIBDIR} EXPORT fwcore::)


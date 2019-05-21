add_library(DataFormatsWrappedStdDictionaries INTERFACE)

include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

reflex_build_dictionary(DataFormatsWrappedStdDictionaries src/classes.h src/classes_def.xml)

add_library(DataFormatsWrappedStdDictionariesDictObj OBJECT ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsWrappedStdDictionaries.cxx)

set_property(TARGET DataFormatsWrappedStdDictionariesDictObj PROPERTY POSITION_INDEPENDENT_CODE ON)

add_dependencies(DataFormatsWrappedStdDictionariesDictObj DataFormatsWrappedStdDictionaries-dictgen)

add_dependencies(DataFormatsWrappedStdDictionaries DataFormatsWrappedStdDictionariesDictObj)

target_link_libraries(DataFormatsWrappedStdDictionaries INTERFACE $<TARGET_OBJECTS:DataFormatsWrappedStdDictionariesDictObj>)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsWrappedStdDictionaries_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsWrappedStdDictionariesDict.rootmap DESTINATION ${CMAKE_INSTALL_LIBDIR})


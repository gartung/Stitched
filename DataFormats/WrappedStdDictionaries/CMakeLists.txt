include_directories(
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(DataFormatsWrappedStdDictionaries src/classes.h src/classes_def.xml)

add_dependencies(DataFormatsWrappedStdDictionaries DataFormatsWrappedStdDictionaries-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsWrappedStdDictionariesDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsWrappedStdDictionaries.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


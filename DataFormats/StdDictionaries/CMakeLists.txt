add_library(DataFormatsStdDictionaries INTERFACE)

include_directories(
${ROOT_INCLUDE_DIR}
)

include_directories(${CMAKE_SOURCE_DIR})

include_directories(/usr/include/)

reflex_build_dictionary(DataFormatsStdDictionaries_map src/classes_map.h src/classes_def_map.xml)

add_dependencies(DataFormatsStdDictionaries DataFormatsStdDictionaries_map-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_mapDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_map.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

reflex_build_dictionary(DataFormatsStdDictionaries_others src/classes_others.h src/classes_def_others.xml)

add_dependencies(DataFormatsStdDictionaries DataFormatsStdDictionaries_others-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_othersDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_others.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

reflex_build_dictionary(DataFormatsStdDictionaries_pair src/classes_pair.h src/classes_def_pair.xml)

add_dependencies(DataFormatsStdDictionaries DataFormatsStdDictionaries_pair-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_pairDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_pair.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)

reflex_build_dictionary(DataFormatsStdDictionaries_vector src/classes_vector.h src/classes_def_vector.xml)

add_dependencies(DataFormatsStdDictionaries DataFormatsStdDictionaries_vector-dictgen)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_vectorDict_rdict.pcm  ${CMAKE_CURRENT_BINARY_DIR}/DataFormatsStdDictionaries_vector.rootmap DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)


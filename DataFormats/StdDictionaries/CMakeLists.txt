include_directories(${CMAKE_SOURCE_DIR}
${ROOT_INCLUDE_DIR}
)

cms_rootdict(DataFormatsStdDictionaries src/classes_map.h src/classes_def_map.xml)

include_directories(${CMAKE_SOURCE_DIR}
${ROOT_INCLUDE_DIR}
)

cms_rootdict(DataFormatsStdDictionaries src/classes_others.h src/classes_def_others.xml)

include_directories(${CMAKE_SOURCE_DIR}
${ROOT_INCLUDE_DIR}
)

cms_rootdict(DataFormatsStdDictionaries src/classes_pair.h src/classes_def_pair.xml)

include_directories(${CMAKE_SOURCE_DIR}
${ROOT_INCLUDE_DIR}
)

cms_rootdict(DataFormatsStdDictionaries src/classes_vector.h src/classes_def_vector.xml)

add_rootdict_rules(DataFormatsStdDictionaries)

add_library(DataFormatsStdDictionaries SHARED ${DataFormatsStdDictionaries_EXTRA_SOURCES})


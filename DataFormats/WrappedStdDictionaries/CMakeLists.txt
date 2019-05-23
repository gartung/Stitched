include_directories(${CMAKE_SOURCE_DIR}
${Boost_INCLUDE_DIR}
${MD5_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
)

cms_rootdict(DataFormatsWrappedStdDictionaries src/classes.h src/classes_def.xml)

add_rootdict_rules(DataFormatsWrappedStdDictionaries)

add_library(DataFormatsWrappedStdDictionaries SHARED ${DataFormatsWrappedStdDictionaries_EXTRA_SOURCES})


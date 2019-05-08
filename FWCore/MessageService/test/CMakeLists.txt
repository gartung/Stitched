add_executable(standAloneWithMessageLogger
  standAloneTest.cpp
)

target_include_directories(standAloneWithMessageLogger PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(standAloneWithMessageLogger PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(standAloneWithMessageLogger PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageLogger
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME standAloneWithMessageLogger COMMAND standAloneWithMessageLogger)
add_executable(trivial_main
  trivial_main.cpp
)

target_include_directories(trivial_main PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(trivial_main PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(trivial_main PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageLogger
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME trivial_main COMMAND trivial_main)
add_executable(testLoggerInCmsRun
  testLoggerInCmsRun.cpp
)

target_include_directories(testLoggerInCmsRun PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(testLoggerInCmsRun PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(testLoggerInCmsRun PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME testLoggerInCmsRun COMMAND testLoggerInCmsRun)
add_executable(unitTestsGroup_d
  unitTestsGroup_d.cpp
)

target_include_directories(unitTestsGroup_d PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_d PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_d PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_d COMMAND unitTestsGroup_d)
add_executable(unitTestsGroup_1
  unitTestsGroup_1.cpp
)

target_include_directories(unitTestsGroup_1 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_1 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_1 PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_1 COMMAND unitTestsGroup_1)
add_executable(unitTestsStatistics
  unitTestsStatistics.cpp
)

target_include_directories(unitTestsStatistics PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsStatistics PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsStatistics PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsStatistics COMMAND unitTestsStatistics)
add_executable(unitTestsLimits
  unitTestsLimits.cpp
)

target_include_directories(unitTestsLimits PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsLimits PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsLimits PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsLimits COMMAND unitTestsLimits)
add_executable(unitTestsGroup_2
  unitTestsGroup_2.cpp
)

target_include_directories(unitTestsGroup_2 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_2 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_2 PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_2 COMMAND unitTestsGroup_2)
add_executable(unitTestsGroup_3
  unitTestsGroup_3.cpp
)

target_include_directories(unitTestsGroup_3 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_3 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_3 PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_3 COMMAND unitTestsGroup_3)
add_executable(unitTestsGroup_4
  unitTestsGroup_4.cpp
)

target_include_directories(unitTestsGroup_4 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_4 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_4 PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_4 COMMAND unitTestsGroup_4)
add_executable(unitTestsGroup_5
  unitTestsGroup_5.cpp
)

target_include_directories(unitTestsGroup_5 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_5 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_5 PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_5 COMMAND unitTestsGroup_5)
add_executable(unitTestsGroup_6
  unitTestsGroup_6.cpp
)

target_include_directories(unitTestsGroup_6 PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(unitTestsGroup_6 PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
)
target_link_libraries(unitTestsGroup_6 PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreMessageService
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME unitTestsGroup_6 COMMAND unitTestsGroup_6)
add_executable(makeJobReport
  makeJobReport.cpp
)

target_include_directories(makeJobReport PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(makeJobReport PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XERCESC_INCLUDE_DIR}
)
target_link_libraries(makeJobReport PUBLIC
  Boost::filesystem
  Boost::iostreams
  Boost::program_options
  Boost::python27
  Boost::regex
  Boost::serialization
  Boost::system
  Boost::thread
  FWCoreFramework
  FWCoreMessageLogger
  FWCoreMessageService
  FWCorePluginManager
  FWCoreServiceRegistry
  FWCoreUtilities
  Python2::Python
  Threads::Threads
)

add_test(NAME makeJobReport COMMAND makeJobReport)

include_directories(${gtest_SOURCE_DIR} ${gtest_SOURCE_DIR}/include)

add_executable(DELDATests DELDA_tests.cpp)

target_link_libraries(DELDATests gtest gtest_main)
target_link_libraries(DELDATests DELDA)

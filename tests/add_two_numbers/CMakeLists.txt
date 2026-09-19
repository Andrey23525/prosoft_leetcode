add_executable(test_add_two_numbers test_add_two_numbers.cpp owned_list.cpp)

target_precompile_headers(test_add_two_numbers PRIVATE ${CMAKE_SOURCE_DIR}/shared/stdafx.h)
target_include_directories(test_add_two_numbers PRIVATE ${CMAKE_SOURCE_DIR}/src/add_two_numbers)
target_link_libraries(test_add_two_numbers PRIVATE
        add_two_numbers
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_add_two_numbers)

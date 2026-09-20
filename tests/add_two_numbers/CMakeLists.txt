add_executable(test_add_two_numbers test_add_two_numbers.cpp owned_list.cpp)

target_include_directories(test_add_two_numbers PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(test_add_two_numbers PRIVATE
        add_two_numbers
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_add_two_numbers)

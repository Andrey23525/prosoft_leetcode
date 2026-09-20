add_executable(test_max_points_on_a_line test_max_points_on_a_line.cpp)

target_link_libraries(test_max_points_on_a_line PRIVATE
        max_points_on_a_line
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_max_points_on_a_line)

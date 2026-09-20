add_executable(test_two_sum test_two_sum.cpp)

target_link_libraries(test_two_sum PRIVATE
        two_sum
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_two_sum)

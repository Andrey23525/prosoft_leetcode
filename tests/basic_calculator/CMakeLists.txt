add_executable(test_basic_calculator test_basic_calculator.cpp)

target_link_libraries(test_basic_calculator PRIVATE
        basic_calculator
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_basic_calculator)

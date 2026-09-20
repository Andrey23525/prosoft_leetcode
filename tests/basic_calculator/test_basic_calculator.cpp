#include "problems.h"
#include <gtest/gtest.h>

TEST(BasicCalculator, FirstExample)
{
    std::string input { "1 + 1" };
    constexpr int expectedResult = 2;

    auto actualResult = LeetCode::calculate(input);
    EXPECT_EQ(actualResult, expectedResult);
}

TEST(BasicCalculator, SecondExample)
{
    std::string input { " 2-1 + 2 " };
    constexpr int expectedResult = 3;

    auto actualResult = LeetCode::calculate(input);
    EXPECT_EQ(actualResult, expectedResult);
}

TEST(BasicCalculator, ThirdExample)
{
    std::string input { "(1+(4+5+2)-3)+(6+8)" };
    constexpr int expectedResult = 23;

    auto actualResult = LeetCode::calculate(input);
    EXPECT_EQ(actualResult, expectedResult);
}

#include "problems.h"
#include <gtest/gtest.h>

TEST(MaxPointsOnLine, FirstExample)
{
    const std::vector<std::vector<int>> points { { 1, 1 }, { 2, 2 }, { 3, 3 } };
    constexpr std::size_t expectedResult = 3;

    const auto actualResult = LeetCode::maxPointsOnLine(points);
    EXPECT_EQ(actualResult, expectedResult);
}

TEST(MaxPointsOnLine, SecondExample)
{
    const std::vector<std::vector<int>> points { { 1, 1 }, { 3, 2 }, { 5, 3 }, { 4, 1 }, { 2, 3 }, { 1, 4 } };
    constexpr std::size_t expectedResult = 4;

    const auto actualResult = LeetCode::maxPointsOnLine(points);
    EXPECT_EQ(actualResult, expectedResult);
}

#include "problems.h"
#include <gtest/gtest.h>

TEST(TwoSum, FirstExample)
{
    const std::vector nums { 2, 7, 11, 15 };
    constexpr int target = 9;

    auto result = LeetCode::twoSum(nums, target);
    EXPECT_EQ(result, std::vector({ 0, 1 }));
}

TEST(TwoSum, SecondExample)
{
    const std::vector nums { 3, 2, 4 };
    constexpr int target = 6;

    const auto result = LeetCode::twoSum(nums, target);
    EXPECT_EQ(result, std::vector({ 1, 2 }));
}

TEST(TwoSum, ThirdExample)
{
    const std::vector nums { 3, 3 };
    constexpr int target = 6;

    const auto result = LeetCode::twoSum(nums, target);
    EXPECT_EQ(result, std::vector({ 0, 1 }));
}

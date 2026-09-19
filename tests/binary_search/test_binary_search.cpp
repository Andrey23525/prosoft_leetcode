#include "binary_search.h"
#include <gtest/gtest.h>

#include <vector>

TEST(BinarySearch, FirstExample)
{
    const std::vector nums { -1, 0, 3, 5, 9, 12 };
    constexpr int target = 9;

    const auto result = LeetCode::search(nums, target);
    EXPECT_EQ(result, 4);
}

TEST(BinarySearch, SecondExample)
{
    const std::vector nums { -1, 0, 3, 5, 9, 12 };
    constexpr int target = 2;

    const auto result = LeetCode::search(nums, target);
    EXPECT_EQ(result, -1);
}

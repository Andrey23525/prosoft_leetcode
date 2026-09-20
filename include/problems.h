#pragma once

#include "list_node.h"
#include "shared/stdafx.h"

namespace LeetCode {
    ListNode* addTwoNumbers(ListNode* firstNode, ListNode* secondNode);
    int search(const std::vector<int>& nums, int target);
    std::vector<int> twoSum(const std::vector<int>& nums, int target);
    int maxPointsOnLine(const std::vector<std::vector<int>>& points);
    int calculate(std::string s);
} // namespace LeetCode

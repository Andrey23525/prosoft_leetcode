#include "two_sum.h"

std::vector<int> LeetCode::twoSum(const std::vector<int>& nums, int target)
{
    std::vector<int> result;
    result.reserve(nums.size());

    for(int i = 0; i < nums.size(); ++i) {
        for(int j = i + 1; j < nums.size(); ++j) {
            if((nums[i] + nums[j]) != target) {
                continue;
            }

            result.push_back(i);
            result.push_back(j);
        }
    }

    result.shrink_to_fit();
    return result;
}

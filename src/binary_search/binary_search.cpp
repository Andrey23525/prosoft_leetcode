#include "binary_search.h"

int LeetCode::search(const std::vector<int>& nums, int target)
{
    const auto it = std::lower_bound(nums.begin(), nums.end(), target);

    if(it == nums.end()) {
        return -1;
    }

    if(*it != target) {
        return -1;
    }

    return static_cast<int>(std::distance(nums.begin(), it)); // int as required by the problem
}

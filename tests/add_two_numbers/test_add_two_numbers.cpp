#include "problems.h"
#include "owned_list.h"

#include <gtest/gtest.h>

namespace LeetCode {
    static bool AreEqual(const ListNode* lhs, const ListNode* rhs)
    {
        while(lhs && rhs) {
            if(lhs->val != rhs->val) {
                return false;
            }

            lhs = lhs->next;
            rhs = rhs->next;
        }

        return lhs == rhs;
    }
} // namespace LeetCode

TEST(AddTwoNumbers, FirstExample)
{
    const auto first = LeetCode::OwnedList({ 2, 4, 3 });
    const auto second = LeetCode::OwnedList({ 5, 6, 4 });
    const auto expectedResult = LeetCode::OwnedList({ 7, 0, 8 });

    const auto actualResult = addTwoNumbers(first.head(), second.head());
    EXPECT_TRUE(LeetCode::AreEqual(expectedResult.head(), actualResult));
}

TEST(AddTwoNumbers, SecondExample)
{
    const auto first = LeetCode::OwnedList({ 0 });
    const auto second = LeetCode::OwnedList({ 0 });
    const auto expectedResult = LeetCode::OwnedList({ 0 });

    const auto actualResult = addTwoNumbers(first.head(), second.head());
    EXPECT_TRUE(LeetCode::AreEqual(expectedResult.head(), actualResult));
}

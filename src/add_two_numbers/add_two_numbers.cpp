#include "add_two_numbers.h"

LeetCode::ListNode* LeetCode::addTwoNumbers(ListNode* firstNode, ListNode* secondNode)
{
    ListNode result;
    auto tail = &result;

    int carry = 0;
    while(firstNode || secondNode || carry) {
        const int x = firstNode ? firstNode->val : 0;
        const int y = secondNode ? secondNode->val : 0;
        const int sum = x + y + carry;

        carry = sum / 10;
        tail->next = new ListNode(sum % 10); // may not allocated memory, it's not a task problem
        tail = tail->next;

        if(firstNode) {
            firstNode = firstNode->next;
        }

        if(secondNode) {
            secondNode = secondNode->next;
        }
    }

    return result.next;
}

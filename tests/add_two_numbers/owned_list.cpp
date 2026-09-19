#include "owned_list.h"

LeetCode::OwnedList::OwnedList(ListNode* head)
{
    for(auto node = head; node; node = node->next) {
        _nodes.emplace_back(node);
    }
}

LeetCode::OwnedList::OwnedList(std::span<const int> digits)
{
    for(const int digit : digits) {
        auto newNode = std::make_unique<ListNode>(digit);
        _nodes.emplace_back(std::move(newNode));

        const auto size = _nodes.size();
        if(size <= 1) {
            continue;
        }

        _nodes[size - 2]->next = _nodes.back().get();
    }
}

LeetCode::OwnedList::OwnedList(std::initializer_list<int> digits)
    : OwnedList(std::span { digits.begin(), digits.size() })
{
}

LeetCode::ListNode* LeetCode::OwnedList::head() const
{
    return _nodes.empty() ? nullptr : _nodes.front().get();
}

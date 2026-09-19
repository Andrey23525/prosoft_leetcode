#pragma once

#include "list_node.h"

#include <initializer_list>
#include <memory>
#include <span>
#include <vector>

namespace LeetCode {
    class OwnedList {
    public:
        OwnedList() = default;

        explicit OwnedList(ListNode* head);

        explicit OwnedList(std::span<const int> digits);

        OwnedList(std::initializer_list<int> digits);

        [[nodiscard]] ListNode* head() const;

    private:
        std::vector<std::unique_ptr<ListNode>> _nodes;
    };
} // namespace LeetCode

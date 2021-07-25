#include <vector>

#include "02.linked_list/15.bst_to_double_linked_list.h"

namespace coding_interview_guide::linked_list::bst_to_double_linked_list {

namespace {
void in_order_traversal(BST<int>* root, std::vector<int>& vec) {
    if (root == nullptr) {
        return;
    }
    in_order_traversal(root->lch, vec);
    vec.push_back(root->val);
    in_order_traversal(root->rch, vec);
}
}  // namespace

DoubleNode<int>* BST2DoubleLinkedList::transfer(BST<int>* root) {
    std::vector<int> vec;
    in_order_traversal(root, vec);
    DoubleNode<int>* prev = nullptr;
    DoubleNode<int>* curr_head = nullptr;
    DoubleNode<int>* result = nullptr;

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        curr_head = new DoubleNode<int>(*it);
        curr_head->prev = prev;
        if (prev != nullptr) {
            prev->next = curr_head;
        } else {
            result = curr_head;
        }
        prev = curr_head;
    }
    return result;
}

namespace {
struct Ret {
    Ret(DoubleNode<int>* _start, DoubleNode<int>* _end) : start(_start), end(_end) {
    }

    DoubleNode<int>* start;
    DoubleNode<int>* end;
};

Ret convert_root_to_linked_list(BST<int>* root) {
    if (root == nullptr) {
        return {nullptr, nullptr};
    }
    auto node = new DoubleNode<int>(root->val);
    auto left = convert_root_to_linked_list(root->lch);
    auto right = convert_root_to_linked_list(root->rch);
    if (left.end != nullptr) {
        left.end->next = node;
    }
    if (right.start != nullptr) {
        right.start->prev = node;
    }
    node->prev = left.end;
    node->next = right.start;
    return Ret(left.start == nullptr ? node : left.start, right.end == nullptr ? node : right.end);
}
}  // namespace

DoubleNode<int>* BST2DoubleLinkedList::transfer_recurse(BST<int>* root) {
    return convert_root_to_linked_list(root).start;
}

}  // namespace coding_interview_guide::linked_list::bst_to_double_linked_list

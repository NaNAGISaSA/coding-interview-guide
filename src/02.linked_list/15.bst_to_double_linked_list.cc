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

}  // namespace coding_interview_guide::linked_list::bst_to_double_linked_list
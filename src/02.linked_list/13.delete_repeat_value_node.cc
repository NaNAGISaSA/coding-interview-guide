#include <unordered_set>

#include "02.linked_list/13.delete_repeat_value_node.h"

namespace coding_interview_guide::linked_list::delete_repeat_value_node {

Node<int>* DeleteRepeatValueNode::delete_repeat_value_node(Node<int>* head) {
    std::unordered_set<int> set;
    Node<int>* prev = nullptr;
    Node<int>* curr_head = head;
    while (curr_head != nullptr) {
        if (set.find(curr_head->val) != set.end()) {
            prev->next = curr_head->next;
        } else {
            set.insert(curr_head->val);
            prev = curr_head;
        }
        curr_head = curr_head->next;
    }
    return head;
}

Node<int>* DeleteRepeatValueNode::delete_repeat_value_node_space_opt(Node<int>* head) {
    Node<int>* curr_head = head;
    while (curr_head != nullptr) {
        int value = curr_head->val;
        Node<int>* prev_ = curr_head;
        Node<int>* curr_head_ = curr_head->next;
        while (curr_head_ != nullptr) {
            if (curr_head_->val == value) {
                prev_->next = curr_head_->next;
            } else {
                prev_ = curr_head_;
            }
            curr_head_ = curr_head_->next;
        }
        curr_head = curr_head->next;
    }
    return head;
}

}  // namespace coding_interview_guide::linked_list::delete_repeat_value_node

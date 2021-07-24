#include "02.linked_list/14.delete_certain_val_node.h"

namespace coding_interview_guide::linked_list::delete_certain_value_node {

Node<int>* DeleteCertainValueNode::delete_node(Node<int>* head, int value) {
    while (head != nullptr) {
        if (head->val != value) {
            break;
        }
        head = head->next;
    }
    Node<int>* prev = nullptr;
    Node<int>* curr_head = head;
    while (curr_head != nullptr) {
        if (curr_head->val == value) {
            prev->next = curr_head->next;
        } else {
            prev = curr_head;
        }
        curr_head = curr_head->next;
    }
    return head;
}

}  // namespace coding_interview_guide::linked_list::delete_certain_value_node

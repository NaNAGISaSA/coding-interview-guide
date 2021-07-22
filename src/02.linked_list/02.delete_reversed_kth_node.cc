#include "02.linked_list/02.delete_reversed_kth_node.h"

namespace coding_interview_guide::linked_list::delete_reversed_kth_node {

Node<int>* DeleteReversedKthNode::delete_kth_node(Node<int>* head, int k) {
    Node<int>* curr_head = head;
    while (curr_head != nullptr) {
        --k;
        curr_head = curr_head->next;
    }
    if (k == 0) {
        return head->next;
    }
    curr_head = head;
    while (++k != 0) {
        curr_head = curr_head->next;
    }
    curr_head->next = curr_head->next->next;
    return head;
}

DoubleNode<int>* DeleteReversedKthNode::delete_kth_double_node(DoubleNode<int>* head, int k) {
    DoubleNode<int>* curr_head = head;
    while (curr_head != nullptr) {
        --k;
        curr_head = curr_head->next;
    }
    if (k == 0) {
        head->next->prev = nullptr;
        return head->next;
    }
    curr_head = head;
    while (++k != 0) {
        curr_head = curr_head->next;
    }
    if (curr_head->next->next != nullptr) {
        curr_head->next->next->prev = curr_head;
    }
    curr_head->next = curr_head->next->next;
    return head;
}

}  // namespace coding_interview_guide::linked_list::delete_reversed_kth_node

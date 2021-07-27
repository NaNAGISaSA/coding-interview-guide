#include "02.linked_list/20.reorder_linked_list_with_lr_part.h"

namespace coding_interview_guide::linked_list::reorder_linked_list_with_lr_part {

Node<int>* ReorderLinkedListWithLRPart::reorder(Node<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node<int>* right_head = head;
    Node<int>* left_head = head;
    while (left_head->next != nullptr && left_head->next->next != nullptr) {
        right_head = right_head->next;
        left_head = left_head->next->next;
    }
    if (left_head->next != nullptr) {
        right_head = right_head->next;
    }
    left_head = head;
    Node<int>* left_head_next = nullptr;
    Node<int>* right_head_next = nullptr;
    Node<int>* right_head_begin = right_head;
    while (left_head != right_head_begin) {
        left_head_next = left_head->next;
        right_head_next = right_head->next;
        left_head->next = right_head;
        if (left_head_next != right_head_begin) {
            right_head->next = left_head_next;
        }
        left_head = left_head_next;
        right_head = right_head_next;
    }
    return head;
}

Node<int>* ReorderLinkedListWithLRPart::reorder_opt(Node<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node<int>* mid = head;
    Node<int>* right = head->next;
    while (right->next != nullptr && right->next->next != nullptr) {
        mid = mid->next;
        right = right->next->next;
    }
    right = mid->next;
    mid->next = nullptr;
    mid = head;
    Node<int>* left_next = nullptr;
    Node<int>* right_next = nullptr;
    while (mid->next != nullptr) {
        left_next = mid->next;
        right_next = right->next;
        mid->next = right;
        right->next = left_next;
        mid = left_next;
        right = right_next;
    }
    mid->next = right;
    return head;
}

}  // namespace coding_interview_guide::linked_list::reorder_linked_list_with_lr_part

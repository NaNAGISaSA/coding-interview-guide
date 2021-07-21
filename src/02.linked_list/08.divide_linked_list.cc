#include "02.linked_list/08.divide_linked_list.h"

namespace coding_interview_guide::linked_list::divide_linked_list {

Node<int>* DivideLinkedList::divide_linked_list(Node<int>* head, int number) {
    Node<int>* small_head = nullptr;
    Node<int>* small_tail = nullptr;
    Node<int>* equal_head = nullptr;
    Node<int>* equal_tail = nullptr;
    Node<int>* big_head = nullptr;
    Node<int>* big_tail = nullptr;
    while (head != nullptr) {
        if (head->val > number) {
            if (big_head == nullptr) {
                big_head = head;
                big_tail = head;
            } else {
                big_tail->next = head;
                big_tail = head;
            }
        } else if (head->val == number) {
            if (equal_head == nullptr) {
                equal_head = head;
                equal_tail = head;
            } else {
                equal_tail->next = head;
                equal_tail = head;
            }
        } else {
            if (small_head == nullptr) {
                small_head = head;
                small_tail = head;
            } else {
                small_tail->next = head;
                small_tail = head;
            }
        }
        head = head->next;
    }
    if (small_tail != nullptr) {
        small_tail->next = nullptr;
    }
    if (equal_tail != nullptr) {
        equal_tail->next = nullptr;
    }
    if (big_tail != nullptr) {
        big_tail->next = nullptr;
    }
    if (small_head != nullptr) {
        if (equal_head != nullptr) {
            small_tail->next = equal_head;
            equal_tail->next = big_head;
        } else {
            small_tail->next = big_head;
        }
        return small_head;
    } else if (equal_head != nullptr) {
        equal_tail->next = big_head;
        return equal_head;
    } else {
        return big_head;
    }
}

}  // namespace coding_interview_guide::linked_list::divide_linked_list
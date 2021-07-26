#include "02.linked_list/16.select_sort_linked_list.h"

namespace coding_interview_guide::linked_list::select_sort_linked_list {

Node<int>* SelectSortLinkedList::select_sort(Node<int>* head) {
    Node<int>* new_head = nullptr;
    Node<int>* curr_new_head = new_head;

    int val = 0;
    Node<int>* old_head = head;
    while (old_head != nullptr) {
        val = old_head->val;
        Node<int>* loop_prev = nullptr;
        Node<int>* loop_head = old_head;
        Node<int>* result_prev = loop_prev;
        while (loop_head != nullptr) {
            if (loop_head->val < val) {
                result_prev = loop_prev;
                val = loop_head->val;
            }
            loop_prev = loop_head;
            loop_head = loop_head->next;
        }

        if (curr_new_head == nullptr) {
            new_head = result_prev == nullptr ? old_head : result_prev->next;
            curr_new_head = new_head;
        } else {
            curr_new_head->next = result_prev == nullptr ? old_head : result_prev->next;
            curr_new_head = curr_new_head->next;
        }

        if (result_prev == nullptr) {
            old_head = old_head->next;
        } else {
            if (result_prev->next != nullptr) {
                result_prev->next = result_prev->next->next;
            }
        }
    }

    return new_head;
}

}  // namespace coding_interview_guide::linked_list::select_sort_linked_list
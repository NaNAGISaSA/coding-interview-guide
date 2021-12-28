#include "02.linked_list/16.select_sort_linked_list.h"

namespace coding_interview_guide::linked_list::select_sort_linked_list {

Node<int>* SelectSortLinkedList::select_sort(Node<int>* head) {
    auto get_min_prev = [](Node<int>* loop_head) {
        Node<int>* prev = nullptr;
        Node<int>* ret = nullptr;
        int val = loop_head->val;
        while (loop_head != nullptr) {
            if (loop_head->val < val) {
                ret = prev;
                val = loop_head->val;
            }
            prev = loop_head;
            loop_head = loop_head->next;
        }
        return ret;
    };

    Node<int>* curr_head = head;
    Node<int>* min_prev = nullptr;
    Node<int>* sort_tail = nullptr;
    while (curr_head != nullptr) {
        min_prev = get_min_prev(curr_head);
        if (min_prev == nullptr) {
            if (sort_tail == nullptr) {
                sort_tail = curr_head;
            } else {
                sort_tail->next = curr_head;
                sort_tail = sort_tail->next;
            }
            curr_head = curr_head->next;
        } else {
            if (sort_tail == nullptr) {
                sort_tail = min_prev->next;
                head = sort_tail;
            } else {
                sort_tail->next = min_prev->next;
                sort_tail = sort_tail->next;
            }
            min_prev->next = min_prev->next->next;
        }
    }

    return head;
}

}  // namespace coding_interview_guide::linked_list::select_sort_linked_list
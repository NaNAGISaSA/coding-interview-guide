#include "02.linked_list/05.reverse_part_of_linked_list.h"

namespace coding_interview_guide::linked_list::reverse_part_of_linked_list {

Node<int>* ReversePartLinkedList::reverse_linked_list(Node<int>* head, int from, int to) {
    Node<int>* pre_pos = nullptr;
    Node<int>* post_pos = nullptr;
    Node<int>* tmp = nullptr;
    Node<int>* curr_head = head;
    int length = 0;
    while (curr_head != nullptr) {
        ++length;
        if (length == from) {
            pre_pos = tmp;
        }
        if (length == to) {
            post_pos = curr_head->next;
        }
        tmp = curr_head;
        curr_head = curr_head->next;
    }

    if (from >= to || from <= 0 || to > length) {
        return head;
    }

    curr_head = pre_pos == nullptr ? head : pre_pos->next;
    Node<int>* next = curr_head->next;
    curr_head->next = post_pos;
    while (next != post_pos) {
        tmp = next->next;
        next->next = curr_head;
        curr_head = next;
        next = tmp;
    }
    if (pre_pos != nullptr) {
        pre_pos->next = curr_head;
        return head;
    }
    return curr_head;
}

}  // namespace coding_interview_guide::linked_list::reverse_part_of_linked_list

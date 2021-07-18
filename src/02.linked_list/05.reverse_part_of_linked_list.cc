#include "02.linked_list/05.reverse_part_of_linked_list.h"

namespace coding_interview_guide::linked_list::reverse_part_of_linked_list {

Node<int>* ReversePartLinkedList::reverse_linked_list(Node<int>* head, unsigned int from, unsigned int to) {
    Node<int>* pre_pos = nullptr;
    Node<int>* post_pos = nullptr;
    Node<int>* prev = nullptr;
    Node<int>* curr_head = head;
    unsigned int num = 0;
    while (num < to) {
        if (num == from - 1) {
            pre_pos = prev;
        }
        prev = curr_head;
        curr_head = curr_head->next;
        ++num;
    }
    post_pos = curr_head;
    Node<int>* reverse_head = pre_pos == nullptr ? prev : head;

    curr_head = pre_pos == nullptr ? head : pre_pos->next;
    Node<int>* next = curr_head->next;
    curr_head->next = post_pos;
    Node<int>* change;
    while (next != post_pos) {
        change = next->next;
        next->next = curr_head;
        curr_head = next;
        next = change;
    }
    if (pre_pos != nullptr) {
        pre_pos->next = curr_head;
    }

    return reverse_head;
}

}  // namespace coding_interview_guide::linked_list::reverse_part_of_linked_list

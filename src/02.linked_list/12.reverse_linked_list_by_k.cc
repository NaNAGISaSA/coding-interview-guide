#include "02.linked_list/12.reverse_linked_list_by_k.h"

namespace coding_interview_guide::linked_list::reverse_linked_list_by_k {

Node<int>* ReverseLinkedListByK::reverse_linked_list(Node<int>* head, int k) {
    if (k == 1) {
        return head;
    }

    int copy_k = k;
    Node<int>* curr_head = head;
    Node<int>* result = curr_head;
    while (--copy_k) {
        curr_head = curr_head->next;
    }
    result = curr_head;
    copy_k = k;
    curr_head = head;

    Node<int>* block_prev = nullptr;
    Node<int>* block_head = nullptr;
    Node<int>* block_tail = nullptr;
    while (curr_head != nullptr) {
        if (copy_k == k) {
            block_head = curr_head;
        }
        if (--copy_k == 0) {
            block_tail = curr_head;
            curr_head = curr_head->next;
            copy_k = k;
            if (block_prev == nullptr) {
                block_prev = block_head;
            } else {
                block_prev->next = block_tail;
                block_prev = block_head;
            }
            Node<int>* prev = nullptr;
            Node<int>* next = nullptr;
            while (block_head != curr_head) {
                next = block_head->next;
                block_head->next = prev;
                prev = block_head;
                block_head = next;
            }
        } else {
            curr_head = curr_head->next;
        }
    }

    if (block_prev->next == nullptr && copy_k != k) {
        block_prev->next = block_head;
    }
    return result;
}

}  // namespace coding_interview_guide::linked_list::reverse_linked_list_by_k
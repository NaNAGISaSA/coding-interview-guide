#include "02.linked_list/12.reverse_linked_list_by_k.h"

namespace coding_interview_guide::linked_list::reverse_linked_list_by_k {

Node<int>* ReverseLinkedListByK::reverse_linked_list(Node<int>* head, int k) {
    if (k == 1) {
        return head;
    }

    auto reverse_k = [](Node<int>* reverse_head, int num_node) {
        Node<int>* reverse_prev = nullptr;
        Node<int>* reverse_next = nullptr;
        while (num_node-- != 0) {
            reverse_next = reverse_head->next;
            reverse_head->next = reverse_prev;
            reverse_prev = reverse_head;
            reverse_head = reverse_next;
        }
    };

    Node<int>* kprev = nullptr;
    Node<int>* khead = head;
    Node<int>* ktail = nullptr;
    Node<int>* current = head;
    int copy_k = k;
    while (current != nullptr) {
        if (--copy_k == 0) {
            ktail = current->next;
            reverse_k(khead, k);
            if (kprev != nullptr) {
                kprev->next = current;
            } else {
                head = current;
            }
            kprev = khead;
            khead = ktail;
            current = ktail;
            copy_k = k;
        } else {
            current = current->next;
        }
    }

    kprev->next = khead;
    return head;
}

}  // namespace coding_interview_guide::linked_list::reverse_linked_list_by_k
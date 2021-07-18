#include "02.linked_list/04.reverse_linked_list.h"

namespace coding_interview_guide::linked_list::reverse_linked_list {

Node<int>* ReverseLinkedList::reverse_linked_list(Node<int>* head) {
    Node<int>* prev = nullptr;
    Node<int>* next = nullptr;
    while (head != nullptr) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

DoubleNode<int>* ReverseLinkedList::reverse_double_linked_list(DoubleNode<int>* head) {
    DoubleNode<int>* prev = nullptr;
    DoubleNode<int>* next = nullptr;
    while (head != nullptr) {
        next = head->next;
        head->prev = next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

}  // namespace coding_interview_guide::linked_list::reverse_linked_list

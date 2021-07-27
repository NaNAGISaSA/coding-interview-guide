#include "02.linked_list/19.merge_order_linked_list.h"

namespace coding_interview_guide::linked_list::merge_order_linked_list {

Node<int>* MergeOrderLinkedList::merge(Node<int>* head1, Node<int>* head2) {
    if (head1 == nullptr || head2 == nullptr) {
        return head1 == nullptr ? head2 : head1;
    }

    Node<int>* head = nullptr;
    if (head1->val > head2->val) {
        head = head2;
        head2 = head2->next;
    } else {
        head = head1;
        head1 = head1->next;
    }
    Node<int>* result = head;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->val > head2->val) {
            head->next = head2;
            head2 = head2->next;
        } else {
            head->next = head1;
            head1 = head1->next;
        }
        head = head->next;
    }
    if (head1 == nullptr) {
        head->next = head2;
    } else {
        head->next = head1;
    }
    return result;
}

}  // namespace coding_interview_guide::linked_list::merge_order_linked_list

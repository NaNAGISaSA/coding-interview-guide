#include "02.linked_list/10.add_two_linked_list.h"

namespace coding_interview_guide::linked_list::add_two_linked_list {

Node<int>* AddTwoLinkedList::add_two_linked_list(Node<int>* head1, Node<int>* head2) {
    auto reverse_linked_list = [](Node<int>* head) {
        Node<int>* prev = nullptr;
        Node<int>* next = nullptr;
        Node<int>* curr = head;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    };

    Node<int>* head1_ = reverse_linked_list(head1);
    Node<int>* head2_ = reverse_linked_list(head2);
    head1 = head1_;
    head2 = head2_;

    int sum = 0;
    Node<int>* dummy_head = new Node<int>(0);
    Node<int>* result = dummy_head;
    while (head1 != nullptr || head2 != nullptr || sum == 1) {
        if (head1 != nullptr) {
            sum += head1->val;
            head1 = head1->next;
        }
        if (head2 != nullptr) {
            sum += head2->val;
            head2 = head2->next;
        }
        dummy_head->next = new Node<int>(sum % 10);
        sum = sum / 10;
        dummy_head = dummy_head->next;
    }

    reverse_linked_list(head1_);
    reverse_linked_list(head2_);

    dummy_head = result;
    result = result->next;
    delete dummy_head;

    return reverse_linked_list(result);
}

}  // namespace coding_interview_guide::linked_list::add_two_linked_list

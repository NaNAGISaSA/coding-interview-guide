#include "02.linked_list/11.linked_list_intersection.h"

namespace coding_interview_guide::linked_list::linked_list_intersection {

Node<int>* FindLinkedListIntersection::linked_list_loop(Node<int>* head) {
    Node<int>* fast = head;
    Node<int>* slow = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            break;
        }
    }
    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }
    fast = head;
    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    return fast;
}

Node<int>* FindLinkedListIntersection::find_intersection(Node<int>* head1, Node<int>* head2) {
    Node<int>* loop_head1 = linked_list_loop(head1);
    Node<int>* loop_head2 = linked_list_loop(head2);
    if (loop_head1 == nullptr && loop_head2 == nullptr) {
        return nullptr;
    } else if (loop_head1 != nullptr && loop_head2 != nullptr) {
        return nullptr;
    } else {
        return nullptr;
    }
}

}  // namespace coding_interview_guide::linked_list::linked_list_intersection
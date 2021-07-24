#include <cmath>

#include "02.linked_list/11.linked_list_intersection.h"

namespace coding_interview_guide::linked_list::linked_list_intersection {

Node<int>* FindLinkedListLoop::linked_list_loop(Node<int>* head) {
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
    auto find_intersection_no_loop = [](Node<int>* head1, Node<int>* head2) {
        int len;
        Node<int>* curr_head1 = head1;
        Node<int>* curr_head2 = head2;
        Node<int>* prev1 = nullptr;
        Node<int>* prev2 = nullptr;
        while (curr_head1 != nullptr) {
            ++len;
            prev1 = curr_head1;
            curr_head1 = curr_head1->next;
        }
        while (curr_head2 != nullptr) {
            --len;
            prev2 = curr_head2;
            curr_head2 = curr_head2->next;
        }
        if (prev1 != prev2) {
            return static_cast<Node<int>*>(nullptr);
        }
        curr_head1 = len > 0 ? head1 : head2;
        curr_head2 = len > 0 ? head2 : head1;
        len = std::abs(len);
        while (len) {
            curr_head1 = curr_head1->next;
            --len;
        }
        while (curr_head1 != curr_head2) {
            curr_head1 = curr_head1->next;
            curr_head2 = curr_head2->next;
        }
        return curr_head1;
    };

    auto find_intersection_both_loop = [&head1, &head2](Node<int>* loop_head1, Node<int>* loop_head2) {
        if (loop_head1 == loop_head2) {
            Node<int>* curr_head1 = head1;
            Node<int>* curr_head2 = head2;
            int len = 0;
            while (curr_head1 != loop_head1) {
                ++len;
                curr_head1 = curr_head1->next;
            }
            while (curr_head2 != loop_head2) {
                curr_head2 = curr_head2->next;
                --len;
            }
            curr_head1 = len > 0 ? head1 : head2;
            curr_head2 = len > 0 ? head2 : head1;
            len = std::abs(len);
            while (len) {
                --len;
                curr_head1 = curr_head1->next;
            }
            while (curr_head1 != curr_head2) {
                curr_head1 = curr_head1->next;
                curr_head2 = curr_head2->next;
            }
            return curr_head1;
        } else {
            Node<int>* curr_head1 = loop_head1->next;
            while (curr_head1 != loop_head1) {
                if (curr_head1 == loop_head2) {
                    return loop_head2;  // or return loop_head1
                }
                curr_head1 = curr_head1->next;
            }
            return static_cast<Node<int>*>(nullptr);
        }
    };

    Node<int>* loop_head1 = FindLinkedListLoop::linked_list_loop(head1);
    Node<int>* loop_head2 = FindLinkedListLoop::linked_list_loop(head2);
    if (loop_head1 == nullptr && loop_head2 == nullptr) {
        return find_intersection_no_loop(head1, head2);
    } else if (loop_head1 != nullptr && loop_head2 != nullptr) {
        return find_intersection_both_loop(loop_head1, loop_head2);
    } else {
        return nullptr;
    }
}

}  // namespace coding_interview_guide::linked_list::linked_list_intersection

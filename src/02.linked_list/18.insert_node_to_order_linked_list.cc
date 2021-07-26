#include "02.linked_list/18.insert_node_to_order_linked_list.h"

namespace coding_interview_guide::linked_list::insert_node_to_order_linked_list {

Node<int>* InsertNodeToOrderLinkedList::insert_node(Node<int>* head, int num) {
    Node<int>* node = new Node<int>(num);
    if (head == nullptr) {
        node->next = node;
        return node;
    }
    Node<int>* prev = head;
    Node<int>* curr_head = head->next;
    while (curr_head != head) {
        if (prev->val <= num && curr_head->val >= num) {
            prev->next = node;
            node->next = curr_head;
            return head;
        }
        prev = curr_head;
        curr_head = curr_head->next;
    }
    prev->next = node;
    node->next = curr_head;
    return curr_head->val > num ? node : curr_head;
}

}  // namespace coding_interview_guide::linked_list::insert_node_to_order_linked_list
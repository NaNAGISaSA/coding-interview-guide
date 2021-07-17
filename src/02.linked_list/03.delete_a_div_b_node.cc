#include <cmath>

#include "02.linked_list/03.delete_a_div_b_node.h"

namespace coding_interview_guide::linked_list::delete_a_div_b_node {

Node<int>* DeleteCertainNode::delete_middle_node(Node<int>* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    if (head->next->next == nullptr) {
        return head->next;
    }
    Node<int>* prev = head;
    Node<int>* last = head->next->next;
    while (last->next != nullptr && last->next->next != nullptr) {
        prev = head->next;
        last = last->next->next;
    }
    prev->next = prev->next->next;
    return head;
}

Node<int>* DeleteCertainNode::delete_certain_node(Node<int>* head, unsigned int a, unsigned int b) {
    if (head == nullptr) {
        return head;
    }
    float div = static_cast<float>(a) / static_cast<float>(b);
    if (div == 0.0F || div > 1.0F) {
        return head;
    }
    int num = 1;
    Node<int>* curr_head = head;
    while (curr_head->next != nullptr) {
        ++num;
        curr_head = curr_head->next;
    }
    int index = static_cast<int>(std::ceil(div * static_cast<float>(num)));
    if (index == 1) {
        return head->next;
    }
    curr_head = head;
    while (--index != 1) {
        curr_head = curr_head->next;
    }
    curr_head->next = curr_head->next->next;
    return head;
}

}  // namespace coding_interview_guide::linked_list::delete_a_div_b_node

#include <unordered_map>

#include "02.linked_list/09.copy_rand_node_linked_list.h"

namespace coding_interview_guide::linked_list::copy_rand_node_linked_list {

RandNode<int>* CopyRandomNodeLinkedList::copy(RandNode<int>* head) {
    std::unordered_map<RandNode<int>*, RandNode<int>*> map{{nullptr, nullptr}};
    RandNode<int>* curr_head = head;
    while (curr_head != nullptr) {
        map.insert({curr_head, new RandNode<int>(curr_head->val)});
        curr_head = curr_head->next;
    }
    curr_head = head;
    while (curr_head != nullptr) {
        map.at(curr_head)->next = map.at(curr_head->next);
        map.at(curr_head)->rand = map.at(curr_head->rand);
        curr_head = curr_head->next;
    }
    return map.at(head);
}

RandNode<int>* CopyRandomNodeLinkedList::copy_opt(RandNode<int>* head) {
    RandNode<int>* curr_head = head;
    RandNode<int>* next = nullptr;
    while (curr_head != nullptr) {
        auto copy = new RandNode<int>(curr_head->val);
        next = curr_head->next;
        curr_head->next = copy;
        copy->next = next;
        curr_head = next;
    }
    curr_head = head;
    RandNode<int>* rand = nullptr;
    while (curr_head != nullptr) {
        rand = curr_head->rand;
        curr_head->next->rand = rand == nullptr ? nullptr : rand->next;
        curr_head = curr_head->next->next;
    }
    curr_head = head;
    next = curr_head->next;
    RandNode<int>* result = next;
    while (curr_head != nullptr) {
        curr_head->next = next->next;
        curr_head = curr_head->next;
        next->next = curr_head == nullptr ? nullptr : curr_head->next;
        next = next->next;
    }
    return result;
}

}  // namespace coding_interview_guide::linked_list::copy_rand_node_linked_list

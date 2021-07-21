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
    return head;
}

}  // namespace coding_interview_guide::linked_list::copy_rand_node_linked_list

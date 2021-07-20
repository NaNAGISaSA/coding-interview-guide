#include <stack>

#include "02.linked_list/07.palindrome_linked_list.h"

namespace coding_interview_guide::linked_list::palindrome_linked_list {

bool PalindromeLinkedList::is_palindrome(const Node<int>* head) {
    std::stack<int> stack;
    const Node<int>* curr_head = head;
    while (curr_head != nullptr) {
        stack.push(curr_head->val);
        curr_head = curr_head->next;
    }
    curr_head = head;
    while (curr_head != nullptr) {
        int number = stack.top();
        stack.pop();
        if (number != curr_head->val) {
            return false;
        }
        curr_head = curr_head->next;
    }
    return true;
}

bool PalindromeLinkedList::is_palindrome_opt(const Node<int>* head) {
    return head->val == 1;
}

}  // namespace coding_interview_guide::linked_list::palindrome_linked_list
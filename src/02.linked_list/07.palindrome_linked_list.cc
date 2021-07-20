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

bool PalindromeLinkedList::is_palindrome_opt(Node<int>* head) {
    Node<int>* curr_head = head;
    Node<int>* middle = head->next;
    while (curr_head->next != nullptr && curr_head->next->next != nullptr) {
        middle = middle->next;
        curr_head = curr_head->next->next;
    }
    // reverse right part and compare
    Node<int>* prev = nullptr;
    Node<int>* next = nullptr;
    curr_head = middle;
    while (curr_head != nullptr) {
        next = curr_head->next;
        curr_head->next = prev;
        prev = curr_head;
        curr_head = next;
    }
    curr_head = prev;
    bool result = true;
    while (prev != nullptr) {
        if (prev->val != head->val) {
            result = false;
            break;
        }
        prev = prev->next;
        head = head->next;
    }
    // recover right part
    prev = nullptr;
    while (curr_head != nullptr) {
        next = curr_head->next;
        curr_head->next = prev;
        prev = curr_head;
        curr_head = next;
    }
    return result;
}

}  // namespace coding_interview_guide::linked_list::palindrome_linked_list

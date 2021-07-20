#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_JOSEPH_PROBLEM_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_JOSEPH_PROBLEM_H_

/*
【题目】
给定一个链表，请判断该链表是否为回文结构。
【进阶】
如果链表长度为N，则时间复杂度为O(N)，额外空间复杂度为O(1)
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::palindrome_linked_list {

class PalindromeLinkedList {
public:
    static bool is_palindrome(const Node<int>* head);
    static bool is_palindrome_opt(const Node<int>* head);
};

}  // namespace coding_interview_guide::linked_list::palindrome_linked_list

#endif
#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DIVIDE_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DIVIDE_LINKED_LIST_H_

/*
【题目】
给定一个链表，再给定一个整数 pivot，请将链表调整为左部分都是值小于 pivot 的节点，中间部分都是值等于 pivot 的节点，
右边部分都是大于 pivot 的节点。要求每一部分数字的顺序与原链表一致。
如果链表长度为N，给出时间复杂度为O(N)，额外空间复杂度为O(1)的解法。
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::divide_linked_list {

class DivideLinkedList {
public:
    static Node<int>* divide_linked_list(Node<int>* head, int number);
};

}  // namespace coding_interview_guide::linked_list::divide_linked_list

#endif
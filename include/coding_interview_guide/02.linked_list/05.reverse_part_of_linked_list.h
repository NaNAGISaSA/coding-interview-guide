#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REVERSE_PART_OF_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REVERSE_PART_OF_LINKED_LIST_H_

/*
【题目】
给定一个单链表，在链表中把第 L 个节点到第 R 个节点这一部分进行反转。
【要求】
如果链表长度为N，则时间复杂度为O(N)，空间复杂度为O(1)
【备注】
如果不满足1 <= L <= R <= N，则不用调整。
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::reverse_part_of_linked_list {

class ReversePartLinkedList {
public:
    static Node<int>* reverse_linked_list(Node<int>* head, int from, int to);
};

}  // namespace coding_interview_guide::linked_list::reverse_part_of_linked_list

#endif
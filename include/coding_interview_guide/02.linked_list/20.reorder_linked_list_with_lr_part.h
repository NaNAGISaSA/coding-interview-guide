#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REORDER_LINKED_LIST_WITH_LR_PART_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REORDER_LINKED_LIST_WITH_LR_PART_H_

/*
【题目】
给定一个单链表的头部节点 head，链表长度为 N，如果 N 是偶数，那么前 N / 2 个节点算作左半区，后 N / 2
个节点算作右半区；如果 N 为奇数，那么前 N / 2 个节点算作左半区，后 N / 2 + 1个节点算作右半区。左半区从左到右依次记为
L1->L2->...，右半区从左到右依次记为 R1->R2->...，请将单链表调整成 L1->R1->L2->R2->... 的形式。
【要求】
如果链表长度为N，则时间复杂度为O(N)，空间复杂度为O(1)
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::reorder_linked_list_with_lr_part {

class ReorderLinkedListWithLRPart {
public:
    static Node<int>* reorder(Node<int>* head);
    static Node<int>* reorder_opt(Node<int>* head);
};

}  // namespace coding_interview_guide::linked_list::reorder_linked_list_with_lr_part

#endif

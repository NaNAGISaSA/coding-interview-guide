#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_MERGE_ORDER_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_MERGE_ORDER_LINKED_LIST_H_

/*
【题目】
给定两个升序的单链表的头节点 head1 和 head2，请合并两个升序链表， 合并后的链表依然升序，并返回合并后链表的头节点。
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::merge_order_linked_list {

class MergeOrderLinkedList {
public:
    static Node<int>* merge(Node<int>* head1, Node<int>* head2);
};

}  // namespace coding_interview_guide::linked_list::merge_order_linked_list

#endif

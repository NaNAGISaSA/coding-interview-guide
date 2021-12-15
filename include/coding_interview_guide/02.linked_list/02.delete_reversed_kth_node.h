#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_REVERSED_KTH_NODE_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_REVERSED_KTH_NODE_H_

/*
【题目】
给出一个单向链表和双向链表，返回删除单链表的倒数第K个节点的链表。
【要求】
如果链表长度为N，则时间复杂度为O(N)，空间复杂度为O(1)
【备注】
1 <= K <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::delete_reversed_kth_node {

class DeleteReversedKthNode {
public:
    static Node<int>* delete_kth_node(Node<int>* head, int k);
    static DoubleNode<int>* delete_kth_double_node(DoubleNode<int>* head, int k);
};

}  // namespace coding_interview_guide::linked_list::delete_reversed_kth_node

#endif

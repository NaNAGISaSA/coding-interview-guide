#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_COPY_RAND_NODE_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_COPY_RAND_NODE_LINKED_LIST_H_

/*
【题目】
复制含有随机指针节点的链表。
【进阶】
如果链表长度为N，给出时间复杂度为O(N)，额外空间复杂度为O(1)的解法。
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::copy_rand_node_linked_list {

class CopyRandomNodeLinkedList {
public:
    static RandNode<int>* copy(RandNode<int>* head);
    static RandNode<int>* copy_opt(RandNode<int>* head);
};

}  // namespace coding_interview_guide::linked_list::copy_rand_node_linked_list

#endif
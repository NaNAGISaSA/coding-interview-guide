#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REVERSE_LINKED_LIST_BY_K_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REVERSE_LINKED_LIST_BY_K_H_

/*
【题目】
给定一个单链表，实现一个调整单链表的函数，使得每 K 个节点之间的值逆序，如果最后不够 K 个节点一组，则不调整最后几个节点。
【备注】
1 <= K <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::reverse_linked_list_by_k {

class ReverseLinkedListByK {
public:
    static Node<int>* reverse_linked_list(Node<int>* head, int k);
};

}  // namespace coding_interview_guide::linked_list::reverse_linked_list_by_k

#endif
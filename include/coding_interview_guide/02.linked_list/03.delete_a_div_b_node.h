#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_A_DIV_B_NODE_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_A_DIV_B_NODE_

/*
【题目】
给出链表的头结点head，实现链表删除中间节点的函数。
【进阶】
给出链表的头结点head，整数a和b，实现删除位于a/b处节点的函数。
例如：链表 1->2->3，a/b值为r
如果r位于区间(0,1/3]，删除节点1；
如果r位于区间(1/3, 2/3]，删除节点1；
如果r位于区间(2/3, 1]，删除节点1；
如果r=0或r>1，则不删除任何节点。
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::delete_a_div_b_node {

class DeleteCertainNode {
public:
    static Node<int>* delete_middle_node(Node<int>* head);
    static Node<int>* delete_certain_node(Node<int>* head, unsigned int a, unsigned int b);
};

}  // namespace coding_interview_guide::linked_list::delete_a_div_b_node

#endif
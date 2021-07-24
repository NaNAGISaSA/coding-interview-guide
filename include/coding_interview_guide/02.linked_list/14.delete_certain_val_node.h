#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_CERTAIN_VALUE_NODE_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_CERTAIN_VALUE_NODE_H_

/*
【题目】
给出一个链表和一个整数 num，输出删除链表中节点值等于 num 的节点之后的链表。
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::delete_certain_value_node {

class DeleteCertainValueNode {
public:
    static Node<int>* delete_node(Node<int>* head, int value);
};

}  // namespace coding_interview_guide::linked_list::delete_certain_value_node

#endif
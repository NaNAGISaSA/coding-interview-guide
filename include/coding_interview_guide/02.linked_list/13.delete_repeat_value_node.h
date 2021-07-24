#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_REPEAT_VALUE_NODE_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_DELETE_REPEAT_VALUE_NODE_H_

/*
【题目】
给定一个无序链表，删除其中值重复出现的节点(保留当中顺序遍历第一个出现的节点)。
要求给出两种解法：
解法1：时间复杂度为O(N)，空间复杂度不做要求
解法2：额外空间复杂度为O(1)，时间复杂度不做要求
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::delete_repeat_value_node {

class DeleteRepeatValueNode {
public:
    static Node<int>* delete_repeat_value_node(Node<int>* head);
    static Node<int>* delete_repeat_value_node_space_opt(Node<int>* head);
};

}  // namespace coding_interview_guide::linked_list::delete_repeat_value_node

#endif
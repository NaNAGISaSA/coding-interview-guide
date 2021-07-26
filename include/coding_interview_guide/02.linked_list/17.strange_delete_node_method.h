#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_STRANGE_DELETE_NODE_METHOD_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_STRANGE_DELETE_NODE_METHOD_H_

/*
【题目】
链表节点值类型为 int 类型，给定一个链表中的节点 node，但不给定整个链表的头节点。如何在链表中删除 node ? 请实现这个函数。
输入描述：给出一个单链表的节点。
输出描述：不需要返回值。
【备注】
保证要删除的这个节点不是链表的尾节点。
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::strange_delete_node_method {

class StrangeDeleteNodeMethod {
public:
    static void delete_node(Node<int>* node);
};

}  // namespace coding_interview_guide::linked_list::strange_delete_node_method

#endif

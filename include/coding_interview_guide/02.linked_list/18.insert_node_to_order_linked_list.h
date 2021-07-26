#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_INSERT_NODE_TO_ORDER_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_INSERT_NODE_TO_ORDER_LINKED_LIST_H_

/*
【题目】
一个环形单链表从头节点 head 开始不降序，同时由最后的节点指回头节点。给定这样一个环形单链表的头节点 head 和 一个整数
num， 请生成节点值为 num 的新节点，并插入到这个环形链表中，保证调整后的链表依然有序。
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::insert_node_to_order_linked_list {

class InsertNodeToOrderLinkedList {
public:
    static Node<int>* insert_node(Node<int>* head, int num);
};

}  // namespace coding_interview_guide::linked_list::insert_node_to_order_linked_list

#endif

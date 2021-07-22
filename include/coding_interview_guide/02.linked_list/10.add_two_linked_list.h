#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_ADD_TWO_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_ADD_TWO_LINKED_LIST_H_

/*
【题目】
假设链表中每一个节点的值都在 0 - 9 之间，那么链表整体就可以代表一个整数。
给定两个这种链表，请生成代表两个整数相加值的结果链表。
例如：链表 1 为 9->3->7，链表 2 为 6->3，最后生成新的结果链表为 1->0->0->0。
【备注】
1 <= N, M <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::add_two_linked_list {

class AddTwoLinkedList {
public:
    static Node<int>* add_two_linked_list(Node<int>* head1, Node<int>* head2);
};

}  // namespace coding_interview_guide::linked_list::add_two_linked_list

#endif

#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REVERSE_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_REVERSE_LINKED_LIST_H_

/*
【题目】
实现反转单向链表和双向链表的函数
【要求】
如果链表长度为N，则时间复杂度为O(N)，空间复杂度为O(1)
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::reverse_linked_list {

class ReverseLinkedList {
public:
    static Node<int>* reverse_linked_list(Node<int>* head);
    static DoubleNode<int>* reverse_double_linked_list(DoubleNode<int>* head);
};

}  // namespace coding_interview_guide::linked_list::reverse_linked_list

#endif
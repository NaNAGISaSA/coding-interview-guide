#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_LINKED_LIST_INTERSECTION_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_LINKED_LIST_INTERSECTION_H_

/*
【题目】
两个单链表相交的一系列问题。
在本题中，链表可能有环，也可能无环。给定两个链表的头节点，这两个链表可能相交，也可能不相交。
实现一个函数，如果两个链表相交，返回相交的第一个节点；不相交则返回null。
【要求】
如果链表长度为M、N，给出时间复杂度为O(M+N)，额外空间复杂度为O(1)的解法。
【备注】
1 <= N, M <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::linked_list_intersection {

class FindLinkedListLoop {
public:
    static Node<int>* linked_list_loop(Node<int>* head);
};

class FindLinkedListIntersection {
public:
    static Node<int>* find_intersection(Node<int>* head1, Node<int>* head2);
};

}  // namespace coding_interview_guide::linked_list::linked_list_intersection

#endif

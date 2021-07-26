#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_SELECT_SORT_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_SELECT_SORT_LINKED_LIST_H_

/*
【题目】
给定一个无序单链表，实现单链表的选择排序(按升序排序)。
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::select_sort_linked_list {

class SelectSortLinkedList {
public:
    static Node<int>* select_sort(Node<int>* head);
};

}  // namespace coding_interview_guide::linked_list::select_sort_linked_list

#endif

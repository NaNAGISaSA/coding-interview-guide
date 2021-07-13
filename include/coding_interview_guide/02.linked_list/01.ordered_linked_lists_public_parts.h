#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_ORDERED_LINKED_LIST_PUBLIC_PART_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_ORDERED_LINKED_LIST_PUBLIC_PART_H_

/*
【题目】
给定两个升序链表，打印两个升序链表的公共部分。
*/

#include <vector>

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::ordered_linked_list_public_part {

class LinkedListPublicPart {
public:
    static std::vector<int> find_public_part(const Node<int>* head1, const Node<int>* head2);
};

}

#endif
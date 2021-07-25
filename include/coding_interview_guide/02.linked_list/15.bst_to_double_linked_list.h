#ifndef _CODEING_INTERVIEW_GUIDE_LINKED_LIST_BST_TO_DOUBLE_LINKED_LIST_H_
#define _CODEING_INTERVIEW_GUIDE_LINKED_LIST_BST_TO_DOUBLE_LINKED_LIST_H_

/*
【题目】
对二叉树的节点来说，有本身的值域，有指向左孩子节点和右孩子节点的两个指针；对双向链表的节点来说，有本身的值域，有指向上一个节点和下一个节点的指针。
在结构上，两种结构有相似性，现在有一棵搜索二叉树，请将其转换成一个有序的双向链表。
【备注】
1 <= N <= 1000000
*/

#include "02.linked_list/00.linked_list_utils.h"

namespace coding_interview_guide::linked_list::bst_to_double_linked_list {

class BST2DoubleLinkedList {
public:
    static DoubleNode<int>* transfer(BST<int>* root);
    static DoubleNode<int>* transfer_recurse(BST<int>* root);
};

}  // namespace coding_interview_guide::linked_list::bst_to_double_linked_list

#endif
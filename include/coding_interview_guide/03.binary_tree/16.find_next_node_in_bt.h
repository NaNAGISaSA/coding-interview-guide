#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_NEXT_NODE_IN_BT_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_NEXT_NODE_IN_BT_H_

/*
【题目】
有一种新的二叉树，其结构比普通二叉树多了一个指向父节点的parent指针。头节点的parent指向nullptr。
请实现一个返回一个节点后继节点的函数。二叉树中一个节点的后继节点指的是，二叉树的中序遍历的序列中的下一个节点。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::find_next_node_in_bt {

class FindNextNode {
public:
    static const NewNode<int>* find_node(const NewNode<int>* node);
    static const NewNode<int>* find_node_opt(const NewNode<int>* node);
};

}  // namespace coding_interview_guide::binary_tree::find_next_node_in_bt

#endif

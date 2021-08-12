#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_IS_BST_OR_COMPLETE_BINARY_TREE_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_IS_BST_OR_COMPLETE_BINARY_TREE_H_

/*
【题目】
给定一棵二叉树，已经其中没有重复值的节点，请判断该二叉树是否为搜索二叉树和完全二叉树。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::is_bst_or_complete_binary_tree {

class IsBstOrCompleteBinaryTree {
public:
    static bool is_bst(const Node<int>* root);
    static bool is_complete_binary_tree(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::is_bst_or_complete_binary_tree

#endif
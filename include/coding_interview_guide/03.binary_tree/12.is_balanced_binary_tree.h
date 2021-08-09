#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_IS_BALANCED_BINARY_TREE_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_IS_BALANCED_BINARY_TREE_H_

/*
【题目】
平衡二叉树的性质为: 要么是一棵空树，要么任何一个节点的左右子树高度差的绝对值不超过1。
给定一棵二叉树，判断这棵二叉树是否为平衡二叉树。
一颗树的高度指的是树的根节点到所有节点的距离中的最大值。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::is_balanced_binary_tree {

class IsBalancedBinaryTree {
public:
    static bool is_balanced(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::is_balanced_binary_tree

#endif
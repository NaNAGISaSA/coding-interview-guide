#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_MIN_DEPTH_FOR_BINARY_TREE_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_MIN_DEPTH_FOR_BINARY_TREE_H_

/*
【题目】
求二叉树的最小深度。二叉树的最小深度，指的是从root到最近的leaf的最短路径。
【进阶】
给出时间复杂度为O(N)，额外空间复杂度为O(1)的解法。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::min_depth_for_binary_tree {

class MinDepthForBinaryTree {
public:
    static unsigned int min_depth(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::min_depth_for_binary_tree

#endif
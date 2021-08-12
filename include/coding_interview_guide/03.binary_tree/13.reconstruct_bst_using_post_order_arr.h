#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_RECONSTRUCT_BST_USING_POST_ORDER_ARR_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_RECONSTRUCT_BST_USING_POST_ORDER_ARR_H_

/*
【题目】
给定一个有 n 个不重复整数的数组 arr，判断 arr 是否可能是节点值类型为整数的搜索二叉树后序遍历的结果。
【进阶】
给定一个有 n 个不重复整数的数组 arr，且已知其为二叉树后序遍历的结果，重构该树。
*/

#include <vector>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::reconstruct_bst_using_arr {

class ReconstructBstUsingArr {
public:
    static bool can_reconstruct(const std::vector<int>& array);
    static const Node<int>* reconstruct(const std::vector<int>& array);
};

}  // namespace coding_interview_guide::binary_tree::reconstruct_bst_using_arr

#endif
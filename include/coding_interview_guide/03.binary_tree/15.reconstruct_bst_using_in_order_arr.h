#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_RECONSTRUCT_BST_USING_IN_ORDER_ARR_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_RECONSTRUCT_BST_USING_IN_ORDER_ARR_H_

/*
【题目】
给定一个有序数组，已知其中没有重复值，用这个有序数组生成一棵bst，且其中序遍历结果与该数组一致。
*/

#include <vector>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::reconstruct_bst_using_in_order_arr {

class ReconstructBstUsingInOrderArr {
public:
    static const Node<int>* reconstruct(const std::vector<int>& array);
};

}  // namespace coding_interview_guide::binary_tree::reconstruct_bst_using_in_order_arr

#endif

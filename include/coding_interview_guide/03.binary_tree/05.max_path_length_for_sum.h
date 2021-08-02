#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_MAX_PATH_LENGTH_FOR_SUM_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_MAX_PATH_LENGTH_FOR_SUM_H_

/*
【题目】
给定一颗二叉树和一个整数 sum，求累加和为 sum
的最长路径长度。路径是指从某个节点往下，每次最多选择一个孩子节点或者不选所形成的节点链。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::max_path_length_for_sum {

class MaxPathLength {
public:
    static unsigned int max_length(const Node<int>* root, const int sum);
};

}  // namespace coding_interview_guide::binary_tree::max_path_length_for_sum

#endif

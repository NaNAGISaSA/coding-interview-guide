#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_COUNT_CBT_NODE_NUMBER_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_COUNT_CBT_NODE_NUMBER_H_

/*
【题目】
给定一颗完全二叉树的头结点，返回这棵树的节点数目。
【要求】
如果完全二叉树节点数目为N，返回时间复杂度小于O(N)的解法。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::count_cbt_node_number {

class CountCBTNodeNumber {
public:
    static unsigned int count(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::count_cbt_node_number

#endif

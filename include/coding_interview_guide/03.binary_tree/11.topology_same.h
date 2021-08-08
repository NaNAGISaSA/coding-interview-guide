#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_TOPOLOGY_SAME_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_TOPOLOGY_SAME_H_

/*
【题目】
给定彼此独立的两棵二叉树，判断 t1 树是否有与 t2 树拓扑结构完全相同的子树。
设 t1 树的边集为 E1，t2 树的边集为 E2，若 E2 等于 E1 ，则表示 t1 树和t2 树的拓扑结构完全相同。
【进阶】
给出时间复杂度 O(M+N) 的解法。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::topology_same {

class TopologySame {
public:
    static bool is_same(const Node<int>* root1, const Node<int>* root2);
    static bool is_same_opt(const Node<int>* root1, const Node<int>* root2);
};

}  // namespace coding_interview_guide::binary_tree::topology_same

#endif
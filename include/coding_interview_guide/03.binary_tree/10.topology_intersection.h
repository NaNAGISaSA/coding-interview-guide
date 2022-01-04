#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_TOPOLOGY_INTERSECTION_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_TOPOLOGY_INTERSECTION_H_

/*
【题目】
给定彼此独立的两棵二叉树，判断 t1 树是否包含 t2 树全部的拓扑结构。
设 t1 树的边集为 E1，t2 树的边集为 E2，若 E2 是 E1 的子集，则表示 t1 树包含 t2 树全部的拓扑结构。
注意：跳跃节点不算，即两棵树的一部分结构必须完全一致。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::topology_intersection {

class TopologyIntersection {
public:
    static bool topology_intersection(const Node<int>* root1, const Node<int>* root2);
};

}  // namespace coding_interview_guide::binary_tree::topology_intersection

#endif

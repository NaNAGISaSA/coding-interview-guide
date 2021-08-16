#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_NODE_MAX_DISTANCE_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_NODE_MAX_DISTANCE_H_

/*
【题目】
从二叉树的节点 A 出发，可以向上或者向下走，但沿途的节点只能经过一次，当到达节点 B 时，路径上的节点数叫作 A 到 B 的距离。
现在给出一棵二叉树，求整棵树上节点之间的最大距离。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::node_max_distance {

class NodeMaxDistance {
public:
    static unsigned int max_distance(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::node_max_distance

#endif

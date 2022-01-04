#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_MAX_BST_TOPOLOPY_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_MAX_BST_TOPOLOPY_H_

/*
【题目】
给定一棵二叉树，已知所有节点的值都不一样， 返回其中最大的且符合搜索二叉树条件的最大拓扑结构的大小。
拓扑结构是指树上的一个联通块。
【输出描述】
输出一个整数表示满足条件的最大拓扑结构的大小。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::find_max_bst_topology {

class FindMaxBSTTopology {
public:
    static unsigned int max_topology_num(const Node<int>* root);
    static unsigned int max_topology_num_opt(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::find_max_bst_topology

#endif
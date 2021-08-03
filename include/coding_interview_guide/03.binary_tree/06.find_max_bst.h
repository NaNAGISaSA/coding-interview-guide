#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_MAX_BST_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_MAX_BST_H_

/*
【题目】
给定一颗二叉树，已知其中所有节点的值都不一样，找到含有节点最多的搜索二叉子树，并返回其头节点。
搜索二叉树是指对于二叉树的任何一个节点，如果它有儿子，那么左儿子的值应该小于它的值，右儿子的值应该大于它的值。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::find_max_bst {

class FindMaxBST {
public:
    static const Node<int>* find_max_bst(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::find_max_bst

#endif
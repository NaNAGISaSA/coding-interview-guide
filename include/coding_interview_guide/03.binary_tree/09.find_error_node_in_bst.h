#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_ERROR_NODE_IN_BST_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_FIND_ERROR_NODE_IN_BST_H_

/*
【题目】
一棵二叉树原本是搜索二叉树，但是其中有两个节点调换了位置，使得这棵二叉树不再是搜索二叉树，
请按升序输出这两个错误节点的值。(每个节点的值各不相同)
【要求】
空间复杂度为O(1)。
*/

#include <utility>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::find_error_node_in_bst {

class FindErrorNodeInBst {
public:
    static std::pair<int, int> error_node(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::find_error_node_in_bst

#endif

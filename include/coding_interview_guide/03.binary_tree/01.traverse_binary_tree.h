#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_TRAVERSE_BINARY_TREE_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_TRAVERSE_BINARY_TREE_H_

/*
【题目】
按照递归和非递归的方式，进行二叉树先序，中序和后序遍历。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::traverse_binary_tree {

class TraverseBinaryTree {
public:
    static void pre_order_traverse(const Node<int>* root);
    static void in_order_traverse(const Node<int>* root);
    static void post_order_traverse_s1_method(const Node<int>* root);
    static void post_order_traverse_s2_method(const Node<int>* root);
    static void pre_order_traverse_recurse(const Node<int>* root);
    static void in_order_traverse_recurse(const Node<int>* root);
    static void post_order_traverse_recurse(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::traverse_binary_tree

#endif
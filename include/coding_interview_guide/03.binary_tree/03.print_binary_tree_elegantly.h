#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_PRINT_BINARY_TREE_ELEGANTLY_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_PRINT_BINARY_TREE_ELEGANTLY_H_

/*
【题目】
已知二叉树节点值的类型为int类型，实现一个打印二叉树的函数，能够直观的展示二叉树的形状。
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly {

class PrintBinaryTreeElegantly {
public:
    static void print(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly

#endif
#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_OBTAIN_ALL_BT_CASES_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_OBTAIN_ALL_BT_CASES_H_

/*
【题目】
给出一个整数 n，如果 n < 1，代表空树，否则代表中序遍历的结果为 {1, 2, 3... n}。请输出可能的二叉树结构有多少。
【进阶】
N的含义不变，假设可能的二叉树结构有M种，请返回M个二叉树头结点，每一棵二叉树代表一种可能结构。
*/

#include <vector>

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::obtain_all_bt_cases {

class ObtainAllBtCases {
public:
    static unsigned long obtain(unsigned int number);
    static std::vector<Node<int>*> obtain_nodes(unsigned int number);
};

}  // namespace coding_interview_guide::binary_tree::obtain_all_bt_cases

#endif

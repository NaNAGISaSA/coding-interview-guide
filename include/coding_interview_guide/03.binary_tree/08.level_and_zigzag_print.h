#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_LEVEL_AND_ZIGZAG_PRINT_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_LEVEL_AND_ZIGZAG_PRINT_H_

/*
【题目】
给定一颗二叉树，分别实现按层和 ZigZag 打印二叉树。
ZigZag遍历: 意思是第一层从左到右遍历，第二层从右到左遍历，依次类推。
【输出描述】
按层打印：
Level 1 : 1
Level 2 : 2 3
Level 3 : 4 5 6
Level 4 : 7 8
ZigZag打印：
Level 1 from left to right: 1
Level 2 from right to left: 3 2
Level 3 from left to right: 4 5 6
Level 4 from right to left: 8 7
*/

#include "03.binary_tree/00.binary_tree_utils.h"

namespace coding_interview_guide::binary_tree::level_and_zigzag_print {

class PrintBinaryTree {
public:
    static void level_print(const Node<int>* root);
    static void level_print_method2(const Node<int>* root);
    static void zigzag_print(const Node<int>* root);
};

}  // namespace coding_interview_guide::binary_tree::level_and_zigzag_print

#endif
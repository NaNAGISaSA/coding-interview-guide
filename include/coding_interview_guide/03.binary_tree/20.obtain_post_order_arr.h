#ifndef _CODEING_INTERVIEW_GUIDE_BINARY_TREE_OBTAIN_POST_ORDER_ARR_H_
#define _CODEING_INTERVIEW_GUIDE_BINARY_TREE_OBTAIN_POST_ORDER_ARR_H_

/*
【题目】
已知一棵二叉树所有节点的值都不相同。
给出一棵二叉树的先序和中序数组，通过这两个数组直接生成正确的后序数组。
*/

#include <vector>

namespace coding_interview_guide::binary_tree::obtain_post_order_arr {

class ObtainPostOrderArr {
public:
    static std::vector<int> obtain(std::vector<int>& pre_order, std::vector<int>& in_order);
};

}  // namespace coding_interview_guide::binary_tree::obtain_post_order_arr

#endif

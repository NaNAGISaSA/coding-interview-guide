#ifndef _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_MAX_SUB_MATIRX_H_
#define _CODEING_INTERVIEW_GUIDE_STACK_AND_QUEUE_MAX_SUB_MATIRX_H_

/*
【题目】
给定一个整型MxN矩阵，其中的值只有0和1两种，求其中全是1的所有矩形区域中，最大的矩形区域里1的数量。
【要求】
给出时间复杂度为O(MxN)的解法。
*/

#include <vector>

namespace coding_interview_guide::stack_and_queue::max_sub_matrix {

class MaxSubMatrix {
public:
    static size_t max_sub_matirx(const std::vector<std::vector<int>>& input);
};

}  // namespace coding_interview_guide::stack_and_queue::max_sub_matrix

#endif
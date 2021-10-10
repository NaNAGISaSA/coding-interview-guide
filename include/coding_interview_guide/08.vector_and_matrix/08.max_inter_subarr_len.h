#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_INTER_SUBARR_LEN_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_INTER_SUBARR_LEN_H_

/*
【题目】
先给出可整合数组的定义：如果一个数组在排序之后，每相邻两个数的差的绝对值都为1，或者该数组长度为1，则该数组为可整合数组。
例如，[5, 3, 4, 6, 2]排序后为[2, 3, 4, 5, 6]，符合每相邻两个数差的绝对值都为1，所以这个数组为可整合数组。
给定一个数组arr, 请返回其中最大可整合子数组的长度。
【要求】
时间复杂度O(N^2)，额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::max_inter_subarr_len {

class MaxInterSubarrLen {
public:
    static unsigned int max_len(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::max_inter_subarr_len

#endif
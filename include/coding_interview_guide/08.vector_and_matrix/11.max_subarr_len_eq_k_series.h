#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUBARR_LEN_EQ_K_SERIES_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUBARR_LEN_EQ_K_SERIES_H_

/*
【题目】
给定一个数组arr，该数组无序，元素可正，可负，可为0，再给定一个整数k。求arr的所有子数组中所有元素相加和为k的最长子数组的长度。
【补充问题1】
给定一个数组arr，该数组无序，元素可正，可负，可为0，求arr的所有子数组中正数与负数相等的最长子数组的长度。
【补充问题2】
给定一个数组arr，该数组无序，元素只是1或者0，求arr的所有子数组中0和1相等的最长子数组的长度。
【要求】
所有问题：时间复杂度O(N)，额外空间复杂度O（N）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k_series {

class MaxSubarrLenEqKSeries {
public:
    static unsigned int problem1(const std::vector<int>& vec, int k);
    static unsigned int problem2(const std::vector<int>& vec);
    static unsigned int problem3(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k_series

#endif

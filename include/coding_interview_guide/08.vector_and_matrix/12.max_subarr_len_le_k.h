#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUBARR_LEN_LE_K_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUBARR_LEN_LE_K_H_

/*
【题目】
给定一个数组arr，该数组无序，元素可正，可负，可为0，再给定一个整数k。
求arr的所有子数组中所有元素相加和小于或等于k的最长子数组的长度。
【要求】
时间复杂度O(NlogN)，额外空间复杂度O（N）。
【进阶】
给出时间复杂度O(N)的解法。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::max_subarr_len_le_k {

class MaxSubarrLenLeK {
public:
    static unsigned int max_len(const std::vector<int>& vec, int k);
    static unsigned int max_len_sliding_window(const std::vector<int>& vec, int k);
};

}  // namespace coding_interview_guide::vector_and_matrix::max_subarr_len_le_k

#endif
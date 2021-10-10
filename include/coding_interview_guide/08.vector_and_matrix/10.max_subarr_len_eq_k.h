#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUBARR_LEN_EQ_K_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_MAX_SUBARR_LEN_EQ_K_H_

/*
【题目】
给定一个数组arr，该数组无序，但每个值均为正数，再给定一个正数k。求arr的所有子数组中所有元素相加和为k的最长子数组的长度。
【要求】
时间复杂度O(N)，额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k {

class MaxSubarrLenEqK {
public:
    static unsigned int max_len(const std::vector<unsigned int>& vec, unsigned int k);
};

}  // namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k

#endif

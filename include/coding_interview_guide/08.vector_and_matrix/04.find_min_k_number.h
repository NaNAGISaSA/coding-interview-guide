#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_MIN_K_NUMBER_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_MIN_K_NUMBER_H_

/*
【题目】
给定一个整型数组arr，找到其中最小的k个数。
【要求】
不排序，时间复杂度O(Nlogk)和O(N)，额外空间复杂度O（N）。（TODO：BFPRT算法）
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::find_min_k_number {

class FindMinKNumber {
public:
    static std::vector<int> min_number(const std::vector<int>& vec, unsigned int k);
};

}  // namespace coding_interview_guide::vector_and_matrix::find_min_k_number

#endif

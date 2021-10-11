#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_OVER_K_OCCUR_NUM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_OVER_K_OCCUR_NUM_H_

/*
【题目】
给定一个整型数组arr，请打印其中出现次数大于一半的数，如果没有这样的数，请输出"No"。
【进阶】
给定一个整型数组arr，再给定一个整数k，打印所有出现次数大于n/k的数，如果没有这样的数,请打印"No"。
【要求】
原问题：时间复杂度O(N)，额外空间复杂度O（1）；
进阶问题：时间复杂度O(N*K)，额外空间复杂度O（K）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::find_over_k_occur_num {

class FindOccurNum {
public:
    static void find_over_half_num(const std::vector<int>& vec);
    static void find_over_n_div_k_num(const std::vector<int>& vec, unsigned int k);
};

}  // namespace coding_interview_guide::vector_and_matrix::find_over_k_occur_num

#endif
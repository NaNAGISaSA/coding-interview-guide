#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_PRINT_N_ARR_TOP_K_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_PRINT_N_ARR_TOP_K_H_

/*
【题目】
有N个长度不一的数组，所有的数组都是有序的，请从大到小打印这N个数组整体最大的前K个数。
例如，输入含有N行元素的二维数组可以代表N个一维数组。
219, 405, 538, 845, 971
148, 558
52, 99, 348, 691
再输入整数k=5，则打印：
Top 5: 971, 845, 691, 558, 538
【要求】
时间复杂度O（klogN）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::print_n_arr_top_k {

class PrintNArrTopK {
public:
    static void print(const std::vector<std::vector<int>>& vec, int k);
};

}  // namespace coding_interview_guide::vector_and_matrix::print_n_arr_top_k

#endif

#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_NUM_IN_ORDER_MATRIX_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_NUM_IN_ORDER_MATRIX_H_

/*
【题目】
给定一个MxN的整形矩阵matrix和一个整数K, matrix的每一行和每一列都是排好序的。
实现一个函数，判断K是否在matrix中。
【要求】
时间复杂度O(M+N)，额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::find_num_in_order_matrix {

class FindNumInOrderMatrix {
public:
    static bool find_num(const std::vector<std::vector<int>>& matrix, int number);
};

}  // namespace coding_interview_guide::vector_and_matrix::find_num_in_order_matrix

#endif
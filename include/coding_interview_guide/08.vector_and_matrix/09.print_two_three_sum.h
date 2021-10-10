#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_PRINT_TWO_THREE_SUM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_PRINT_TWO_THREE_SUM_H_

/*
【题目】
给定排序数组arr和整数k，不重复打印arr中所有相加和为k的不降序二元组。
【补充问题】
给定排序数组arr和整数k，不重复打印arr中所有相加和为k的不降序三元组。
【要求】
原问题：时间复杂度O(N)，额外空间复杂度O（1）。
补充问题：时间复杂度O(N^2)，额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::print_two_three_sum {

class PrintTwoThreeSum {
public:
    static void print_two(const std::vector<int>& vec, int sum);
    static void print_three(const std::vector<int>& vec, int sum);
};

}  // namespace coding_interview_guide::vector_and_matrix::print_two_three_sum

#endif
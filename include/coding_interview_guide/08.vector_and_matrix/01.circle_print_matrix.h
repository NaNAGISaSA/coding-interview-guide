#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CIRCLE_PRINT_MATRIX_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CIRCLE_PRINT_MATRIX_H_

/*
【题目】
给定一个二维整形矩阵，请按照转圈方式打印它。
【要求】
额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::circle_print_matrix {

class PrintMatrix {
public:
    static void circle_print(const std::vector<std::vector<int>>& matrix);
    static void circle_print2(const std::vector<std::vector<int>>& matrix);
};

}  // namespace coding_interview_guide::vector_and_matrix::circle_print_matrix

#endif
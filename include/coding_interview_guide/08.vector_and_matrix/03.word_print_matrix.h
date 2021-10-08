#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_WORD_PRINT_MATRIX_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_WORD_PRINT_MATRIX_H_

/*
【题目】
给定一个矩阵matrix，按照“之”字形的方式打印这个矩阵。
【要求】
额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::word_print_matrix {

class PrintMatrix {
public:
    static void word_print(const std::vector<std::vector<int>>& matrix);
};

}  // namespace coding_interview_guide::vector_and_matrix::word_print_matrix

#endif
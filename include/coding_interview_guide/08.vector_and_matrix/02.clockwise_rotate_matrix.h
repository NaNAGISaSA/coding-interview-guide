#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CLOCKWISE_ROTATE_MATRIX_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_CLOCKWISE_ROTATE_MATRIX_H_

/*
【题目】
给定一个n*n的矩阵matrix，请把这个矩阵顺时针转动90度。
【要求】
额外空间复杂度O（1）。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::clockwise_rotate_matrix {

class ClockwiseRotateMatrix {
public:
    static void rotate(std::vector<std::vector<int>>& matrix);
};

}  // namespace coding_interview_guide::vector_and_matrix::clockwise_rotate_matrix

#endif

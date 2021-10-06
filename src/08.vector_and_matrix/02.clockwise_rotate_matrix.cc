#include "08.vector_and_matrix/02.clockwise_rotate_matrix.h"

namespace coding_interview_guide::vector_and_matrix::clockwise_rotate_matrix {

void ClockwiseRotateMatrix::rotate(std::vector<std::vector<int>>& matrix) {
    if (matrix.size() <= 1) {
        return;
    }
    size_t left_top = 0, right_bottom = matrix.size() - 1;
    int tmp = 0;
    while (left_top < right_bottom) {
        for (size_t i = 0; i < right_bottom - left_top; ++i) {
            tmp = matrix[left_top][left_top + i];
            matrix[left_top][left_top + i] = matrix[right_bottom - i][left_top];
            matrix[right_bottom - i][left_top] = matrix[right_bottom][right_bottom - i];
            matrix[right_bottom][right_bottom - i] = matrix[left_top + i][right_bottom];
            matrix[left_top + i][right_bottom] = tmp;
        }
        ++left_top;
        --right_bottom;
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::clockwise_rotate_matrix

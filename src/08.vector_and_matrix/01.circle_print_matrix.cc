#include <iostream>

#include "08.vector_and_matrix/01.circle_print_matrix.h"

namespace coding_interview_guide::vector_and_matrix::circle_print_matrix {

void PrintMatrix::circle_print(const std::vector<std::vector<int>>& matrix) {
    if (matrix.size() == 0) {
        return;
    }
    long top = 0, left = 0;
    long bottom = matrix.size() - 1, right = matrix[0].size() - 1;

    auto print_outer_circle = [&]() {
        if (top == bottom) {
            for (long i = left; i <= right; ++i) {
                std::cout << matrix[top][i] << " ";
            }
        } else if (left == right) {
            for (long i = top; i <= bottom; ++i) {
                std::cout << matrix[i][left] << " ";
            }
        } else {
            for (long i = left; i <= right; ++i) {
                std::cout << matrix[top][i] << " ";
            }
            for (long i = top + 1; i <= bottom; ++i) {
                std::cout << matrix[i][right] << " ";
            }
            for (long i = right - 1; i >= left; --i) {
                std::cout << matrix[bottom][i] << " ";
            }
            for (long i = bottom - 1; i >= top + 1; --i) {
                std::cout << matrix[i][left] << " ";
            }
        }
    };

    while (top <= bottom && left <= right) {
        print_outer_circle();
        ++top;
        --bottom;
        ++left;
        --right;
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::circle_print_matrix
#include <iostream>

#include "08.vector_and_matrix/01.circle_print_matrix.h"

namespace coding_interview_guide::vector_and_matrix::circle_print_matrix {

void PrintMatrix::circle_print(const std::vector<std::vector<int>>& matrix) {
    if (matrix.size() == 0) {
        return;
    }
    long top = 0, bottom = matrix.size() - 1, column_index = 0;
    long left = 0, right = matrix[0].size() - 1, row_index = 0;
    bool print_row = true, reverse_row = false, reverse_column = false;
    while (true) {
        if (print_row) {
            if (left > right) {
                return;
            }
            if (reverse_row) {
                for (long i = right; i >= left; --i) {
                    std::cout << matrix[row_index][i] << " ";
                }
                --bottom;
                column_index = left;
                reverse_column = true;
            } else {
                for (long i = left; i <= right; ++i) {
                    std::cout << matrix[row_index][i] << " ";
                }
                ++top;
                column_index = right;
                reverse_column = false;
            }
        } else {
            if (top > bottom) {
                return;
            }
            if (reverse_column) {
                for (long i = bottom; i >= top; --i) {
                    std::cout << matrix[i][column_index] << " ";
                }
                ++left;
                row_index = top;
                reverse_row = false;
            } else {
                for (long i = top; i <= bottom; ++i) {
                    std::cout << matrix[i][column_index] << " ";
                }
                --right;
                row_index = bottom;
                reverse_row = true;
            }
        }
        print_row = !print_row;
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::circle_print_matrix
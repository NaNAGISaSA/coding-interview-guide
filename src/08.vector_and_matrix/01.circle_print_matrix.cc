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

void PrintMatrix::circle_print2(const std::vector<std::vector<int>>& matrix) {
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
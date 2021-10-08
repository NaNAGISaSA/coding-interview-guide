#include <iostream>

#include "08.vector_and_matrix/03.word_print_matrix.h"

namespace coding_interview_guide::vector_and_matrix::word_print_matrix {

void PrintMatrix::word_print(const std::vector<std::vector<int>>& matrix) {
    if (matrix.size() == 0) {
        return;
    }
    size_t row = matrix.size() - 1, column = matrix[0].size() - 1;
    size_t point1_row = 0, point1_column = 0, point2_row = 0, point2_column = 0;
    bool down = false;

    auto print_slash = [&matrix](size_t start_row,
                                 size_t start_column,
                                 const size_t end_row,
                                 const size_t end_column,
                                 const size_t row_step,
                                 const size_t column_step) {
        while (start_row != end_row || start_column != end_column) {
            std::cout << matrix[start_row][start_column] << " ";
            start_row += row_step;
            start_column += column_step;
        }
        std::cout << matrix[start_row][start_column] << " ";
    };

    auto move_two_point = [&row, &column, &point1_row, &point1_column, &point2_row, &point2_column]() {
        if (point1_column == column) {
            ++point1_row;
        } else {
            ++point1_column;
        }
        if (point2_row == row) {
            ++point2_column;
        } else {
            ++point2_row;
        }
    };

    while (point1_row != row + 1) {
        if (down) {
            print_slash(point1_row, point1_column, point2_row, point2_column, 1, -1);
        } else {
            print_slash(point2_row, point2_column, point1_row, point1_column, -1, 1);
        }
        move_two_point();
        down = !down;
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::word_print_matrix

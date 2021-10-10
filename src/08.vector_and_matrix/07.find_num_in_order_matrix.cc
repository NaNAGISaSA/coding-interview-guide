#include "08.vector_and_matrix/07.find_num_in_order_matrix.h"

namespace coding_interview_guide::vector_and_matrix::find_num_in_order_matrix {

bool FindNumInOrderMatrix::find_num(const std::vector<std::vector<int>>& matrix, int number) {
    if (matrix.size() == 0) {
        return false;
    }
    size_t row = matrix.size() - 1, column = matrix[0].size() - 1;
    size_t curr_row = 0, curr_column = column;
    while (curr_row <= row && curr_column <= column) {
        if (matrix[curr_row][curr_column] == number) {
            return true;
        } else if (matrix[curr_row][curr_column] > number) {
            --curr_column;
        } else {
            ++curr_row;
        }
    }
    return false;
}

}  // namespace coding_interview_guide::vector_and_matrix::find_num_in_order_matrix

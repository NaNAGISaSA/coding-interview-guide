#include <vector>

#include "04.dynamic_programming/21.n_queen_problem.h"

namespace coding_interview_guide::dynamic_programming::n_queen_problem {

namespace {
bool is_valid(const std::vector<unsigned int>& coordinate, const unsigned int row, const unsigned int column) {
    for (size_t i = 0; i < row; ++i) {
        if (coordinate[i] == column ||
            (column > coordinate[i] ? column - coordinate[i] == row - i : coordinate[i] - column == row - i)) {
            return false;
        }
    }
    return true;
}

unsigned int method_internal(const unsigned int board_length,
                             const unsigned int row,
                             std::vector<unsigned int>& coordinate) {
    if (row == board_length) {
        return 1;
    }
    unsigned int methods = 0U;
    for (unsigned int i = 0; i < board_length; ++i) {
        if (is_valid(coordinate, row, i)) {
            coordinate[row] = i;
            methods += method_internal(board_length, row + 1, coordinate);
        }
    }
    return methods;
}
}  // namespace

unsigned int NQueenProblem::methods(const unsigned int board_length) {
    std::vector<unsigned int> coordinate(board_length, 0U);
    return board_length == 0 ? 0 : method_internal(board_length, 0, coordinate);
}

}  // namespace coding_interview_guide::dynamic_programming::n_queen_problem

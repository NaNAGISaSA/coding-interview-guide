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

namespace {
unsigned int methods_opt_internal(const unsigned int borad,
                                  const unsigned int column_limit,
                                  const unsigned int left_limit,
                                  const unsigned int right_limit) {
    if (column_limit == borad) {
        return 1;
    }
    unsigned int left_pos = borad & ~((column_limit | left_limit | right_limit));
    unsigned int result = 0U;
    while (left_pos != 0) {
        unsigned int right_most = left_pos & (~left_pos + 1);
        left_pos -= right_most;
        result += methods_opt_internal(
            borad, column_limit | right_most, (left_limit | right_most) << 1, (right_limit | right_most) >> 1);
    }
    return result;
}
}  // namespace

unsigned int NQueenProblem::methods_opt(const unsigned int board_length) {
    if (board_length == 0) {
        return 0;
    } else if (board_length > 31) {
        return methods(board_length);
    }
    return methods_opt_internal((1U << board_length) - 1, 0, 0, 0);
}

}  // namespace coding_interview_guide::dynamic_programming::n_queen_problem

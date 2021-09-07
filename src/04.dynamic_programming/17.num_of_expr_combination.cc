#include <vector>

#include "04.dynamic_programming/17.num_of_expr_combination.h"

namespace coding_interview_guide::dynamic_programming::num_of_expr_combination {

namespace {
unsigned long number_recurse(const std::string& input, const size_t begin, const size_t end, bool desired) {
    if (begin == end) {
        return desired ? (input[begin] == '1' ? 1UL : 0UL) : (input[begin] == '0' ? 1UL : 0UL);
    }
    unsigned long result = 0UL;
    if (desired) {
        for (size_t i = begin; i < end; i = i + 2) {
            if (input[i + 1] == '&') {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, true);
            } else if (input[i + 1] == '|') {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, true) +
                          number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, true);
            } else {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, true);
            }
        }
    } else {
        for (size_t i = begin; i < end; i = i + 2) {
            if (input[i + 1] == '&') {
                result += number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, false) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, true);
            } else if (input[i + 1] == '|') {
                result += number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, false);
            } else {
                result += number_recurse(input, begin, i, true) * number_recurse(input, i + 2, end, true) +
                          number_recurse(input, begin, i, false) * number_recurse(input, i + 2, end, false);
            }
        }
    }
    return result;
}
}  // namespace

unsigned long NumOfExprCombination::number(const std::string& input, bool desired) {
    return input.size() == 0 ? 0UL : number_recurse(input, 0, input.size() - 1, desired);
}

unsigned long NumOfExprCombination::number_dp(const std::string& input, bool desired) {
    if (input.size() == 0) {
        return 0UL;
    }
    size_t matrix_length = 1 + input.size() / 2;
    // {num condition of truth, num condition of false}
    std::vector<std::vector<std::vector<unsigned long>>> dp_matrix(
        matrix_length, std::vector(matrix_length, std::vector<unsigned long>(2, 0UL)));
    for (size_t i = 0; i < matrix_length; ++i) {
        dp_matrix[i][i][0] = input[i * 2] == '1' ? 1UL : 0UL;
        dp_matrix[i][i][1] = input[i * 2] == '0' ? 1UL : 0UL;
    }
    // i: begin, j: end
    for (size_t i = matrix_length - 2; i < matrix_length; --i) {
        for (size_t j = i + 1; j < matrix_length; ++j) {
            for (size_t k = i; k < j; ++k) {
                if (input[2 * k + 1] == '&') {
                    dp_matrix[i][j][0] += dp_matrix[i][k][0] * dp_matrix[k + 1][j][0];
                    dp_matrix[i][j][1] += dp_matrix[i][k][1] * dp_matrix[k + 1][j][1] +
                                          dp_matrix[i][k][0] * dp_matrix[k + 1][j][1] +
                                          dp_matrix[i][k][1] * dp_matrix[k + 1][j][0];
                } else if (input[2 * k + 1] == '|') {
                    dp_matrix[i][j][0] += dp_matrix[i][k][0] * dp_matrix[k + 1][j][0] +
                                          dp_matrix[i][k][0] * dp_matrix[k + 1][j][1] +
                                          dp_matrix[i][k][1] * dp_matrix[k + 1][j][0];
                    dp_matrix[i][j][1] += dp_matrix[i][k][1] * dp_matrix[k + 1][j][1];
                } else {
                    dp_matrix[i][j][0] +=
                        dp_matrix[i][k][0] * dp_matrix[k + 1][j][1] + dp_matrix[i][k][1] * dp_matrix[k + 1][j][0];
                    dp_matrix[i][j][1] +=
                        dp_matrix[i][k][0] * dp_matrix[k + 1][j][0] + dp_matrix[i][k][1] * dp_matrix[k + 1][j][1];
                }
            }
        }
    }
    return dp_matrix[0][matrix_length - 1][desired ? 0 : 1];
}

}  // namespace coding_interview_guide::dynamic_programming::num_of_expr_combination

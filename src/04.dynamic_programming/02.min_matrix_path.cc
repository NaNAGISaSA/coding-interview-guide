#include <algorithm>

#include "04.dynamic_programming/02.min_matrix_path.h"

namespace coding_interview_guide::dynamic_programming::min_matrix_path {

long MinMatrixPath::min_sum(std::vector<std::vector<long>>& matrix) {
    size_t line = matrix.size(), colume = matrix[0].size();
    for (size_t i = 1; i < line; ++i) {
        matrix[i][0] += matrix[i - 1][0];
    }
    for (size_t i = 1; i < colume; ++i) {
        matrix[0][i] += matrix[0][i - 1];
    }
    for (size_t i = 1; i < line; ++i) {
        for (size_t j = 1; j < colume; ++j) {
            matrix[i][j] += std::min(matrix[i - 1][j], matrix[i][j - 1]);
        }
    }
    return matrix[line - 1][colume - 1];
}

}  // namespace coding_interview_guide::dynamic_programming::min_matrix_path

#include <algorithm>

#include "04.dynamic_programming/02.min_matrix_path.h"

namespace coding_interview_guide::dynamic_programming::min_matrix_path {

long MinMatrixPath::min_sum(std::vector<std::vector<long>> matrix) {
    size_t line = matrix.size(), colume = matrix[0].size();
    if (line * colume == 0) {
        return 0;
    }
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

long MinMatrixPath::min_sum_space_opt(const std::vector<std::vector<long>>& matrix) {
    size_t line = matrix.size(), colume = matrix[0].size();
    if (line * colume == 0) {
        return 0;
    }
    if (line > colume) {
        std::vector<long> vec(colume, matrix[0][0]);
        for (size_t i = 1; i < colume; ++i) {
            vec[i] = matrix[0][i] + vec[i - 1];
        }
        for (size_t i = 1; i < line; ++i) {
            vec[0] += matrix[i][0];
            for (size_t j = 1; j < colume; ++j) {
                vec[j] = matrix[i][j] + std::min(vec[j - 1], vec[j]);
            }
        }
        return vec[colume - 1];
    } else {
        std::vector<long> vec(line, matrix[0][0]);
        for (size_t i = 1; i < line; ++i) {
            vec[i] = matrix[i][0] + vec[i - 1];
        }
        for (size_t i = 1; i < colume; ++i) {
            vec[0] += matrix[0][i];
            for (size_t j = 1; j < line; ++j) {
                vec[j] = matrix[j][i] + std::min(vec[j - 1], vec[j]);
            }
        }
        return vec[line - 1];
    }
}

}  // namespace coding_interview_guide::dynamic_programming::min_matrix_path

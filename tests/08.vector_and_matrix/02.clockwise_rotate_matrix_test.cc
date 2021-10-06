#include <gtest/gtest.h>

#include "08.vector_and_matrix/02.clockwise_rotate_matrix.h"

using namespace coding_interview_guide::vector_and_matrix::clockwise_rotate_matrix;

TEST(CLOCKWISE_ROTATE_MATRIX, CLOCKWISE_ROTATE_MATRIX_EXAMPLE_TEST_ONE) {
    std::vector<std::vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> truth{{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
    ClockwiseRotateMatrix::rotate(matrix);
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < truth.size(); ++j) {
            ASSERT_EQ(matrix[i][j], truth[i][j]);
        }
    }
}

TEST(CLOCKWISE_ROTATE_MATRIX, CLOCKWISE_ROTATE_MATRIX_EXAMPLE_TEST_TWO) {
    std::vector<std::vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    std::vector<std::vector<int>> truth{{13, 9, 5, 1}, {14, 10, 6, 2}, {15, 11, 7, 3}, {16, 12, 8, 4}};
    ClockwiseRotateMatrix::rotate(matrix);
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < truth.size(); ++j) {
            ASSERT_EQ(matrix[i][j], truth[i][j]);
        }
    }
}

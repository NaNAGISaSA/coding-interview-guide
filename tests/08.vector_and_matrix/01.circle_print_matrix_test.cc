#include <gtest/gtest.h>

#include "08.vector_and_matrix/01.circle_print_matrix.h"

using namespace coding_interview_guide::vector_and_matrix::circle_print_matrix;

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_EXAMPLE_TEST_ONE) {
    std::vector<std::vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print(matrix);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 8 12 11 10 9 5 6 7 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_EXAMPLE_TEST_TWO) {
    std::vector<std::vector<int>> matrix{{1, 2, 3, 4}};
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print(matrix);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_EXAMPLE_TEST_THREE) {
    std::vector<std::vector<int>> matrix{{1}, {2}, {3}, {4}};
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print(matrix);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_M2_EXAMPLE_TEST_ONE) {
    std::vector<std::vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print2(matrix);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 8 12 11 10 9 5 6 7 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_M2_EXAMPLE_TEST_TWO) {
    std::vector<std::vector<int>> matrix{{1, 2, 3, 4}};
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print2(matrix);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_M2_EXAMPLE_TEST_THREE) {
    std::vector<std::vector<int>> matrix{{1}, {2}, {3}, {4}};
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print2(matrix);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

#include <gtest/gtest.h>

#include "08.vector_and_matrix/01.circle_print_matrix.h"

using namespace coding_interview_guide::vector_and_matrix::circle_print_matrix;

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 8 12 11 10 9 5 6 7 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print({{1, 2, 3, 4}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_EXAMPLE_TEST_THREE) {
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print({{1}, {2}, {3}, {4}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_M2_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print2({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 8 12 11 10 9 5 6 7 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_M2_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print2({{1, 2, 3, 4}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(CIRCLE_PRINT_MATRIX, CIRCLE_PRINT_MATRIX_M2_EXAMPLE_TEST_THREE) {
    testing::internal::CaptureStdout();
    PrintMatrix::circle_print2({{1}, {2}, {3}, {4}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

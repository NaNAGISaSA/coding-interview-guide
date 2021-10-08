#include <gtest/gtest.h>

#include "08.vector_and_matrix/03.word_print_matrix.h"

using namespace coding_interview_guide::vector_and_matrix::word_print_matrix;

TEST(WORD_PRINT_MATRIX, WORD_PRINT_MATRIX_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    PrintMatrix::word_print({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 5 9 6 3 4 7 10 11 8 12 ");
}

TEST(WORD_PRINT_MATRIX, WORD_PRINT_MATRIX_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    PrintMatrix::word_print({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 5 9 6 3 4 7 10 13 14 11 8 12 15 16 ");
}

TEST(WORD_PRINT_MATRIX, WORD_PRINT_MATRIX_EXAMPLE_TEST_THREE) {
    testing::internal::CaptureStdout();
    PrintMatrix::word_print({{1, 2, 3, 4}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

TEST(WORD_PRINT_MATRIX, WORD_PRINT_MATRIX_EXAMPLE_TEST_FOUR) {
    testing::internal::CaptureStdout();
    PrintMatrix::word_print({{1}, {2}, {3}, {4}});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 ");
}

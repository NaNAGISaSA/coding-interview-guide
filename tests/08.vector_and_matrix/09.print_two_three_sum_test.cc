#include <gtest/gtest.h>

#include "08.vector_and_matrix/09.print_two_three_sum.h"

using namespace coding_interview_guide::vector_and_matrix::print_two_three_sum;

TEST(PRINT_TWO_THREE_SUM, PRINT_TWO_SUM_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    PrintTwoThreeSum::print_two({-8, -4, -3, 0, 1, 2, 4, 5, 8, 9}, 10);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1, 9\n2, 8\n");
}

TEST(PRINT_TWO_THREE_SUM, PRINT_TWO_SUM_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    PrintTwoThreeSum::print_two({-1, 1, 1, 1, 9, 9, 10}, 10);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1, 9\n");
}

TEST(PRINT_TWO_THREE_SUM, PRINT_THREE_SUM_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    PrintTwoThreeSum::print_three({-8, -4, -3, 0, 1, 2, 4, 5, 8}, 10);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "-3, 5, 8\n0, 2, 8\n1, 4, 5\n");
}

TEST(PRINT_TWO_THREE_SUM, PRINT_THREE_SUM_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    PrintTwoThreeSum::print_three({0, 1, 1, 2, 4, 4, 4, 5, 8}, 10);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1, 4, 5\n");
}

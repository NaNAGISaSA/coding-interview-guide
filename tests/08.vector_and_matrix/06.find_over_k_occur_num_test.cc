#include <gtest/gtest.h>

#include "08.vector_and_matrix/06.find_over_k_occur_num.h"

using namespace coding_interview_guide::vector_and_matrix::find_over_k_occur_num;

TEST(FIND_OVER_K_OCCUR_NUM, FIND_OVER_K_OCCUR_NUM_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    FindOccurNum::find_over_half_num({1, 2, 3, 2, 2});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "2");
}

TEST(FIND_OVER_K_OCCUR_NUM, FIND_OVER_K_OCCUR_NUM_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    FindOccurNum::find_over_half_num({2, 3, 3, 2});
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "No");
}

TEST(FIND_OVER_K_OCCUR_NUM, FIND_OVER_K_OCCUR_NUM_EXAMPLE_TEST_THREE) {
    testing::internal::CaptureStdout();
    FindOccurNum::find_over_n_div_k_num({2, 3, 4, 2}, 4);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "2 ");
}

TEST(FIND_OVER_K_OCCUR_NUM, FIND_OVER_K_OCCUR_NUM_EXAMPLE_TEST_FOUR) {
    testing::internal::CaptureStdout();
    FindOccurNum::find_over_n_div_k_num({2, 3, 3, 3, 2, 3}, 2);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "3 ");
}

TEST(FIND_OVER_K_OCCUR_NUM, FIND_OVER_K_OCCUR_NUM_EXAMPLE_TEST_FIVE) {
    testing::internal::CaptureStdout();
    FindOccurNum::find_over_n_div_k_num({2, 3, 3, 2}, 2);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "No");
}

#include <gtest/gtest.h>

#include "08.vector_and_matrix/20.print_n_arr_top_k.h"

using namespace coding_interview_guide::vector_and_matrix::print_n_arr_top_k;

TEST(PRINT_N_ARR_TOP_K, PRINT_N_ARR_TOP_K_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    PrintNArrTopK::print({{219, 405, 538, 845, 971}, {148, 558}, {52, 99, 348, 691}}, 5);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "Top 5: 971, 845, 691, 558, 538");
}

TEST(PRINT_N_ARR_TOP_K, PRINT_N_ARR_TOP_K_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    PrintNArrTopK::print({{219, 405}, {99, 348}}, 5);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "Top 5: 405, 348, 219, 99");
}

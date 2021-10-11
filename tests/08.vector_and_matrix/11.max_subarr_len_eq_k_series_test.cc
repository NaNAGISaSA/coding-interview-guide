#include <gtest/gtest.h>

#include "08.vector_and_matrix/11.max_subarr_len_eq_k_series.h"

using namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k_series;

TEST(MAX_SUBARR_LEN_EQ_K_SERIES, MAX_SUBARR_LEN_EQ_K_SERIES_P1_TEST) {
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem1({1, -2, 1, 1, 1}, 0), 3);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem1({1, -2, 1, 1, 1}, 1), 4);
}

TEST(MAX_SUBARR_LEN_EQ_K_SERIES, MAX_SUBARR_LEN_EQ_K_SERIES_P2_TEST) {
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem2({1, -2}), 2);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem2({-1, 0}), 1);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem2({1, -2, 0, -1, 1, 1}), 5);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem2({1, 1, 0, -1, 0}), 4);
}

TEST(MAX_SUBARR_LEN_EQ_K_SERIES, MAX_SUBARR_LEN_EQ_K_SERIES_P3_TEST) {
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem3({1, 0}), 2);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem3({1, 1}), 0);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem3({1, 1, 0, 0, 1, 1}), 4);
}

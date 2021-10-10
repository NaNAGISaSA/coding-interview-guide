#include <gtest/gtest.h>

#include "08.vector_and_matrix/11.max_subarr_len_eq_k_series.h"

using namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k_series;

TEST(MAX_SUBARR_LEN_EQ_K_SERIES, MAX_SUBARR_LEN_EQ_K_SERIES_P1_TEST) {
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem1({1, -2, 1, 1, 1}, 0), 3);
    ASSERT_EQ(MaxSubarrLenEqKSeries::problem1({1, -2, 1, 1, 1}, 1), 4);
}

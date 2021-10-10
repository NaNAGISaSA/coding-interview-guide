#include <gtest/gtest.h>

#include "08.vector_and_matrix/10.max_subarr_len_eq_k.h"

using namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k;

TEST(MAX_SUBARR_LEN_EQ_K, MAX_SUBARR_LEN_EQ_K_EXAMPLE_TEST) {
    ASSERT_EQ(MaxSubarrLenEqK::max_len({1, 2, 1, 1, 1}, 3), 3);
    ASSERT_EQ(MaxSubarrLenEqK::max_len({1, 2, 1, 1, 1, 2, 3, 1}, 6), 5);
}

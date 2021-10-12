#include <gtest/gtest.h>

#include "08.vector_and_matrix/12.max_subarr_len_le_k.h"

using namespace coding_interview_guide::vector_and_matrix::max_subarr_len_le_k;

TEST(MAX_SUBARR_LEN_LE_K, MAX_SUBARR_LEN_LE_K_EXAMPLE_TEST) {
    ASSERT_EQ(MaxSubarrLenLeK::max_len({3, -2, -4, 0, 6}, -2), 4);
    ASSERT_EQ(MaxSubarrLenLeK::max_len({3, -2, 4, 2, 6}, 4), 3);
}

#include <gtest/gtest.h>

#include "08.vector_and_matrix/08.max_inter_subarr_len.h"

using namespace coding_interview_guide::vector_and_matrix::max_inter_subarr_len;

TEST(MAX_INTER_SUBARR_LEN, MAX_INTER_SUBARR_LEN_EXAMPLE_TEST) {
    ASSERT_EQ(MaxInterSubarrLen::max_len({5, 5, 3, 2, 6, 4, 3}), 5U);
    ASSERT_EQ(MaxInterSubarrLen::max_len({1, 4, 2}), 1U);
}

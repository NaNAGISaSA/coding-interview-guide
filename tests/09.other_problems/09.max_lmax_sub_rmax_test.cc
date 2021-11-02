#include <gtest/gtest.h>

#include "09.other_problems/09.max_lmax_sub_rmax.h"

using namespace coding_interview_guide::other_problems::max_lmax_sub_rmax;

TEST(MAX_LMAX_SUB_RMAX, MAX_LMAX_SUB_RMAX_EXAMPLE_TEST) {
    ASSERT_EQ(MaxLmaxSubRmax::max_value({2, 1}), 1U);
    ASSERT_EQ(MaxLmaxSubRmax::max_value({2, 7, 3, 1, 1}), 6U);
    ASSERT_EQ(MaxLmaxSubRmax::max_value({2, 7, 3, 8, 1, 10}), 8U);
}

TEST(MAX_LMAX_SUB_RMAX, MAX_LMAX_SUB_RMAX_OPT_EXAMPLE_TEST) {
    ASSERT_EQ(MaxLmaxSubRmax::max_value_opt({2, 1}), 1U);
    ASSERT_EQ(MaxLmaxSubRmax::max_value_opt({2, 7, 3, 1, 1}), 6U);
    ASSERT_EQ(MaxLmaxSubRmax::max_value_opt({2, 7, 3, 8, 1, 10}), 8U);
}

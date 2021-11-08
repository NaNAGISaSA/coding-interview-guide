#include <gtest/gtest.h>

#include "09.other_problems/15.min_no_possible_sum.h"

using namespace coding_interview_guide::other_problems::min_no_possible_sum;

TEST(MIN_NO_POSSIBLE_SUM, MIN_NO_POSSIBLE_SUM_EXAMPLE_TEST) {
    ASSERT_EQ(MinNoPossibleSum::min_value({2, 3, 9}), 4);
    ASSERT_EQ(MinNoPossibleSum::min_value({1, 2, 4}), 8);
}

TEST(MIN_NO_POSSIBLE_SUM, MIN_NO_POSSIBLE_SUM_ADVANCE_EXAMPLE_TEST) {
    ASSERT_EQ(MinNoPossibleSum::min_value_adv({1, 2, 5}), 4);
    ASSERT_EQ(MinNoPossibleSum::min_value_adv({1, 2, 2}), 6);
}

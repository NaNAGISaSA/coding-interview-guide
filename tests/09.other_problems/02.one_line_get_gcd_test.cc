#include <gtest/gtest.h>

#include "09.other_problems/02.one_line_get_gcd.h"

using namespace coding_interview_guide::other_problems::one_line_get_gcd;

TEST(ONE_LINE_GET_GCD, ONE_LINE_GET_GCD_EXAMPLE_TEST) {
    ASSERT_EQ(GetGCD::get(6, 9), 3);
    ASSERT_EQ(GetGCD::get(2, 3), 1);
}

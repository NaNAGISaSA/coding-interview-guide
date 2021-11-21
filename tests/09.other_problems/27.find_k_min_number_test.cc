#include <gtest/gtest.h>

#include "09.other_problems/27.find_k_min_number.h"

using namespace coding_interview_guide::other_problems::find_k_min_number;

TEST(FIND_K_MIN_NUMBER, FIND_K_MIN_NUMBER_EXAMPLE_TEST) {
    ASSERT_EQ(FindKMinNumber::find_number({1, 2, 3, 4, 5}, {3, 4, 5}, 2), 2);
    ASSERT_EQ(FindKMinNumber::find_number({1, 2, 3, 4, 5}, {3, 4, 5}, 5), 4);
    ASSERT_EQ(FindKMinNumber::find_number({1, 2, 3, 4, 5}, {3, 4, 5}, 7), 5);
    ASSERT_EQ(FindKMinNumber::find_number({1, 2, 3}, {3, 4, 5, 6}, 3), 3);
    ASSERT_EQ(FindKMinNumber::find_number({1, 2, 3}, {3, 4, 5, 6}, 5), 4);
    ASSERT_EQ(FindKMinNumber::find_number({1, 2, 3}, {3, 4, 5, 6}, 6), 5);
}

#include <gtest/gtest.h>

#include "09.other_problems/16.min_num_get_all_range.h"

using namespace coding_interview_guide::other_problems::min_num_get_all_range;

TEST(MIN_NUM_GET_ALL_RANGE, MIN_NUM_GET_ALL_RANGE_EXAMPLE_TEST) {
    ASSERT_EQ(MinNumGetAllRange::min_num({2, 1, 7, 3}, 28), 2);
    ASSERT_EQ(MinNumGetAllRange::min_num({3, 1, 1, 26}, 70), 3);
    ASSERT_EQ(MinNumGetAllRange::min_num({}, 28), 5);
}

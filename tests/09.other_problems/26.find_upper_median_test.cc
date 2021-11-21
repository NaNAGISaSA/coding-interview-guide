#include <gtest/gtest.h>

#include "09.other_problems/26.find_upper_median.h"

using namespace coding_interview_guide::other_problems::find_upper_median;

TEST(FIND_UPPER_MEDIAN, FIND_UPPER_MEDIAN_EXAMPLE_TEST) {
    ASSERT_EQ(FindUpperMedian::upper_median({1, 2, 3, 4}, {2, 3, 4, 5}), 3);
    ASSERT_EQ(FindUpperMedian::upper_median({1, 2, 3, 4}, {3, 4, 5, 6}), 3);
    ASSERT_EQ(FindUpperMedian::upper_median({0, 1, 2}, {3, 4, 5}), 2);
}

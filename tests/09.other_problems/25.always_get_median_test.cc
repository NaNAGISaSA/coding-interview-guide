#include <gtest/gtest.h>

#include "09.other_problems/25.always_get_median.h"

using namespace coding_interview_guide::other_problems::median_holder;

TEST(ALWAYS_GET_MEDIAN, ALWAYS_GET_MEDIAN_EXAMPLE_TEST) {
    MedianHolder median_holder;
    median_holder.add_number(2);
    ASSERT_EQ(median_holder.get_median(), 2);
    median_holder.add_number(4);
    ASSERT_EQ(median_holder.get_median(), 3);
    median_holder.add_number(6);
    median_holder.add_number(5);
    median_holder.add_number(5);
    ASSERT_EQ(median_holder.get_median(), 5);
    median_holder.add_number(1);
    ASSERT_EQ(median_holder.get_median(), 4);
}

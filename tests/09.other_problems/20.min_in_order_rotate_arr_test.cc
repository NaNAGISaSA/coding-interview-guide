#include <gtest/gtest.h>

#include "09.other_problems/20.min_in_order_rotate_arr.h"

using namespace coding_interview_guide::other_problems::min_in_order_rotate_arr;

TEST(MIN_IN_ORDER_ROTATE_ARR, MIN_IN_ORDER_ROTATE_ARR_EXAMPLE_TEST) {
    ASSERT_EQ(MinInOrderRotateArr::get_min({3, 1, 3, 3, 3, 3}), 1);
    ASSERT_EQ(MinInOrderRotateArr::get_min({1, 2, 3, 4, 5, 6, 7}), 1);
    ASSERT_EQ(MinInOrderRotateArr::get_min({4, 5, 6, 7, 1, 2, 3}), 1);
}

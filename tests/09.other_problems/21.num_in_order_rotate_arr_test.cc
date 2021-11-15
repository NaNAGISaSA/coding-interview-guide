#include <gtest/gtest.h>

#include "09.other_problems/21.num_in_order_rotate_arr.h"

using namespace coding_interview_guide::other_problems::num_in_order_rotate_arr;

TEST(NUM_IN_ORDER_ROTATE_ARR, NUM_IN_ORDER_ROTATE_ARR_EXAMPLE_TEST) {
    ASSERT_TRUE(NumInOrderRotateArr::has_num({3}, 3));
    ASSERT_TRUE(NumInOrderRotateArr::has_num({3, 1}, 3));
    ASSERT_TRUE(NumInOrderRotateArr::has_num({3, 1, 3, 3, 3, 3, 3}, 1));
    ASSERT_TRUE(NumInOrderRotateArr::has_num({4, 5, 6, 7, 1, 2, 3}, 7));
    ASSERT_FALSE(NumInOrderRotateArr::has_num({3}, 4));
    ASSERT_FALSE(NumInOrderRotateArr::has_num({3, 1}, 2));
    ASSERT_FALSE(NumInOrderRotateArr::has_num({3, 1, 3, 3, 3, 3, 3}, 0));
    ASSERT_FALSE(NumInOrderRotateArr::has_num({4, 5, 6, 7, 1, 2, 3}, 0));
    ASSERT_FALSE(NumInOrderRotateArr::has_num({4, 5, 6, 7, 8, 2, 3}, 10));
}

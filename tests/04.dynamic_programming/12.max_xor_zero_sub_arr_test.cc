#include <gtest/gtest.h>

#include "04.dynamic_programming/12.max_xor_zero_sub_arr.h"

using namespace coding_interview_guide::dynamic_programming::max_xor_zero_sub_arr;

TEST(MAX_XOR_ZERO_SUB_ARR, MAX_XOR_ZERO_SUB_ARR_EXAMPLE_TEST) {
    ASSERT_EQ(MaxXorZeroSubArr::max_number({3, 2, 1, 9, 0, 7, 0, 2, 1, 3}), 4);
    ASSERT_EQ(MaxXorZeroSubArr::max_number_space_opt({3, 2, 1, 9, 0, 7, 0, 2, 1, 3}), 4);
}

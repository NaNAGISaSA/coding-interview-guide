#include <gtest/gtest.h>

#include "08.vector_and_matrix/25.non_exist_min_pos_num.h"

using namespace coding_interview_guide::vector_and_matrix::non_exist_min_pos_num;

TEST(NON_EXIST_MIN_POS_NUM, NON_EXIST_MIN_POS_NUM_EXAMPLE_TEST) {
    ASSERT_EQ(NonExistMinPosNum::pos_num({5, 8, 7, 9}), 1);
    ASSERT_EQ(NonExistMinPosNum::pos_num({5, 8, 1, 3}), 2);
    ASSERT_EQ(NonExistMinPosNum::pos_num({-1, 3, 4, 2}), 1);
    ASSERT_EQ(NonExistMinPosNum::pos_num({1, 3, 4, 2}), 5);
}

#include <gtest/gtest.h>

#include "07.bitwise/06.find_one_count_num.h"

using namespace coding_interview_guide::bitwise::find_one_count_num;

TEST(FIND_ONE_COUNT_NUM, FIND_ONE_COUNT_NUM_EXAMPLE_TEST) {
    ASSERT_EQ(FindOneCountNumber::find({1, 3, 1, 1, 2, 3, 3}, 3), 2);
    ASSERT_EQ(FindOneCountNumber::find({3, 1, 1, 2, 3}, 2), 2);
}

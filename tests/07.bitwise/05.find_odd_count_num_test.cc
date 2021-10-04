#include <gtest/gtest.h>

#include "07.bitwise/05.find_odd_count_num.h"

using namespace coding_interview_guide::bitwise::find_odd_count_num;

TEST(FIND_ODD_COUNT_NUM, FIND_ODD_COUNT_NUM_ONE_EXAMPLE_TEST) {
    ASSERT_EQ(FindOddCountNumber::find_one({1, 2, 3, 1, 1, 2, 1}), 3);
    ASSERT_EQ(FindOddCountNumber::find_one({1, 2, 1}), 2);
}

TEST(FIND_ODD_COUNT_NUM, FIND_ODD_COUNT_NUM_TWO_EXAMPLE_TEST) {
    const auto [a1, a2] = FindOddCountNumber::find_two({1, 2, 3, 1, 1, 1});
    ASSERT_TRUE((a1 == 2 && a2 == 3) || (a1 == 3 && a2 == 2));
    const auto [a3, a4] = FindOddCountNumber::find_two({2, 3});
    ASSERT_TRUE((a3 == 2 && a4 == 3) || (a3 == 3 && a4 == 2));
}

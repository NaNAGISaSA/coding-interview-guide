#include <gtest/gtest.h>

#include "07.bitwise/02.find_bigger_number.h"

using namespace coding_interview_guide::bitwise::find_bigger_number;

TEST(FIND_BIGGER_NUMBER, FIND_BIGGER_NUMBER_EXAMPLE_TEST) {
    ASSERT_EQ(FindBiggerNumber::number(10, 8), 10);
    ASSERT_EQ(FindBiggerNumber::number(-3, -10), -3);
    ASSERT_EQ(FindBiggerNumber::number(10, -10), 10);
    ASSERT_EQ(FindBiggerNumber::number(10, 0), 10);
    ASSERT_EQ(FindBiggerNumber::number(-10, 0), 0);
}

TEST(FIND_BIGGER_NUMBER, FIND_BIGGER_NUMBER_CORRECT_EXAMPLE_TEST) {
    ASSERT_EQ(FindBiggerNumber::number_correct(10, 8), 10);
    ASSERT_EQ(FindBiggerNumber::number_correct(-3, -10), -3);
    ASSERT_EQ(FindBiggerNumber::number_correct(10, -10), 10);
    ASSERT_EQ(FindBiggerNumber::number_correct(10, 0), 10);
    ASSERT_EQ(FindBiggerNumber::number_correct(-10, 0), 0);
}

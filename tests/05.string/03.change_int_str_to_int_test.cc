#include <gtest/gtest.h>

#include "05.string/03.change_int_str_to_int.h"

using namespace coding_interview_guide::string::change_int_str_to_int;

TEST(CHANGE_INT_STR_TO_INT, CHANGE_INT_STR_TO_INT_EXAMPLE_TEST) {
    ASSERT_EQ(ChangeIntStrToInt::number("123"), 123);
    ASSERT_EQ(ChangeIntStrToInt::number("023"), 0);
    ASSERT_EQ(ChangeIntStrToInt::number("0"), 0);
    ASSERT_EQ(ChangeIntStrToInt::number("2147483647"), 2147483647);
    ASSERT_EQ(ChangeIntStrToInt::number("2147483648"), 0);
    ASSERT_EQ(ChangeIntStrToInt::number("21474836480"), 0);
    ASSERT_EQ(ChangeIntStrToInt::number("-2147483648"), -2147483648);
    ASSERT_EQ(ChangeIntStrToInt::number("-2147483649"), 0);
    ASSERT_EQ(ChangeIntStrToInt::number("-123"), -123);
}

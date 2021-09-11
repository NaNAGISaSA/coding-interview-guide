#include <gtest/gtest.h>

#include "05.string/03.change_int_str_to_int.h"

using namespace coding_interview_guide::string::change_int_str_to_int;

TEST(CHANGE_INT_STR_TO_INT, CHANGE_INT_STR_TO_INT_EXAMPLE_TEST) {
    std::string str1("123"), str2("023"), str3("A13"), str4("0"), str5("2147483647"), str6("2147483648"),
        str7("21474836480"), str8("-2147483648"), str9("-2147483649"), str10("-123");
    ASSERT_EQ(ChangeIntStrToInt::number(str1), 123);
    ASSERT_EQ(ChangeIntStrToInt::number(str2), 0);
    ASSERT_EQ(ChangeIntStrToInt::number(str3), 0);
    ASSERT_EQ(ChangeIntStrToInt::number(str4), 0);
    ASSERT_EQ(ChangeIntStrToInt::number(str5), 2147483647);
    ASSERT_EQ(ChangeIntStrToInt::number(str6), 0);
    ASSERT_EQ(ChangeIntStrToInt::number(str7), 0);
    ASSERT_EQ(ChangeIntStrToInt::number(str8), -2147483648);
    ASSERT_EQ(ChangeIntStrToInt::number(str9), 0);
    ASSERT_EQ(ChangeIntStrToInt::number(str10), -123);
}

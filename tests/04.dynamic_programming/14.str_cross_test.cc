#include <gtest/gtest.h>

#include "04.dynamic_programming/14.str_cross.h"

using namespace coding_interview_guide::dynamic_programming::str_cross;

TEST(STR_CROSS, STR_CROSS_EXAMPLE_TEST) {
    std::string str1("AB"), str2("12"), aim1("AB12"), aim2("A12B");
    ASSERT_TRUE(StrCross::is_corss(str1, str2, aim1));
    ASSERT_TRUE(StrCross::is_corss(str1, str2, aim2));
    std::string str3("2019"), str4("9102"), aim3("22001199"), aim4("20911902");
    ASSERT_FALSE(StrCross::is_corss(str3, str4, aim3));
    ASSERT_TRUE(StrCross::is_corss(str3, str4, aim4));
    std::string str5("20"), str6(""), aim5("20");
    ASSERT_TRUE(StrCross::is_corss(str5, str6, aim5));
}

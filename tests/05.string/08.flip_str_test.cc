#include <gtest/gtest.h>

#include "05.string/08.flip_str.h"

using namespace coding_interview_guide::string::flip_str;

TEST(FLIP_STR, FLIP_STR_Q1_EXAMPLE_TEST) {
    std::string str1("dog loves pig"), str2("i'm a student"), str3("  a ab  bcd cde def  ");
    FlipStr::flip_str1(str1);
    FlipStr::flip_str1(str2);
    FlipStr::flip_str1(str3);
    ASSERT_EQ(str1, "pig loves dog");
    ASSERT_EQ(str2, "student a i'm");
    ASSERT_EQ(str3, "  def cde bcd  ab a  ");
}

TEST(FLIP_STR, FLIP_STR_Q2_EXAMPLE_TEST) {
    std::string str1("abcdefg"), str2("abcde");
    FlipStr::flip_str2(str1, 5);
    ASSERT_EQ(str1, "fgabcde");
    FlipStr::flip_str2(str2, 5);
    ASSERT_EQ(str2, "abcde");
    FlipStr::flip_str2(str2, 2);
    ASSERT_EQ(str2, "cdeab");
}

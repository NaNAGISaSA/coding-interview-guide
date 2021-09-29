#include <gtest/gtest.h>

#include "05.string/22.str_regex.h"

using namespace coding_interview_guide::string::str_regex;

TEST(STR_REGEX, STR_REGEX_EXAMPLE_TEST) {
    ASSERT_TRUE(StrRegex::match("abc", "abc"));
    ASSERT_TRUE(StrRegex::match("abc", "a.c"));
    ASSERT_TRUE(StrRegex::match("abcd", ".*"));
    ASSERT_TRUE(StrRegex::match("ab", "a*b"));
    ASSERT_TRUE(StrRegex::match("aaaad", "aa*d"));
    ASSERT_FALSE(StrRegex::match("", "..*"));
}

TEST(STR_REGEX, STR_REGEX_DP_EXAMPLE_TEST) {
    ASSERT_TRUE(StrRegex::match_dp("abc", "abc"));
    ASSERT_TRUE(StrRegex::match_dp("abc", "a.c"));
    ASSERT_TRUE(StrRegex::match_dp("abcd", ".*"));
    ASSERT_TRUE(StrRegex::match_dp("ab", "a*b"));
    ASSERT_TRUE(StrRegex::match_dp("aaaad", "aa*d"));
    ASSERT_FALSE(StrRegex::match_dp("", "..*"));
}

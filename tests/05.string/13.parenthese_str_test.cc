#include <gtest/gtest.h>

#include "05.string/13.parenthese_str.h"

using namespace coding_interview_guide::string::parenthese_str;

TEST(PARENTHESE_STR, PARENTHESE_STR_EXAMPLE_TEST) {
    ASSERT_TRUE(ParentheseStr::is_valid("()"));
    ASSERT_TRUE(ParentheseStr::is_valid("(()())"));
    ASSERT_TRUE(ParentheseStr::is_valid("(())"));
    ASSERT_FALSE(ParentheseStr::is_valid("())"));
    ASSERT_FALSE(ParentheseStr::is_valid("(()"));
    ASSERT_FALSE(ParentheseStr::is_valid("((a))"));
}

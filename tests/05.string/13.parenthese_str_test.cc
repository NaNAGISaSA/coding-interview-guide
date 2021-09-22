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

TEST(PARENTHESE_STR, GET_PARENTHESE_STR_EXAMPLE_TEST) {
    ASSERT_EQ(ParentheseStr::max_valid_str("(()())"), 6);
    ASSERT_EQ(ParentheseStr::max_valid_str("(())"), 4);
    ASSERT_EQ(ParentheseStr::max_valid_str("())"), 2);
    ASSERT_EQ(ParentheseStr::max_valid_str("()(())"), 6);
    ASSERT_EQ(ParentheseStr::max_valid_str("()(()()("), 4);
}

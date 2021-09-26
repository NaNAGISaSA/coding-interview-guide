#include <gtest/gtest.h>

#include "05.string/19.rotate_trans_str.h"

using namespace coding_interview_guide::string::rotate_trans_str;

TEST(ROTATE_TRANS_STR, ROTATE_TRANS_STR_EXAMPLE_TEST) {
    ASSERT_TRUE(RotateTransStr::is_rotate_trans_str("abcd", "dbac"));
    ASSERT_TRUE(RotateTransStr::is_rotate_trans_str("IJz", "JzI"));
    ASSERT_FALSE(RotateTransStr::is_rotate_trans_str("abcd", "cadb"));
    ASSERT_FALSE(RotateTransStr::is_rotate_trans_str("abcd", "cacb"));
}

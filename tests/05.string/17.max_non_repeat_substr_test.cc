#include <gtest/gtest.h>

#include "05.string/17.max_non_repeat_substr.h"

using namespace coding_interview_guide::string::max_non_repeat_substr;

TEST(MAX_NON_REPEAT_SUBSTR, MAX_NON_REPEAT_SUBSTR_EXAMPLE_TEST) {
    ASSERT_EQ(MaxNonRepeatSubstr::max_length("abcd"), 4);
    ASSERT_EQ(MaxNonRepeatSubstr::max_length("abcaacedb"), 5);
}

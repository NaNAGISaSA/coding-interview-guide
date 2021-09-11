#include <gtest/gtest.h>

#include "05.string/02.is_rotating_word.h"

using namespace coding_interview_guide::string::is_rotating_word;

TEST(IS_ROTATING_WORD, IS_ROTATING_WORD_EXAMPLE_TEST) {
    ASSERT_TRUE(IsRotatingWord::rotating("12345", "34512"));
    ASSERT_TRUE(IsRotatingWord::rotating("abc", "cab"));
    ASSERT_TRUE(IsRotatingWord::rotating("", ""));
    ASSERT_FALSE(IsRotatingWord::rotating("12345", "345123"));
    ASSERT_FALSE(IsRotatingWord::rotating("12345", "13542"));
}

TEST(IS_ROTATING_WORD, IS_ROTATING_WORD_METHOD_TWO_EXAMPLE_TEST) {
    ASSERT_TRUE(IsRotatingWord::rotating_method2("12345", "34512"));
    ASSERT_TRUE(IsRotatingWord::rotating_method2("abc", "cab"));
    ASSERT_TRUE(IsRotatingWord::rotating_method2("", ""));
    ASSERT_FALSE(IsRotatingWord::rotating_method2("12345", "345123"));
    ASSERT_FALSE(IsRotatingWord::rotating_method2("12345", "13542"));
}

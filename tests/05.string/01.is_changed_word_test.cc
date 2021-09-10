#include <gtest/gtest.h>

#include "05.string/01.is_changed_word.h"

using namespace coding_interview_guide::string::is_changed_word;

TEST(IS_CHANGED_WORD, IS_CHANGED_WORD_EXAMPLE_TEST) {
    ASSERT_TRUE(IsChangedWord::is_changed_word("123", "312"));
    ASSERT_TRUE(IsChangedWord::is_changed_word("1231ab", "31ba12"));
    ASSERT_FALSE(IsChangedWord::is_changed_word("1231", "312"));
    ASSERT_FALSE(IsChangedWord::is_changed_word("123", "3124"));
}

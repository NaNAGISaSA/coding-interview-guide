#include <gtest/gtest.h>

#include "05.string/21.min_palindrome_cut_num.h"

using namespace coding_interview_guide::string::min_palindrome_cut_num;

TEST(MIN_PALINDROME_CUT_NUM, MIN_PALINDROME_CUT_NUM_EXAMPLE_TEST) {
    ASSERT_EQ(MinPalindromeCutNum::min_num("AA"), 0U);
    ASSERT_EQ(MinPalindromeCutNum::min_num("ABA"), 0U);
    ASSERT_EQ(MinPalindromeCutNum::min_num("ACDCDCDAD"), 2U);
    ASSERT_EQ(MinPalindromeCutNum::min_num("ABCDE"), 4U);
}

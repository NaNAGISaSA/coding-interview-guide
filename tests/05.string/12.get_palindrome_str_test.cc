#include <gtest/gtest.h>

#include "05.string/12.get_palindrome_str.h"

using namespace coding_interview_guide::string::get_palindrome_str;

TEST(GET_PALINDROME_STR, GET_PALINDROME_STR_EXAMPLE_TEST) {
    std::string result1 = AddMinCharToGetPalindromeStr::get_palindrome_str("ab");
    ASSERT_TRUE(result1 == "aba" || result1 == "bab");
    std::string result2 = AddMinCharToGetPalindromeStr::get_palindrome_str("abcda");
    ASSERT_TRUE(result2 == "abcdcba" || result2 == "adcbcda");
    ASSERT_TRUE(AddMinCharToGetPalindromeStr::get_palindrome_str("aba") == "aba");
    ASSERT_TRUE(AddMinCharToGetPalindromeStr::get_palindrome_str("abbac") == "cabbac");
}

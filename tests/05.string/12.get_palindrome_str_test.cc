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

TEST(GET_PALINDROME_STR, GET_PALINDROME_STR_ADVANCE_EXAMPLE_TEST) {
    std::string result1 = AddMinCharToGetPalindromeStr::get_palindrome_str_advanced("A1B21C", "121");
    ASSERT_TRUE(result1 == "CA1B2B1AC" || result1 == "AC1B2B1CA");
    std::string result2 = AddMinCharToGetPalindromeStr::get_palindrome_str_advanced("A12B1C", "121");
    ASSERT_TRUE(result2 == "CA1B2B1AC" || result2 == "AC1B2B1CA");
    std::string result3 = AddMinCharToGetPalindromeStr::get_palindrome_str_advanced("12AB21", "12B21");
    ASSERT_TRUE(result3 == "12ABA21");
    std::string result4 = AddMinCharToGetPalindromeStr::get_palindrome_str_advanced("1A221B", "1221");
    ASSERT_TRUE(result4 == "B1A22A1B");
}

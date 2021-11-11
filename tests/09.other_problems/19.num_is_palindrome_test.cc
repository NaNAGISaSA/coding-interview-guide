#include <gtest/gtest.h>

#include "09.other_problems/19.num_is_palindrome.h"

using namespace coding_interview_guide::other_problems::num_is_palindrome;

TEST(NUM_IS_PALINDROME, NUM_IS_PALINDROME_EXAMPLE_TEST) {
    ASSERT_TRUE(NumIsPalindrome::is_palindrome(0));
    ASSERT_TRUE(NumIsPalindrome::is_palindrome(-2));
    ASSERT_TRUE(NumIsPalindrome::is_palindrome(23455432));
    ASSERT_TRUE(NumIsPalindrome::is_palindrome(-2345432));
    ASSERT_FALSE(NumIsPalindrome::is_palindrome(-2345532));
    ASSERT_FALSE(NumIsPalindrome::is_palindrome(23454532));
}

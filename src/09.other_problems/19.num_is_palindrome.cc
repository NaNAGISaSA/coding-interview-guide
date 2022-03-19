#include <limits>

#include "09.other_problems/19.num_is_palindrome.h"

namespace coding_interview_guide::other_problems::num_is_palindrome {

bool NumIsPalindrome::is_palindrome(int number) {
    if (number < 0) {
        // overflow caution!
        if (number == std::numeric_limits<int>::min()) {
            return false;
        }
        number *= -1;
    }
    int num = 1;
    while (number / num >= 10) {
        num *= 10;
    }
    while (number != 0) {
        if (number / num != number % 10) {
            return false;
        }
        number = number % num / 10;
        num /= 100;
    }
    return true;
}

}  // namespace coding_interview_guide::other_problems::num_is_palindrome

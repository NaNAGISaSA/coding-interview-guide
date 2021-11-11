#include <cmath>
#include <iostream>

#include "09.other_problems/18.one_appear_count.h"

namespace coding_interview_guide::other_problems::one_appear_count {

unsigned int OneAppearCount::count(unsigned int num) {
    auto get_count = [](unsigned int number) {
        unsigned int res = 0;
        while (number != 0) {
            if (number % 10 == 1) {
                ++res;
            }
            number /= 10;
        }
        return res;
    };
    unsigned int result = 0;
    for (unsigned int i = 1; i <= num; ++i) {
        result += get_count(i);
    }
    return result;
}

unsigned int OneAppearCount::count_opt(unsigned int num) {
    if (num == 0) {
        return 0U;
    }
    auto get_digit_num = [](int number) {
        unsigned int digit_num = 0U;
        while (number != 0) {
            number /= 10;
            ++digit_num;
        }
        return digit_num;
    };
    unsigned int digit_num = get_digit_num(num);
    if (digit_num == 1) {
        return 1U;
    }
    unsigned int pow_num = static_cast<unsigned int>(std::pow(10, --digit_num));
    unsigned int head_num = num / pow_num;
    unsigned int head = head_num == 1 ? num % pow_num + 1 : pow_num;
    unsigned int other = head_num * digit_num * (pow_num / 10);
    return head + other + count_opt(num % pow_num);
}

}  // namespace coding_interview_guide::other_problems::one_appear_count

#include "09.other_problems/03.factorial_problems.h"

namespace coding_interview_guide::other_problems::factorial_problems {

unsigned int FactorialProblems::zero_number(unsigned int number) {
    unsigned int result = 0U, curr_num = 5U;
    while (curr_num <= number) {
        result += number / curr_num;
        curr_num *= 5U;
    }
    return result;
}

unsigned int FactorialProblems::binary_number(unsigned int number) {
    unsigned int result = 0, curr_num = 2;
    while (curr_num <= number) {
        result += number / curr_num;
        curr_num <<= 1U;
    }
    return result;
}

// 有如下性质：对于一个数字N，如果其包含的1的个数为m，其阶乘包含2的个数为k，则：N = k + m
unsigned int FactorialProblems::binary_number_opt(unsigned int number) {
    unsigned int one_number = 0U, copy_num = number;
    do {
        if ((copy_num & 1U) == 1U) {
            ++one_number;
        }
        copy_num >>= 1;
    } while (copy_num != 0U);
    return number - one_number;
}

}  // namespace coding_interview_guide::other_problems::factorial_problems

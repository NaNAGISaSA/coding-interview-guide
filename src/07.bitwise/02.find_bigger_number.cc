#include "07.bitwise/02.find_bigger_number.h"

/*
NOTE: In c++, it is a undefined behavior for left|right shift a negative number!
*/
namespace coding_interview_guide::bitwise::find_bigger_number {

int FindBiggerNumber::number(int a, int b) {
    int sign = ((a - b) >> 31) & 1;  // bug: a- b may be overflow
    return a * (1 - sign) + b * sign;
}

int FindBiggerNumber::number_correct(int a, int b) {
    int sign_a = (a >> 31) & 1;
    int sign_b = (b >> 31) & 1;
    int sign_c = ((a - b) >> 31) & 1;
    int diff_sign = sign_a ^ sign_b;
    return diff_sign * (sign_a * b + sign_b * a) + (1 - diff_sign) * (sign_c * b + (1 - sign_c) * a);
}

}  // namespace coding_interview_guide::bitwise::find_bigger_number

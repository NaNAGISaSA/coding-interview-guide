#include "07.bitwise/03.arithmetic_operations.h"

/*
NOTE: In c++, it is a undefined behavior for left|right shift a negative number!
*/
namespace coding_interview_guide::bitwise::arithmetic_operations {

int ArithmeticOperations::add(int a, int b) {
    int sum = a;
    while (b != 0) {
        sum = a ^ b;
        b = (a & b) << 1;
        a = sum;
    }
    return sum;
}

int ArithmeticOperations::sub(int a, int b) {
    return add(a, add(~b, 1));
}

int ArithmeticOperations::multi(int a, int b) {
    int result = 0;
    int sign_a = (a >> 31) & 1, sign_b = (b >> 31) & 1;
    if (sign_a) {
        a = add(~a, 1);
    }
    if (sign_b) {
        b = add(~b, 1);
    }
    while (b != 0) {
        if (b & 1) {
            result = add(result, a);
        }
        a <<= 1;
        b >>= 1;
    }
    return sign_a == sign_b ? result : add(~result, 1);
}

// int ArithmeticOperations::div(int a, int b);

}  // namespace coding_interview_guide::bitwise::arithmetic_operations

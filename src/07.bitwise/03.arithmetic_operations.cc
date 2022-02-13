#include <limits>

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
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a == std::numeric_limits<int>::min() || b == std::numeric_limits<int>::min()) {
        return a == 1 || b == 1 ? std::numeric_limits<int>::min() : -1;
    }
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

int ArithmeticOperations::div(int a, int b) {
    auto divide = [](int a, int b) {
        int result = 0;
        int sign_a = (a >> 31) & 1, sign_b = (b >> 31) & 1;
        if (sign_a) {
            a = add(~a, 1);
        }
        if (sign_b) {
            b = add(~b, 1);
        }
        for (int i = 31; i >= 0; i = sub(i, 1)) {
            if ((a >> i) >= b) {
                result |= (1 << i);
                a = sub(a, b << i);
            }
        }
        return sign_a == sign_b ? result : add(~result, 1);
    };

    if (a == std::numeric_limits<int>::min() && b == std::numeric_limits<int>::min()) {
        return 1;
    } else if (a == std::numeric_limits<int>::min()) {
        int internal = divide(add(a, 1), b);
        return add(internal, divide(sub(a, multi(internal, b)), b));
    } else if (b == std::numeric_limits<int>::min()) {
        return 0;
    } else {
        return divide(a, b);
    }
}

}  // namespace coding_interview_guide::bitwise::arithmetic_operations

#include "07.bitwise/04.number_of_one.h"

namespace coding_interview_guide::bitwise::number_of_one {

unsigned int NumberOfOne::count_m1(int a) {
    unsigned int result = 0U;
    for (int i = 0; i < 32; ++i) {
        if ((a >> i) & 1) {
            ++result;
        }
    }
    return result;
}

unsigned int NumberOfOne::count_m2(int a) {
    unsigned int result = 0U;
    while (a != 0) {
        a &= (a - 1);
        ++result;
    }
    return result;
}

unsigned int NumberOfOne::count_m3(int a) {
    unsigned int result = 0U;
    while (a != 0) {
        a -= a & (~a + 1);
        ++result;
    }
    return result;
}

}  // namespace coding_interview_guide::bitwise::number_of_one

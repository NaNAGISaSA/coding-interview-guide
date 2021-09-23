#include "05.string/15.binary_str_number.h"

namespace coding_interview_guide::string::binary_str_number {

unsigned long BinaryStrNumber::get_number(unsigned int number) {
    if (number <= 2L) {
        return number;
    }
    unsigned long pre1 = 1L, pre2 = 2L, current = 0L;
    for (unsigned int i = 3; i <= number; ++i) {
        current = pre1 + pre2;
        pre1 = pre2;
        pre2 = current;
    }
    return current;
}

}  // namespace coding_interview_guide::string::binary_str_number

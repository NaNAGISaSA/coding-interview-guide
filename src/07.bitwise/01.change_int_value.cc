#include "07.bitwise/01.change_int_value.h"

namespace coding_interview_guide::bitwise::change_int_value {

void SwapValue::swap(int& a, int& b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

}  // namespace coding_interview_guide::bitwise::change_int_value

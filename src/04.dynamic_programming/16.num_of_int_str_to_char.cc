#include "04.dynamic_programming/16.num_of_int_str_to_char.h"

namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char {

unsigned long IntStrToChar::number(const std::string& str) {
    if (str.size() == 0) {
        return 0;
    }
    unsigned long pre = 1UL, swap = 0UL;
    unsigned long current = str[0] == '0' ? 0UL : 1UL;
    for (size_t i = 1; i < str.size(); ++i) {
        swap = current;
        if (str[i] == '0') {
            current = (str[i - 1] == '1' || str[i - 1] == '2') ? pre : 0UL;
        } else {
            if (str[i - 1] == '1' || (str[i - 1] == '2' && !(str[i] == '7' || str[i] == '8' || str[i] == '9'))) {
                current += pre;
            }
        }
        pre = swap;
    }
    return current;
}

}  // namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char

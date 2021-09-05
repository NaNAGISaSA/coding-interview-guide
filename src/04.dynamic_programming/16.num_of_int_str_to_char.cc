#include "04.dynamic_programming/16.num_of_int_str_to_char.h"

namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char {

unsigned long IntStrToChar::number(const std::string& str) {
    if (str[0] == '0') {
        return 0L;
    }
    if (str.size() <= 1) {
        return str.size();
    }

    unsigned long pre_one = 1UL, swap = 0UL, current = 1UL;
    if (str[1] == '0') {
        if (str[0] != '1' && str[0] != '2') {
            return 0L;
        }
    } else if (str[0] == '1' || (str[0] == '2' && !(str[1] == '7' || str[1] == '8' || str[1] == '9'))) {
        current = 2L;
    }

    for (size_t i = 2; i < str.size(); ++i) {
        swap = current;
        if (str[i] == '0') {
            if (str[i - 1] != '1' && str[i - 1] != '2') {
                return 0L;
            }
            current = pre_one;
        } else {
            if (str[i - 1] == '1' || (str[i - 1] == '2' && !(str[i] == '7' || str[i] == '8' || str[i] == '9'))) {
                current += pre_one;
            }
        }
        pre_one = swap;
    }
    return current;
}

}  // namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char

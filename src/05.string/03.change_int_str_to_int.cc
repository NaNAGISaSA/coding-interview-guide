#include <cmath>
#include <limits>

#include "05.string/03.change_int_str_to_int.h"

namespace coding_interview_guide::string::change_int_str_to_int {

int ChangeIntStrToInt::number(const std::string& str) {
    if (str.size() == 0) {
        return 0;
    }
    size_t str_size = str.size();
    auto is_valid = [&str_size, &str]() {
        if (str[0] == '-' && (str_size == 1 || str[1] == '0')) {
            return false;
        }
        if (str[0] == '0' && str_size > 1) {
            return false;
        }
        if (str[0] == '-' && str_size > std::to_string(std::numeric_limits<int>::min()).size()) {
            return false;
        }
        if (str[0] != '-' && str_size > std::to_string(std::numeric_limits<int>::max()).size()) {
            return false;
        }
        return true;
    };
    if (!is_valid()) {
        return 0;
    }
    // TODO: rewrite the following code only using int
    long result = 0L;
    for (size_t i = 1; i < str_size; ++i) {
        result = result * 10 + (str[i] - '0');
    }
    if (str[0] == '-') {
        result *= -1;
    } else {
        result += (str[0] - '0') * static_cast<long>(std::pow(10, str_size - 1));
    }
    return result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min() ?
               0 :
               static_cast<int>(result);
}

}  // namespace coding_interview_guide::string::change_int_str_to_int

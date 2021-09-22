#include <algorithm>
#include <vector>

#include "05.string/13.parenthese_str.h"

namespace coding_interview_guide::string::parenthese_str {

bool ParentheseStr::is_valid(const std::string& str) {
    long count = 0L;
    for (const auto& character : str) {
        if (character != '(' && character != ')') {
            return false;
        }
        count += character == '(' ? 1L : -1L;
        if (count < 0L) {
            return false;
        }
    }
    return count == 0L;
}

size_t ParentheseStr::max_valid_str(const std::string& str) {
    if (str.size() == 0) {
        return 0;
    }
    std::vector<size_t> dp_vec(str.size(), 0);
    size_t max_value = 0;
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] == ')') {
            size_t pre_index = i - 1 - dp_vec[i - 1];
            if (pre_index < i && str[pre_index] == '(') {
                dp_vec[i] = 2 + dp_vec[i - 1] + (pre_index > 0 ? dp_vec[pre_index - 1] : 0);
                max_value = std::max(max_value, dp_vec[i]);
            }
        }
    }
    return max_value;
}

}  // namespace coding_interview_guide::string::parenthese_str

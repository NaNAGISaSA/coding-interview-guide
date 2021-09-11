#include <tuple>

#include "05.string/04.statistics_str.h"

namespace coding_interview_guide::string::statistics_str {

std::string StatisticsStr::convert(const std::string& str) {
    if (str.size() == 0) {
        return "";
    }
    std::string result("");
    char current_char = str[0];
    unsigned int count = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        if (current_char == str[i]) {
            ++count;
        } else {
            result = result + current_char + "_" + std::to_string(count) + "_";
            count = 1;
            current_char = str[i];
        }
    }
    return result + current_char + "_" + std::to_string(count);
}

char StatisticsStr::revert(const std::string& str, size_t index) {
    if (str.size() == 0) {
        return static_cast<char>(0);
    }
    char current_char = str[0];
    size_t first_index = 0, next_index = 1;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == '_') {
            if (first_index >= next_index) {
                next_index = i;
                unsigned long char_number = std::stoul(str.substr(first_index + 1, next_index));
                if (index >= char_number) {
                    index -= std::stoul(str.substr(first_index + 1, next_index));
                } else {
                    return current_char;
                }
            } else {
                first_index = i;
                current_char = str[i - 1];
            }
        }
    }
    return index >= std::stoul(str.substr(first_index + 1)) ? static_cast<char>(0) : str[first_index - 1];
}

}  // namespace coding_interview_guide::string::statistics_str

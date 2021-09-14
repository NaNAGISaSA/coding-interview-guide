#include "05.string/07.adjust_and_replace_str.h"

namespace coding_interview_guide::string::adjust_and_replace_str {

void AdjustStr::adjust_str1(std::vector<char>& vec) {
    size_t left_len = 0, blank_num = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == '\0') {
            break;
        }
        ++left_len;
        if (vec[i] == ' ') {
            ++blank_num;
        }
    }
    if (left_len == 0) {
        return;
    }
    size_t adjust_len = left_len + 2 * blank_num;
    for (size_t i = left_len - 1; i < left_len; --i) {
        if (vec[i] == ' ') {
            vec[adjust_len - 1] = '0';
            vec[adjust_len - 2] = '2';
            vec[adjust_len - 3] = '%';
            adjust_len -= 3;
        } else {
            vec[adjust_len - 1] = vec[i];
            --adjust_len;
        }
    }
}

void AdjustStr::adjust_str2(std::vector<char>& vec) {
    size_t index = vec.size() - 1;
    for (size_t i = index; i <= vec.size() - 1; --i) {
        if (vec[i] != '*') {
            vec[index--] = vec[i];
        }
    }
    if (index <= vec.size() - 1) {
        for (size_t i = index; i <= index; --i) {
            vec[i] = '*';
        }
    }
}

}  // namespace coding_interview_guide::string::adjust_and_replace_str

#include "05.string/08.flip_str.h"

namespace coding_interview_guide::string::flip_str {

namespace {
void reverse(std::string& str, size_t start, size_t end) {
    char tmp;
    while (start < end) {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        ++start;
        --end;
    }
}
}  // namespace

void FlipStr::flip_str1(std::string& str) {
    if (str.size() == 0) {
        return;
    }
    reverse(str, 0, str.size() - 1);
    size_t start = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            if (i != 0) {
                reverse(str, start, i - 1);
            }
            start = i + 1;
        }
    }
    if (str[str.size() - 1] != ' ') {
        reverse(str, start, str.size() - 1);
    }
}

void FlipStr::flip_str2(std::string& str, size_t size) {
    if (str.size() == 0 || str.size() <= size) {
        return;
    }
    reverse(str, 0, size - 1);
    reverse(str, size, str.size() - 1);
    reverse(str, 0, str.size() - 1);
}

}  // namespace coding_interview_guide::string::flip_str
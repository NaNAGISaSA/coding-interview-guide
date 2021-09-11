#include "05.string/02.is_rotating_word.h"

namespace coding_interview_guide::string::is_rotating_word {

bool IsRotatingWord::rotating(const std::string& str1, const std::string& str2) {
    size_t str1_size = str1.size();
    if (str1_size != str2.size()) {
        return false;
    }
    for (size_t i = 0; i < str1_size; ++i) {
        if (str1[i] == str2[0] && str1.substr(i) == str2.substr(0, str1_size - i) &&
            str1.substr(0, i) == str2.substr(str1_size - i)) {
            return true;
        }
    }
    return str1_size == 0 ? true : false;
}

bool IsRotatingWord::rotating_method2(const std::string& str1, const std::string& str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    std::string double_str = str1 + str1;
    return double_str.find(str2) != std::string::npos;
}

}  // namespace coding_interview_guide::string::is_rotating_word

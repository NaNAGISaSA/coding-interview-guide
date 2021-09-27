#include "05.string/22.str_regex.h"

namespace coding_interview_guide::string::str_regex {

namespace {
bool match_internal(const std::string& str, size_t str_start, const std::string& exp, size_t exp_start) {
    size_t exp_size = exp.size(), str_size = str.size();
    if (exp_size == exp_start) {
        return str_size == str_start;
    }
    if (exp_start + 1 == exp_size || exp[exp_start + 1] != '*') {
        return str_start != str_size && (exp[exp_start] == '.' || exp[exp_start] == str[str_start]) &&
               match_internal(str, str_start + 1, exp, exp_start + 1);
    }
    size_t tmp = str_start;
    while (tmp < str_size && (str[tmp++] == exp[exp_start] || exp[exp_start] == '.')) {
        if (match_internal(str, tmp, exp, exp_start + 2)) {
            return true;
        }
    }
    // exp中x*匹配0个或者两者当前字符不相等的情况
    return match_internal(str, str_start, exp, exp_start + 2);
}
}  // namespace

bool StrRegex::match(const std::string& str, const std::string& exp) {
    for (auto& character : str) {
        if (character == '.' || character == '*') {
            return false;
        }
    }
    if (exp.size() && exp[0] == '*') {
        return false;
    }
    for (size_t i = 1; i < exp.size(); ++i) {
        if (exp[i] == '*' && exp[i - 1] == '*') {
            return false;
        }
    }
    return match_internal(str, 0, exp, 0);
}

}  // namespace coding_interview_guide::string::str_regex

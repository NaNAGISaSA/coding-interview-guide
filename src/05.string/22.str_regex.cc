#include <vector>

#include "05.string/22.str_regex.h"

namespace coding_interview_guide::string::str_regex {

namespace {
bool is_valid(const std::string& str, const std::string& exp) {
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
    return true;
}

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
    return match_internal(str, str_start, exp, exp_start + 2);
}
}  // namespace

bool StrRegex::match(const std::string& str, const std::string& exp) {
    return is_valid(str, exp) ? match_internal(str, 0, exp, 0) : false;
}

bool StrRegex::match_dp(const std::string& str, const std::string& exp) {
    if (!is_valid(str, exp)) {
        return false;
    }

    size_t exp_size = exp.size(), str_size = str.size();
    std::vector<std::vector<bool>> dp_matrix(str_size + 1, std::vector<bool>(exp_size + 1, false));

    auto init_dp_matrix = [&exp_size, &str_size, &dp_matrix, &str, &exp]() {
        dp_matrix[str_size][exp_size] = true;
        for (size_t i = exp_size - 2; i < exp_size; --i) {
            if (exp[i + 1] == '*' && dp_matrix[str_size][i + 2]) {
                dp_matrix[str_size][i] = true;
            }
        }
        if (str_size > 0) {
            dp_matrix[str_size - 1][exp_size - 1] = exp[exp_size - 1] == '.' || str[str_size - 1] == exp[exp_size - 1];
        }
    };
    // init last row, last column and second last column
    init_dp_matrix();

    for (size_t i = str_size - 1; i < str_size; --i) {
        for (size_t j = exp_size - 2; j < exp_size; --j) {
            if (exp[j + 1] != '*') {
                dp_matrix[i][j] = (exp[j] == '.' || str[i] == exp[j]) && dp_matrix[i + 1][j + 1];
            } else {
                if (dp_matrix[i][j + 2]) {
                    dp_matrix[i][j] = true;
                    continue;
                }
                size_t tmp = i;
                while (tmp < str_size && (str[tmp++] == exp[j] || exp[j] == '.')) {
                    if (dp_matrix[tmp][j + 2]) {
                        dp_matrix[i][j] = true;
                        break;
                    }
                }
            }
        }
    }
    return dp_matrix[0][0];
}

}  // namespace coding_interview_guide::string::str_regex

#include <algorithm>
#include <vector>

#include "04.dynamic_programming/11.max_common_substr.h"

namespace coding_interview_guide::dynamic_programming::max_common_substr {

std::string MaxCommonSubstr::max_substr(const std::string& str1, const std::string& str2) {
    size_t s1_size = str1.size(), s2_size = str2.size();
    if (s1_size == 0 || s2_size == 0) {
        return "";
    }
    std::vector<std::vector<unsigned int>> dp_matrix(s1_size, std::vector<unsigned int>(s2_size, 0U));
    size_t row = 0, max_length = 0;
    for (size_t i = 1; i < s2_size; ++i) {
        dp_matrix[0][i] = str1[0] == str2[i] ? 1U : 0U;
        if (dp_matrix[0][i] > max_length) {
            max_length = dp_matrix[0][i];
        }
    }
    for (size_t i = 0; i < s1_size; ++i) {
        dp_matrix[i][0] = str1[i] == str2[0] ? 1U : 0U;
        if (dp_matrix[i][0] > max_length) {
            max_length = dp_matrix[i][0];
            row = i;
        }
    }
    for (size_t i = 1; i < s1_size; ++i) {
        for (size_t j = 1; j < s2_size; ++j) {
            dp_matrix[i][j] = str1[i] == str2[j] ? 1 + dp_matrix[i - 1][j - 1] : 0;
            if (dp_matrix[i][j] > max_length) {
                max_length = dp_matrix[i][j];
                row = i;
            }
        }
    }
    return max_length == 0 ? "" : str1.substr(row - max_length + 1, max_length);
}

std::string MaxCommonSubstr::max_substr_space_opt(const std::string& str1, const std::string& str2) {
    size_t s1_size = str1.size(), s2_size = str2.size();
    if (s1_size == 0 || s2_size == 0) {
        return "";
    }
    size_t row = 0, max_length = 0, begin_s1 = 0, begin_s2 = 0, value = 0;
    for (size_t i = 0; i < s1_size; ++i) {
        begin_s1 = i;
        begin_s2 = 0;
        value = 0;
        while (begin_s1 < s1_size && begin_s2 < s2_size) {
            value = str1[begin_s1] == str2[begin_s2] ? value + 1 : 0;
            if (value > max_length) {
                max_length = value;
                row = begin_s1;
            }
            ++begin_s1;
            ++begin_s2;
        }
    }
    for (size_t j = 1; j < s2_size; ++j) {
        begin_s1 = 0;
        begin_s2 = j;
        value = 0;
        while (begin_s1 < s1_size && begin_s2 < s2_size) {
            value = str1[begin_s1] == str2[begin_s2] ? 1 + value : 0;
            if (value > max_length) {
                max_length = value;
                row = begin_s1;
            }
            ++begin_s1;
            ++begin_s2;
        }
    }
    return max_length == 0 ? "" : str1.substr(row - max_length + 1, max_length);
}

}  // namespace coding_interview_guide::dynamic_programming::max_common_substr

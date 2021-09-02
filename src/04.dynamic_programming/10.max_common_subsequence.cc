#include <algorithm>
#include <vector>

#include "04.dynamic_programming/10.max_common_subsequence.h"

namespace coding_interview_guide::dynamic_programming::max_common_subsequence {

namespace {
std::string subsequence_internal(const std::string& a,
                                 size_t start_a,
                                 size_t end_a,
                                 const std::string& b,
                                 size_t start_b,
                                 size_t end_b) {
    if (start_a > end_a || start_b > end_b) {
        return "";
    }
    std::string max_string = "";
    for (size_t index = start_a; index <= end_a; ++index) {
        std::string temp(1, a[index]);
        size_t first = b.find_first_of(temp, start_b);
        if (first <= end_b) {
            temp += subsequence_internal(a, index + 1, end_a, b, first + 1, end_b);
            if (temp.size() > max_string.size()) {
                max_string = temp;
            }
        }
    }
    return max_string;
}
}  // namespace

std::string MaxCommonSubsequence::subsequence(const std::string& a, const std::string& b) {
    if (a.size() == 0 || b.size() == 0) {
        return "";
    }
    return subsequence_internal(a, 0, a.size() - 1, b, 0, b.size() - 1);
}

std::string MaxCommonSubsequence::subsequence_dp(const std::string& a, const std::string& b) {
    if (a.size() == 0 || b.size() == 0) {
        return "";
    }
    std::vector<std::vector<unsigned int>> dp_matrix(a.size(), std::vector<unsigned int>(b.size(), 0));
    dp_matrix[0][0] = a[0] == b[0] ? 1 : 0;
    for (size_t i = 1; i < a.size(); ++i) {
        dp_matrix[i][0] = std::max(dp_matrix[i - 1][0], a[i] == b[0] ? 1U : 0U);
    }
    for (size_t i = 1; i < b.size(); ++i) {
        dp_matrix[0][i] = std::max(dp_matrix[0][i - 1], a[0] == b[i] ? 1U : 0U);
    }
    for (size_t i = 1; i < a.size(); ++i) {
        for (size_t j = 1; j < b.size(); ++j) {
            dp_matrix[i][j] = std::max(dp_matrix[i][j - 1], dp_matrix[i - 1][j]);
            if (a[i] == b[j]) {
                dp_matrix[i][j] = std::max(dp_matrix[i][j], 1 + dp_matrix[i - 1][j - 1]);
            }
        }
    }
    std::string result = "";
    size_t index = 0;
    long i = static_cast<long>(a.size() - 1), j = static_cast<long>(b.size() - 1);
    while (i >= 1 && j >= 1) {
        if (dp_matrix[i][j] > dp_matrix[i - 1][j] && dp_matrix[i][j] > dp_matrix[i][j - 1]) {
            result.insert(result.begin(), a[i]);
            --i;
            --j;
            ++index;
        } else if (dp_matrix[i][j] == dp_matrix[i - 1][j]) {
            --i;
        } else {
            --j;
        }
    }
    if (index == dp_matrix[a.size() - 1][b.size() - 1] - 1) {
        result.insert(result.begin(), i == 0 ? a[0] : b[0]);
    }
    return result;
}

}  // namespace coding_interview_guide::dynamic_programming::max_common_subsequence

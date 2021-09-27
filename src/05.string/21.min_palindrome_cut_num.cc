#include <algorithm>
#include <vector>

#include "05.string/21.min_palindrome_cut_num.h"

namespace coding_interview_guide::string::min_palindrome_cut_num {

unsigned int MinPalindromeCutNum::min_num(const std::string& str) {
    size_t str_size = str.size();
    if (str_size <= 1) {
        return 0U;
    }
    std::vector<unsigned int> dp_vec(str_size, 0U);
    std::vector<std::vector<bool>> is_palindrome_matrix(str_size, std::vector<bool>(str_size, false));
    for (size_t i = 0; i < str_size; ++i) {
        is_palindrome_matrix[i][i] = true;
    }
    dp_vec[str_size - 1] = 0U;
    for (size_t i = str_size - 2; i < str_size; --i) {
        dp_vec[i] = 1U + dp_vec[i + 1];
        for (size_t j = i + 1; j <= str_size - 1; ++j) {
            if (str[i] == str[j] && (j - i <= 2 || is_palindrome_matrix[i + 1][j - 1])) {
                is_palindrome_matrix[i][j] = true;
                dp_vec[i] = j == str_size - 1 ? 0U : std::min(1U + dp_vec[j + 1], dp_vec[i]);
            }
        }
    }
    return dp_vec[0];
}

}  // namespace coding_interview_guide::string::min_palindrome_cut_num

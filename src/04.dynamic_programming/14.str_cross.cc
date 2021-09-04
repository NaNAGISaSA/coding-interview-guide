#include <vector>

#include "04.dynamic_programming/14.str_cross.h"

namespace coding_interview_guide::dynamic_programming::str_cross {

bool StrCross::is_corss(const std::string& str1, const std::string& str2, const std::string& aim) {
    size_t s1_size = str1.size(), s2_size = str2.size(), aim_size = aim.size();
    if (s1_size + s2_size != aim_size) {
        return false;
    }
    std::vector<std::vector<bool>> dp_matrix(s1_size + 1, std::vector<bool>(s2_size + 1, false));
    dp_matrix[0][0] = true;
    for (size_t i = 1; i <= s1_size; ++i) {
        dp_matrix[i][0] = dp_matrix[i - 1][0] && str1[i - 1] == aim[i - 1];
    }
    for (size_t i = 1; i < s2_size; ++i) {
        dp_matrix[0][i] = dp_matrix[0][i - 1] && str2[i - 1] == aim[i - 1];
    }
    for (size_t i = 1; i <= s1_size; ++i) {
        for (size_t j = 1; j <= s2_size; ++j) {
            if (aim[i + j - 1] == str1[i - 1] && aim[i + j - 1] == str2[j - 1]) {
                dp_matrix[i][j] = dp_matrix[i - 1][j] || dp_matrix[i][j - 1];
            } else if (aim[i + j - 1] == str1[i - 1]) {
                dp_matrix[i][j] = dp_matrix[i - 1][j];
            } else if (aim[i + j - 1] == str2[j - 1]) {
                dp_matrix[i][j] = dp_matrix[i][j - 1];
            } else {
                dp_matrix[i][j] = false;
            }
        }
    }
    return dp_matrix[s1_size][s2_size];
}

}  // namespace coding_interview_guide::dynamic_programming::str_cross

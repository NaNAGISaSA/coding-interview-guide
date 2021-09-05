#include <algorithm>

#include "04.dynamic_programming/15.dnf_problem.h"

namespace coding_interview_guide::dynamic_programming::dnf_problem {

unsigned long DNF::max_hp(const std::vector<std::vector<int>>& map) {
    if (map.size() == 0) {
        return 1L;
    }
    size_t row = map.size(), col = map[0].size();
    std::vector<long> dp_vec(col, 0L);
    dp_vec[col - 1] = map[row - 1][col - 1] > 0 ? 1L : 1L - map[row - 1][col - 1];
    for (size_t i = col - 2; i < col; --i) {
        dp_vec[i] = std::max(dp_vec[i + 1] - map[row - 1][i], 1L);
    }
    for (size_t i = row - 2; i < row; --i) {
        dp_vec[col - 1] = std::max(dp_vec[col - 1] - map[i][col - 1], 1L);
        for (size_t j = col - 2; j < col; --j) {
            dp_vec[j] = std::min(std::max(dp_vec[j + 1] - map[i][j], 1L), std::max(dp_vec[j] - map[i][j], 1L));
        }
    }
    return dp_vec[0];
}

}  // namespace coding_interview_guide::dynamic_programming::dnf_problem

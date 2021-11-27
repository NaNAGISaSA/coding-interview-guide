#include <algorithm>

#include "09.other_problems/32.painter_problem.h"

namespace coding_interview_guide::other_problems::painter_problem {

unsigned int PainterProblem::min_time(const std::vector<unsigned int>& vec, unsigned int num) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0;
    }
    if (num == 0) {
        return std::numeric_limits<unsigned int>::max();
    }
    std::vector<std::vector<unsigned int>> dp_matrix(num, std::vector<unsigned int>(vec_size, 0));
    for (size_t i = 0; i < static_cast<size_t>(num); ++i) {
        dp_matrix[i][vec_size - 1] = vec[vec_size - 1];
    }
    for (size_t i = vec_size - 2; i < vec_size; --i) {
        dp_matrix[0][i] = dp_matrix[0][i + 1] + vec[i];
    }
    unsigned int result = 0U, acc = 0U;
    for (size_t i = 1; i < static_cast<size_t>(num); ++i) {
        for (size_t j = vec_size - 2; j < vec_size; --j) {
            result = std::numeric_limits<unsigned int>::max();
            acc = 0U;
            for (size_t k = j; k < vec_size - 1; ++k) {
                acc += vec[k];
                result = std::min(result, std::max(acc, dp_matrix[i - 1][k + 1]));
            }
            dp_matrix[i][j] = result;
        }
    }
    return dp_matrix[num - 1][0];
}

}  // namespace coding_interview_guide::other_problems::painter_problem

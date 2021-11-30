#include <limits>

#include "09.other_problems/33.post_office_problem.h"

namespace coding_interview_guide::other_problems::post_office_problem {

unsigned int PostOfficeProblem::min_distance(const std::vector<unsigned int>& vec, unsigned int num) {
    unsigned int vec_size = static_cast<unsigned int>(vec.size());
    if (num == 0) {
        return std::numeric_limits<unsigned int>::max();
    }
    if (num >= vec_size) {
        return 0U;
    }
    // 该矩阵表示如果0<=i<=j<=vec_size且在[i， j]区间只能建立一个邮局，最小距离为多少
    // 最小距离：如果[i, j]有奇数个地点，该邮局一定在中点；有偶数个地点，则在两个中点的任意一个
    std::vector<std::vector<unsigned int>> base_matrix(vec_size, std::vector<unsigned int>(vec_size, 0));
    for (unsigned int i = 0; i < vec_size; ++i) {
        for (unsigned int j = i + 1; j < vec_size; ++j) {
            base_matrix[i][j] = base_matrix[i][j - 1] + vec[j] - vec[(i + j) / 2];
        }
    }
    std::vector<std::vector<unsigned int>> dp_matrix(num, std::vector<unsigned int>(vec_size, 0));
    for (unsigned int i = 0; i < vec_size; ++i) {
        dp_matrix[0][i] = base_matrix[0][i];
    }
    unsigned int result = 0U;
    for (unsigned int i = 1; i < num; ++i) {
        for (unsigned int j = i + 1; j < vec_size; ++j) {
            result = std::numeric_limits<unsigned int>::max();
            for (unsigned int k = 0; k < j; ++k) {
                result = std::min(result, dp_matrix[i - 1][k] + base_matrix[k + 1][j]);
            }
            dp_matrix[i][j] = result;
        }
    }
    return dp_matrix[num - 1][vec_size - 1];
}

}  // namespace coding_interview_guide::other_problems::post_office_problem

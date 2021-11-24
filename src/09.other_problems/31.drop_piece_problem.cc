#include <algorithm>
#include <limits>
#include <vector>

#include "09.other_problems/31.drop_piece_problem.h"

namespace coding_interview_guide::other_problems::drop_piece_problem {

unsigned int DropPieceProblem::minimum_times(unsigned int height, unsigned int piece_num) {
    if (height == 0 || piece_num == 0) {
        return 0U;
    }
    if (piece_num == 1) {
        return height;
    }
    std::vector<std::vector<unsigned int>> dp_matrix(piece_num + 1, std::vector<unsigned int>(height + 1, 0));
    for (size_t i = 1; i < dp_matrix[0].size(); ++i) {
        dp_matrix[1][i] = static_cast<unsigned int>(i);
    }
    for (size_t i = 1; i < dp_matrix.size(); ++i) {
        dp_matrix[i][1] = 1;
    }
    unsigned int result = std::numeric_limits<unsigned int>::max();
    for (size_t i = 2; i < dp_matrix.size(); ++i) {
        for (size_t j = 2; j < dp_matrix[0].size(); ++j) {
            result = std::numeric_limits<unsigned int>::max();
            for (size_t k = 1; k <= j; ++k) {
                result = std::min(result, 1 + std::max(dp_matrix[i - 1][k - 1], dp_matrix[i][j - k]));
            }
            dp_matrix[i][j] = result;
        }
    }
    return dp_matrix[piece_num][height];
}

}  // namespace coding_interview_guide::other_problems::drop_piece_problem

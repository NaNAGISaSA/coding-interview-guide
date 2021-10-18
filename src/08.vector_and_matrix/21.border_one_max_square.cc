#include <algorithm>

#include "08.vector_and_matrix/21.border_one_max_square.h"

namespace coding_interview_guide::vector_and_matrix::border_one_max_square {

unsigned int BorderOneMaxSquare::max_square(const std::vector<std::vector<unsigned int>>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0U;
    }

    std::vector<std::vector<unsigned int>> right(vec_size, std::vector<unsigned int>(vec_size, 0U)),
        down(vec_size, std::vector<unsigned int>(vec_size, 0U));

    auto pre_process = [&right, &down, &vec, &vec_size]() {
        if (vec[vec_size - 1][vec_size - 1] == 1U) {
            right[vec_size - 1][vec_size - 1] = 1U;
            down[vec_size - 1][vec_size - 1] = 1U;
        }
        for (size_t i = vec_size - 2; i < vec_size; --i) {
            if (vec[i][vec_size - 1] == 1U) {
                right[i][vec_size - 1] = 1U;
                down[i][vec_size - 1] = 1U + down[i + 1][vec_size - 1];
            }
            if (vec[vec_size - 1][i] == 1U) {
                right[vec_size - 1][i] = 1U + right[vec_size - 1][i + 1];
                down[vec_size - 1][i] = 1U;
            }
        }
        for (size_t i = vec_size - 2; i < vec_size; --i) {
            for (size_t j = vec_size - 2; j < vec_size; --j) {
                if (vec[i][j] == 1U) {
                    right[i][j] = 1U + right[i][j + 1];
                    down[i][j] = 1U + down[i + 1][j];
                }
            }
        }
    };

    pre_process();

    unsigned int max_square_len = 0U;
    unsigned int add_on = 0U, curr_square_len = 1U;

    for (size_t i = 0; i < vec_size; ++i) {
        for (size_t j = 0; j < vec_size; ++j) {
            add_on = 0U;
            curr_square_len = 1U;
            while (i + add_on < vec_size && j + add_on < vec_size) {
                if (right[i][j] >= curr_square_len && down[i][j] >= curr_square_len &&
                    right[i + add_on][j] >= curr_square_len && down[i][j + add_on] >= curr_square_len) {
                    max_square_len = std::max(curr_square_len, max_square_len);
                }
                ++add_on;
                ++curr_square_len;
            }
        }
    }

    return max_square_len;
}

}  // namespace coding_interview_guide::vector_and_matrix::border_one_max_square

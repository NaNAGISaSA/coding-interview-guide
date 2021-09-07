#include <algorithm>

#include "04.dynamic_programming/18.card_game.h"

namespace coding_interview_guide::dynamic_programming::card_game {

unsigned long CardGame::winner_point(const std::vector<unsigned int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0UL;
    }
    std::vector<std::vector<unsigned long>> dp_matrix_first_fetch(vec_size, std::vector<unsigned long>(vec_size, 0UL));
    std::vector<std::vector<unsigned long>> dp_matrix_second_fetch(vec_size, std::vector<unsigned long>(vec_size, 0UL));
    for (size_t i = 0; i < vec_size; ++i) {
        dp_matrix_first_fetch[i][i] = vec[i];
    }
    for (size_t i = vec_size - 2; i < vec_size; --i) {
        for (size_t j = i + 1; j <= vec_size - 1; ++j) {
            dp_matrix_first_fetch[i][j] =
                std::max(vec[i] + dp_matrix_second_fetch[i + 1][j], vec[j] + dp_matrix_second_fetch[i][j - 1]);
            dp_matrix_second_fetch[i][j] = std::min(dp_matrix_first_fetch[i + 1][j], dp_matrix_first_fetch[i][j - 1]);
        }
    }
    return std::max(dp_matrix_first_fetch[0][vec_size - 1], dp_matrix_second_fetch[0][vec_size - 1]);
}

}  // namespace coding_interview_guide::dynamic_programming::card_game

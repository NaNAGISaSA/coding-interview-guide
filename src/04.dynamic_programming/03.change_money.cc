#include <algorithm>

#include "04.dynamic_programming/03.change_money.h"

namespace coding_interview_guide::dynamic_programming::change_money {

int ChangeMoney::min_currency(const std::vector<unsigned int>& vec, unsigned int aim) {
    std::vector<std::vector<int>> dp_matrix(aim + 1, std::vector<int>(vec.size(), -1));
    std::vector<int> min_currency_cache(aim + 1, 0);

    auto calculate_current_currency_min = [&dp_matrix](unsigned int currency) {
        int result = -1;
        for (size_t i = 0; i < dp_matrix[currency].size(); ++i) {
            if (dp_matrix[currency][i] != -1) {
                result = result == -1 ? dp_matrix[currency][i] : std::min(result, dp_matrix[currency][i]);
            }
        }
        return result;
    };

    for (size_t i = 0; i < vec.size(); ++i) {
        dp_matrix[0][i] = 0;
    }
    for (unsigned int i = 1; i <= aim; ++i) {
        for (size_t j = 0; j < vec.size(); ++j) {
            if (i == vec[j]) {
                dp_matrix[i][j] = 1;
            } else if (i > vec[j]) {
                unsigned int currency = i - vec[j];
                dp_matrix[i][j] = min_currency_cache[currency] == -1 ? -1 : 1 + min_currency_cache[currency];
            }
        }
        min_currency_cache[i] = calculate_current_currency_min(i);
    }
    return min_currency_cache[aim];
}

}  // namespace coding_interview_guide::dynamic_programming::change_money

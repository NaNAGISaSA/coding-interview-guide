#include "04.dynamic_programming/05.change_money_methods.h"

namespace coding_interview_guide::dynamic_programming::change_money_methods {

unsigned long ChangeMoneyMethods::methods_number(const std::vector<unsigned int>& vec, const unsigned int aim) {
    std::vector<std::vector<unsigned long>> dp_matrix(vec.size() + 1, std::vector<unsigned long>(aim + 1, 0L));
    for (size_t i = 0; i <= vec.size(); ++i) {
        dp_matrix[i][0] = 1L;
    }
    for (int i = 1; i <= static_cast<int>(vec.size()); ++i) {
        for (unsigned int j = 1; j <= aim; ++j) {
            if (vec[i - 1] > j) {
                dp_matrix[i][j] = dp_matrix[i - 1][j];
            } else {
                dp_matrix[i][j] =
                    (dp_matrix[i - 1][j] + dp_matrix[i][j - vec[i - 1]]) % static_cast<unsigned long>((7 + 1e+9));
            }
        }
    }
    return dp_matrix[vec.size()][aim];
}

unsigned long ChangeMoneyMethods::methods_number_space_opt(const std::vector<unsigned int>& vec,
                                                           const unsigned int aim) {
    std::vector<unsigned long> dp_vector(aim + 1, 0L);
    dp_vector[0] = 1L;
    for (int i = 1; i <= static_cast<int>(vec.size()); ++i) {
        for (size_t j = 1; j <= aim; ++j) {
            dp_vector[j] = vec[i - 1] > j ? dp_vector[j] : dp_vector[j] + dp_vector[j - vec[i - 1]];
        }
    }
    return dp_vector[aim];
}

}  // namespace coding_interview_guide::dynamic_programming::change_money_methods

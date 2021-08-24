#include "04.dynamic_programming/05.change_money_methods.h"

namespace coding_interview_guide::dynamic_programming::change_money_methods {

unsigned int ChangeMoneyMethods::methods_number(const std::vector<unsigned int>& vec, unsigned int aim) {
    std::vector<std::vector<unsigned int>> dp_matrix(vec.size() + 1, std::vector<unsigned int>(aim + 1, 0));
    for (size_t i = 0; i <= vec.size(); ++i) {
        dp_matrix[i][0] = 1;
    }
    for (int i = static_cast<int>(vec.size()) - 1; i >= 0; --i) {
        for (size_t j = 1; j <= aim; ++j) {
            if (j < vec[i]) {
                dp_matrix[i][j] = dp_matrix[i + 1][j];
            } else {
                dp_matrix[i][j] = (dp_matrix[i + 1][j] + dp_matrix[i][j - vec[i]]) % static_cast<int>((7 + 1e+9));
            }
        }
    }
    return dp_matrix[0][aim];
}

}  // namespace coding_interview_guide::dynamic_programming::change_money_methods

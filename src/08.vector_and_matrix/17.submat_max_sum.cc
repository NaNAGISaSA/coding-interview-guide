#include <algorithm>
#include <limits>

#include "08.vector_and_matrix/17.submat_max_sum.h"

namespace coding_interview_guide::vector_and_matrix::submat_max_sum {

int SubmatMaxSum::max_sum(const std::vector<std::vector<int>>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0;
    }
    int max_sum = std::numeric_limits<int>::min();
    std::vector<int> sum_vec(vec[0].size(), 0);

    auto get_curr_mat = [&sum_vec, &vec](size_t row_index) {
        for (size_t i = 0; i < sum_vec.size(); ++i) {
            sum_vec[i] += vec[row_index][i];
        }
    };

    auto get_max_value_of_curr_mat = [&sum_vec]() {
        int max_sum = sum_vec[sum_vec.size() - 1];
        int curr_index_max_sum = max_sum;
        for (size_t i = sum_vec.size() - 2; i < sum_vec.size(); --i) {
            curr_index_max_sum = curr_index_max_sum > 0 ? sum_vec[i] + curr_index_max_sum : sum_vec[i];
            max_sum = std::max(max_sum, curr_index_max_sum);
        }
        return max_sum;
    };

    for (size_t i = 0; i < vec_size; ++i) {
        std::fill(sum_vec.begin(), sum_vec.end(), 0);
        for (size_t j = i; j < vec_size; ++j) {
            get_curr_mat(j);
            max_sum = std::max(max_sum, get_max_value_of_curr_mat());
        }
    }
    return max_sum;
}

}  // namespace coding_interview_guide::vector_and_matrix::submat_max_sum

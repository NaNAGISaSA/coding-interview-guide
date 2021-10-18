#include "08.vector_and_matrix/22.multi_not_contain_curr_idx.h"

namespace coding_interview_guide::vector_and_matrix::multi_not_contain_curr_idx {

std::vector<int> MultiNotContainCurrIdx::multi_result(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 2) {
        return {};
    }
    int acc_result = 1;
    size_t zero_num = 0, zero_num_index = 0;
    for (size_t i = 0; i < vec_size; ++i) {
        if (vec[i] == 0) {
            ++zero_num;
            zero_num_index = i;
        } else {
            acc_result *= vec[i];
        }
    }
    std::vector<int> result(vec_size, 0);
    if (zero_num == 1) {
        result[zero_num_index] = acc_result;
    } else if (zero_num == 0) {
        for (size_t i = 0; i < vec_size; ++i) {
            result[i] = acc_result / vec[i];
        }
    }
    return result;
}

std::vector<int> MultiNotContainCurrIdx::multi_result_adv(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 2) {
        return {};
    }
    std::vector<int> result(vec_size, vec[vec_size - 1]);
    for (size_t i = vec_size - 2; i < vec_size; --i) {
        result[i] = vec[i] * result[i + 1];
    }
    int acc_result = 1;
    for (size_t i = 0; i < vec_size - 1; ++i) {
        result[i] = acc_result * result[i + 1];
        acc_result *= vec[i];
    }
    result[vec_size - 1] = acc_result;
    return result;
}

}  // namespace coding_interview_guide::vector_and_matrix::multi_not_contain_curr_idx

#include <algorithm>

#include "08.vector_and_matrix/12.max_subarr_len_le_k.h"

namespace coding_interview_guide::vector_and_matrix::max_subarr_len_le_k {

unsigned int MaxSubarrLenLeK::max_len(const std::vector<int>& vec, int k) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0U;
    }
    std::vector<int> sum_vec(vec_size + 1, 0), help_vec(vec_size + 1, 0);
    for (size_t i = 1; i <= vec_size; ++i) {
        sum_vec[i] = sum_vec[i - 1] + vec[i - 1];
        help_vec[i] = std::max(help_vec[i - 1], sum_vec[i]);
    }
    int add_on = 0;
    unsigned int max_length = 0U;
    int left = 0, right = 0, middle = 0;
    int left_most = -1;
    for (size_t i = 1; i <= vec_size; ++i) {
        add_on = sum_vec[i] - k;
        left = 0;
        right = static_cast<int>(i);
        left_most = -1;
        while (left <= right) {
            middle = (left + right) / 2;
            if (help_vec[middle] >= add_on) {
                left_most = middle;
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        if (left_most != -1) {
            max_length = std::max(max_length, static_cast<unsigned int>(i - left_most));
        }
    }
    return max_length;
}

}  // namespace coding_interview_guide::vector_and_matrix::max_subarr_len_le_k

#include <algorithm>

#include "08.vector_and_matrix/10.max_subarr_len_eq_k.h"

namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k {

unsigned int MaxSubarrLenEqK::max_len(const std::vector<unsigned int>& vec, unsigned int k) {
    if (vec.size() == 0) {
        return 0U;
    }
    size_t left = 0, right = 0;
    unsigned int max_length = 0U, cur_sum = vec[0];
    while (right < vec.size()) {
        if (cur_sum == k) {
            max_length = std::max(max_length, static_cast<unsigned int>(right - left + 1));
            cur_sum -= vec[left++];
        } else if (cur_sum > k) {
            cur_sum -= vec[left++];
        } else {
            ++right;
            if (right == vec.size()) {
                break;
            }
            cur_sum += vec[right];
        }
    }
    return max_length;
}

}  // namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k

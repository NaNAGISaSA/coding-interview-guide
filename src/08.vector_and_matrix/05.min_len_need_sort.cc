#include <algorithm>

#include "08.vector_and_matrix/05.min_len_need_sort.h"

namespace coding_interview_guide::vector_and_matrix::min_len_need_sort {

unsigned long MinLenNeedSort::min_len(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size <= 1) {
        return 0UL;
    }

    auto ascend_order_len = [&vec, &vec_size]() {
        long right_range = -1, left_range = -1;
        int max_value = vec[0], min_value = vec[vec_size - 1];
        for (size_t i = 1; i < vec_size; ++i) {
            if (vec[i] < max_value) {
                right_range = static_cast<unsigned long>(i);
            } else {
                max_value = std::max(max_value, vec[i]);
            }
        }
        if (right_range == -1) {
            return 0UL;
        }
        for (size_t i = vec_size - 2; i < vec_size; --i) {
            if (vec[i] > min_value) {
                left_range = static_cast<unsigned long>(i);
            } else {
                min_value = std::min(min_value, vec[i]);
            }
        }
        return right_range - left_range + 1UL;
    };

    auto descend_order_len = [&vec, &vec_size]() {
        long right_range = -1, left_range = -1;
        int min_value = vec[0], max_value = vec[vec_size - 1];
        for (size_t i = 1; i < vec_size; ++i) {
            if (vec[i] > min_value) {
                right_range = static_cast<unsigned long>(i);
            } else {
                min_value = std::min(min_value, vec[i]);
            }
        }
        if (right_range == -1) {
            return 0UL;
        }
        for (size_t i = vec_size - 2; i < vec_size; --i) {
            if (vec[i] < max_value) {
                left_range = static_cast<unsigned long>(i);
            } else {
                max_value = std::max(max_value, vec[i]);
            }
        }
        return right_range - left_range + 1UL;
    };

    return std::min(ascend_order_len(), descend_order_len());
}

}  // namespace coding_interview_guide::vector_and_matrix::min_len_need_sort
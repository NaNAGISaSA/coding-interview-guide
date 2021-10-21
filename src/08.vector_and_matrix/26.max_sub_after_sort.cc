#include <algorithm>
#include <limits>

#include "08.vector_and_matrix/26.max_sub_after_sort.h"

namespace coding_interview_guide::vector_and_matrix::max_sub_after_sort {

unsigned int MaxSubAfterSort::max_sub(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 2) {
        return 0U;
    }
    int max_value = vec[0], min_value = vec[0];
    for (size_t i = 1; i < vec_size; ++i) {
        if (vec[i] > max_value) {
            max_value = vec[i];
        }
        if (vec[i] < min_value) {
            min_value = vec[i];
        }
    }
    if (max_value == min_value) {
        return 0U;
    }
    std::vector<bool> has_number(vec_size + 1, false);
    std::vector<int> min(vec_size + 1, std::numeric_limits<int>::max()),
        max(vec_size + 1, std::numeric_limits<int>::min());
    for (size_t i = 0; i < vec_size; ++i) {
        size_t bucket_number =
            vec_size * static_cast<size_t>(vec[i] - min_value) / static_cast<size_t>(max_value - min_value);
        min[bucket_number] = std::min(min[bucket_number], vec[i]);
        max[bucket_number] = std::max(max[bucket_number], vec[i]);
        has_number[bucket_number] = true;
    }
    unsigned int result = 0U;
    int last_bucket_max = max[0];  // min_value must in the first bucket, so it is not empty
    for (size_t i = 1; i <= vec_size; ++i) {
        if (has_number[i]) {
            result = std::max(result, static_cast<unsigned int>(min[i] - last_bucket_max));
            last_bucket_max = max[i];
        }
    }
    return result;
}

}  // namespace coding_interview_guide::vector_and_matrix::max_sub_after_sort

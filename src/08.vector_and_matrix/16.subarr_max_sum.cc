#include <algorithm>
#include <limits>

#include "08.vector_and_matrix/16.subarr_max_sum.h"

namespace coding_interview_guide::vector_and_matrix::subarr_max_sum {

int SubarrMaxSum::max_sum(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0;
    }
    int max_sum = vec[vec_size - 1];
    int last_max_sum = max_sum;
    for (size_t i = vec_size - 2; i < vec_size; --i) {
        last_max_sum = last_max_sum > 0 ? last_max_sum + vec[i] : vec[i];
        max_sum = std::max(max_sum, last_max_sum);
    }
    return max_sum;
}

}  // namespace coding_interview_guide::vector_and_matrix::subarr_max_sum

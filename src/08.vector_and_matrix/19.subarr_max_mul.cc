#include <algorithm>

#include "08.vector_and_matrix/19.subarr_max_mul.h"

namespace coding_interview_guide::vector_and_matrix::subarr_max_mul {

double SubarrMaxMul::max_mul(const std::vector<double>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0.0;
    }
    double max = vec[0], min = vec[0], max_mul = vec[0], tmp = 0.0;
    for (size_t i = 1; i < vec_size; ++i) {
        tmp = max;
        max = std::max(std::max(tmp * vec[i], min * vec[i]), vec[i]);
        min = std::min(std::min(tmp * vec[i], min * vec[i]), vec[i]);
        max_mul = std::max(max_mul, max);
    }
    return max_mul;
}

}  // namespace coding_interview_guide::vector_and_matrix::subarr_max_mul

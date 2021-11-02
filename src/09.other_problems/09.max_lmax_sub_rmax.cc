#include <algorithm>
#include <cmath>
#include <limits>

#include "09.other_problems/09.max_lmax_sub_rmax.h"

namespace coding_interview_guide::other_problems::max_lmax_sub_rmax {

unsigned int MaxLmaxSubRmax::max_value(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 2) {
        return 0U;
    }
    std::vector<int> max_vec(vec_size, 0);
    int max_value = std::numeric_limits<int>::min();
    for (size_t i = vec_size - 1; i < vec_size; --i) {
        max_value = std::max(max_value, vec[i]);
        max_vec[i] = max_value;
    }
    max_value = vec[0];
    unsigned int result = 0U;
    for (size_t i = 1; i < vec_size; ++i) {
        result = std::max(result, static_cast<unsigned int>(std::abs(max_vec[i] - max_value)));
        max_value = std::max(max_value, vec[i]);
    }
    return result;
}

unsigned int MaxLmaxSubRmax::max_value_opt(const std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 2) {
        return 0U;
    }
    int max_value = std::numeric_limits<int>::min();
    for (size_t i = 0; i < vec_size; ++i) {
        max_value = std::max(max_value, vec[i]);
    }
    return static_cast<unsigned int>(max_value - std::min(vec[0], vec[vec_size - 1]));
}

}  // namespace coding_interview_guide::other_problems::max_lmax_sub_rmax

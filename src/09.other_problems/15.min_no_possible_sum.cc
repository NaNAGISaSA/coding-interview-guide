#include <limits>

#include "09.other_problems/15.min_no_possible_sum.h"

namespace coding_interview_guide::other_problems::min_no_possible_sum {

unsigned int MinNoPossibleSum::min_value(const std::vector<unsigned int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size == 0) {
        return 0U;
    }
    unsigned int max_sum = 0U;
    unsigned int min_value = std::numeric_limits<unsigned int>::max();
    for (size_t i = 0; i < vec_size; ++i) {
        max_sum += vec[i];
        min_value = std::min(min_value, vec[i]);
    }
    std::vector<bool> dp_vec(max_sum + 1, false);
    dp_vec[0] = true;
    for (size_t i = 0; i < vec_size; ++i) {
        for (unsigned int j = max_sum; j >= vec[i]; --j) {
            dp_vec[j] = dp_vec[j - vec[i]] ? true : dp_vec[j];
        }
    }
    for (unsigned int i = min_value; i <= max_sum; ++i) {
        if (!dp_vec[i]) {
            return i;
        }
    }
    return max_sum + 1U;
}

// unsigned int MinNoPossibleSum::min_value_adv(const std::vector<unsigned int>& vec) {
// }

}  // namespace coding_interview_guide::other_problems::min_no_possible_sum

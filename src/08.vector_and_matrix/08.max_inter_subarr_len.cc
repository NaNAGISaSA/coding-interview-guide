#include <algorithm>
#include <unordered_set>

#include "08.vector_and_matrix/08.max_inter_subarr_len.h"

namespace coding_interview_guide::vector_and_matrix::max_inter_subarr_len {

unsigned int MaxInterSubarrLen::max_len(const std::vector<int>& vec) {
    if (vec.size() == 0) {
        return 0U;
    }
    unsigned int max_length = 1U;
    std::unordered_set<int> set;
    int max_value = 0, min_value = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        set.clear();
        set.insert(vec[i]);
        max_value = vec[i];
        min_value = vec[i];
        for (size_t j = i + 1; j < vec.size(); ++j) {
            if (set.find(vec[j]) != set.end()) {
                break;
            }
            set.insert(vec[j]);
            max_value = std::max(max_value, vec[j]);
            min_value = std::min(min_value, vec[j]);
            if (static_cast<size_t>(max_value - min_value) == j - i) {
                max_length = std::max(max_length, static_cast<unsigned int>(set.size()));
            }
        }
    }
    return max_length;
}

}  // namespace coding_interview_guide::vector_and_matrix::max_inter_subarr_len

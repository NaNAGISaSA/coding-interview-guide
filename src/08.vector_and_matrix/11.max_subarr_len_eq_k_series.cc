#include <algorithm>
#include <unordered_map>

#include "08.vector_and_matrix/11.max_subarr_len_eq_k_series.h"

namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k_series {

unsigned int MaxSubarrLenEqKSeries::problem1(const std::vector<int>& vec, int k) {
    if (vec.size() == 0) {
        return 0U;
    }
    std::unordered_map<int, long> map{{0, -1}};
    int sum = 0;
    unsigned int max_length = 0U;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (map.find(sum - k) != map.end()) {
            max_length = std::max(max_length, static_cast<unsigned int>(i - map[sum - k]));
        }
        if (map.find(sum) == map.end()) {
            map.insert({sum, i});
        }
    }
    return max_length;
}

}  // namespace coding_interview_guide::vector_and_matrix::max_subarr_len_eq_k_series

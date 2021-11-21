#include <algorithm>

#include "09.other_problems/26.find_upper_median.h"
#include "09.other_problems/27.find_k_min_number.h"

namespace coding_interview_guide::other_problems {

namespace find_k_min_number {

int FindKMinNumber::find_number(const std::vector<int>& vec1, const std::vector<int>& vec2, unsigned int k) {
    size_t vec1_size = vec1.size(), vec2_size = vec2.size();
    if (k == 0 || k > vec1_size + vec2_size) {
        return -1;
    }
    auto& long_vec = vec1_size > vec2_size ? vec1 : vec2;
    auto& short_vec = vec1_size > vec2_size ? vec2 : vec1;
    size_t long_size = std::max(vec1_size, vec2_size), short_size = std::min(vec1_size, vec2_size);
    if (k > long_size) {
        if (long_vec[k - short_size - 1] >= short_vec[short_size - 1]) {
            return long_vec[k - short_size - 1];
        } else if (short_vec[k - long_size - 1] >= long_vec[long_size - 1]) {
            return short_vec[k - long_size - 1];
        } else {
            return find_upper_median::FindUpperMedian::upper_median(
                std::vector<int>(std::next(short_vec.begin(), k - long_size), short_vec.end()),
                std::vector<int>(std::next(long_vec.begin(), k - short_size), long_vec.end()));
        }
    } else if (k <= short_size) {
        return find_upper_median::FindUpperMedian::upper_median(
            std::vector<int>(short_vec.begin(), std::next(short_vec.begin(), k)),
            std::vector<int>(long_vec.begin(), std::next(long_vec.begin(), k)));
    } else {
        if (long_vec[k - short_size - 1] >= short_vec[short_size - 1]) {
            return long_vec[k - short_size - 1];
        }
        return find_upper_median::FindUpperMedian::upper_median(
            short_vec, std::vector<int>(std::next(long_vec.begin(), k - short_size), std::next(long_vec.begin(), k)));
    }
}

}  // namespace find_k_min_number

}  // namespace coding_interview_guide::other_problems

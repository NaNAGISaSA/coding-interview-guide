#include <algorithm>
#include <unordered_set>

#include "09.other_problems/16.min_num_get_all_range.h"

namespace coding_interview_guide::other_problems::min_num_get_all_range {

unsigned int MinNumGetAllRange::min_num(const std::vector<unsigned int>& vec, unsigned int range) {
    size_t vec_size = vec.size();
    auto vec_copy = vec;
    std::sort(vec_copy.begin(), vec_copy.end());
    unsigned int min_num = 0, sum_range = 0;
    size_t index = 0;
    while (sum_range < range) {
        if (index < vec_size) {
            if (vec_copy[index] > sum_range + 1) {
                sum_range = 2 * sum_range + 1;
                ++min_num;
            } else {
                sum_range += vec_copy[index++];
            }
        } else {
            sum_range = 2 * sum_range + 1;
            ++min_num;
        }
    }
    return min_num;
}

}  // namespace coding_interview_guide::other_problems::min_num_get_all_range

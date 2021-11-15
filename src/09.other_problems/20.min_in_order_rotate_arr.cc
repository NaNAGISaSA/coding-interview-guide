#include <algorithm>

#include "09.other_problems/20.min_in_order_rotate_arr.h"

namespace coding_interview_guide::other_problems::min_in_order_rotate_arr {

int MinInOrderRotateArr::get_min(const std::vector<int>& vec) {
    if (vec.size() == 0) {
        return -1;
    }
    long begin = 0, mid = 0, end = static_cast<long>(vec.size() - 1);
    while (begin < end) {
        if (begin + 1 == end) {
            break;
        }
        if (vec[begin] < vec[end]) {
            return vec[begin];
        }
        mid = (begin + end) / 2;
        if (vec[begin] > vec[mid]) {
            end = mid;
            continue;
        }
        if (vec[mid] > vec[end]) {
            begin = mid;
            continue;
        }
        // vec[begin] = vec[mid] = vec[end]
        while (begin < mid) {
            if (vec[begin] < vec[mid]) {
                return vec[begin];
            } else if (vec[begin] > vec[mid]) {
                end = mid;
                break;
            } else {
                ++begin;
            }
        }
    }
    return std::min(vec[begin], vec[end]);
}

}  // namespace coding_interview_guide::other_problems::min_in_order_rotate_arr

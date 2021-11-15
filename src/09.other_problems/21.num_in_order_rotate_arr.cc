#include "09.other_problems/21.num_in_order_rotate_arr.h"

namespace coding_interview_guide::other_problems::num_in_order_rotate_arr {

bool NumInOrderRotateArr::has_num(const std::vector<int>& vec, int num) {
    if (vec.size() == 0) {
        return false;
    }

    auto binary_search = [&vec, &num](long begin, long end) {
        long mid = 0;
        while (begin <= end) {
            mid = (begin + end) / 2;
            if (vec[mid] == num) {
                return true;
            } else if (vec[mid] < num) {
                begin = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    };

    long begin = 0, mid = 0, end = static_cast<long>(vec.size() - 1);
    while (begin <= end) {
        if (vec[begin] < vec[end]) {
            return binary_search(begin, end);
        }
        mid = (begin + end) / 2;
        if (vec[mid] == num) {
            return true;
        }
        if (vec[mid] > vec[end]) {
            if (vec[begin] <= num && num < vec[mid]) {
                return binary_search(begin, mid);
            }
            begin = mid + 1;
            continue;
        }
        if (vec[begin] > vec[mid]) {
            if (vec[mid] < num && num <= vec[end]) {
                return binary_search(mid, end);
            }
            end = mid - 1;
            continue;
        }
        // vec[begin] = vec[mid] = vec[end]
        while (begin <= mid) {
            if (vec[begin] == num) {
                return true;
            }
            if (vec[begin] < vec[mid]) {
                return binary_search(begin, mid);
            } else {
                ++begin;
            }
        }
    }
    return false;
}

}  // namespace coding_interview_guide::other_problems::num_in_order_rotate_arr

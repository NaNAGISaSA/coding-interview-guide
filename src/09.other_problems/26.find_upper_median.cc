#include "09.other_problems/26.find_upper_median.h"

namespace coding_interview_guide::other_problems::find_upper_median {

int FindUpperMedian::upper_median(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    if (vec1.size() != vec2.size() || vec1.size() == 0) {
        return -1;
    }
    size_t left1 = 0, right1 = vec1.size() - 1, left2 = 0, right2 = vec2.size() - 1;
    size_t mid1 = 0, mid2 = 0;
    while (right1 != left1) {
        mid1 = (left1 + right1) / 2;
        mid2 = (left2 + right2) / 2;
        if (vec1[mid1] == vec2[mid2]) {
            return vec1[mid1];
        } else if (vec1[mid1] > vec2[mid2]) {
            right1 = mid1;
            left2 = (right2 - left2) % 2 == 0 ? mid2 : mid2 + 1;
        } else {
            right2 = mid2;
            left1 = (right1 - left1) % 2 == 0 ? mid1 : mid1 + 1;
        }
    }
    return vec1[left1] < vec2[left2] ? vec1[left1] : vec2[left2];
}

}  // namespace coding_interview_guide::other_problems::find_upper_median

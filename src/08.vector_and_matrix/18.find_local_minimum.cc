#include "08.vector_and_matrix/18.find_local_minimum.h"

namespace coding_interview_guide::vector_and_matrix::find_local_minimum {

int FindLocalMinimum::find(const std::vector<int>& vec) {
    int vec_size = static_cast<int>(vec.size());
    if (vec_size == 0) {
        return -1;
    } else if (vec_size == 1 || vec[0] < vec[1]) {
        return 0;
    } else if (vec[vec_size - 1] < vec[vec_size - 2]) {
        return vec_size - 1;
    }
    int left = 1, right = vec_size - 2;
    int mid = 0;
    while (left < right) {
        mid = (left + right) / 2;
        if (vec[mid] > vec[mid - 1]) {
            right = mid - 1;
        } else if (vec[mid] > vec[mid + 1]) {
            left = mid + 1;
        } else {
            return mid;
        }
    }
    return left;
}

}  // namespace coding_interview_guide::vector_and_matrix::find_local_minimum

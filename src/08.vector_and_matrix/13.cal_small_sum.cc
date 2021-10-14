#include "08.vector_and_matrix/13.cal_small_sum.h"

namespace coding_interview_guide::vector_and_matrix::cal_small_sum {

namespace {
int merge(std::vector<int>& vec, size_t begin, size_t mid, size_t end) {
    size_t left_size = mid - begin + 1, right_size = end - mid;
    std::vector<int> left(left_size, 0), right(right_size, 0);
    for (size_t i = 0; i < left_size; ++i) {
        left[i] = vec[begin + i];
    }
    for (size_t i = 0; i < right_size; ++i) {
        right[i] = vec[mid + 1 + i];
    }
    size_t left_index = 0, right_index = 0;
    int small_sum = 0;
    while (left_index < left_size && right_index < right_size) {
        if (left[left_index] < right[right_index]) {
            small_sum += left[left_index] * static_cast<int>(right_size - right_index);
            vec[begin] = left[left_index++];
        } else {
            vec[begin] = right[right_index++];
        }
        ++begin;
    }
    while (left_index < left_size) {
        vec[begin++] = left[left_index++];
    }
    while (right_index < right_size) {
        vec[begin++] = right[right_index++];
    }
    return small_sum;
}

int merge_sort_cal_small_sum(std::vector<int>& vec, size_t begin, size_t end) {
    if (begin == end) {
        return 0;
    }
    size_t mid = (begin + end) / 2;
    return merge_sort_cal_small_sum(vec, begin, mid) + merge_sort_cal_small_sum(vec, mid + 1, end) +
           merge(vec, begin, mid, end);
}
}  // namespace

int CalSmallSum::cal_small_sum(const std::vector<int>& vec) {
    if (vec.size() <= 1) {
        return 0;
    }
    std::vector<int> copy_vec(vec);
    return merge_sort_cal_small_sum(copy_vec, 0, copy_vec.size() - 1);
}

}  // namespace coding_interview_guide::vector_and_matrix::cal_small_sum

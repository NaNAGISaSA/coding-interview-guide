#include "03.binary_tree/13.reconstruct_bst_using_arr.h"

namespace coding_interview_guide::binary_tree::reconstruct_bst_using_arr {

namespace {
bool can_reconstruct_internal(const std::vector<int>& array, size_t start, size_t end) {
    if (start == end) {
        return true;
    }
    long less = -1;
    size_t more = end;
    for (size_t i = start; i < end; ++i) {
        if (array[i] < array[end]) {
            less = i;
        } else {
            if (more == end) {
                more = i;
            }
        }
    }
    if (less == -1L || more == end) {
        return can_reconstruct_internal(array, start, end - 1);
    } else if (less != static_cast<long>(more - 1)) {
        return false;
    } else {
        return can_reconstruct_internal(array, start, less) && can_reconstruct_internal(array, more, end - 1);
    }
}
}  // namespace

bool ReconstructBstUsingArr::can_reconstruct(const std::vector<int>& array) {
    return array.size() ? can_reconstruct_internal(array, 0, array.size() - 1) : false;
}

// const Node<int>* ReconstructBstUsingArr::reconstruct(const std::vector<int>& array) {
// }

}  // namespace coding_interview_guide::binary_tree::reconstruct_bst_using_arr
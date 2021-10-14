#include "08.vector_and_matrix/15.odd_even_idx_all_odd_even.h"

namespace coding_interview_guide::vector_and_matrix::odd_even_idx_all_odd_even {

void OddEvenIdxAllOddEven::adjust(std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec.size() <= 1) {
        return;
    }
    size_t even_index_begin = 0, odd_index_begin = 1;
    while (true) {
        while (vec[even_index_begin] % 2 == 0) {
            even_index_begin += 2;
            if (even_index_begin >= vec_size) {
                return;
            }
        }
        while (vec[odd_index_begin] % 2 == 1) {
            odd_index_begin += 2;
            if (odd_index_begin >= vec_size) {
                return;
            }
        }
        std::swap(vec[even_index_begin], vec[odd_index_begin]);
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::odd_even_idx_all_odd_even

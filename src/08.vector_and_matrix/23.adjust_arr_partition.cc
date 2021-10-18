#include "08.vector_and_matrix/23.adjust_arr_partition.h"

namespace coding_interview_guide::vector_and_matrix::adjust_arr_partition {

void AdjustArrPartition::adjust1(std::vector<int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 2) {
        return;
    }
    size_t last_order_index = 0;
    for (size_t i = 1; i < vec_size; ++i) {
        if (vec[i] != vec[last_order_index]) {
            std::swap(vec[++last_order_index], vec[i]);
        }
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::adjust_arr_partition

#include "08.vector_and_matrix/25.non_exist_min_pos_num.h"

namespace coding_interview_guide::vector_and_matrix::non_exist_min_pos_num {

unsigned int NonExistMinPosNum::pos_num(const std::vector<int>& vec) {
    std::vector<int> copy_vec(vec);
    int left = 0, right = static_cast<int>(vec.size());
    while (left < right) {
        if (copy_vec[left] == left + 1) {
            ++left;
        } else if (copy_vec[left] > right || copy_vec[left] <= left || copy_vec[copy_vec[left] - 1] == copy_vec[left]) {
            copy_vec[left] = copy_vec[--right];
        } else {
            std::swap(copy_vec[left], copy_vec[copy_vec[left] - 1]);
        }
    }
    return left + 1;
}

}  // namespace coding_interview_guide::vector_and_matrix::non_exist_min_pos_num

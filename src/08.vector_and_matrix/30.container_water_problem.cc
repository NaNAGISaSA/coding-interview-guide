#include "08.vector_and_matrix/30.container_water_problem.h"

namespace coding_interview_guide::vector_and_matrix::container_water_problem {

unsigned int ContainerWaterProblem::capacity(const std::vector<unsigned int>& vec) {
    size_t vec_size = vec.size();
    if (vec_size < 3) {
        return 0U;
    }
    size_t left = 1, right = vec_size - 2;
    unsigned int left_max = vec[0], right_max = vec[vec_size - 1];
    unsigned int result = 0U;
    while (left <= right) {
        if (left_max <= right_max) {
            if (left_max >= vec[left]) {
                result = result + left_max - vec[left];
            } else {
                left_max = vec[left];
            }
            ++left;
        } else {
            if (right_max >= vec[right]) {
                result = result + right_max - vec[right];
            } else {
                right_max = vec[right];
            }
            --right;
        }
    }
    return result;
}

}  // namespace coding_interview_guide::vector_and_matrix::container_water_problem

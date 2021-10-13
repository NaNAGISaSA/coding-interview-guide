#include "08.vector_and_matrix/14.natural_number_sort.h"

namespace coding_interview_guide::vector_and_matrix::natural_number_sort {

void NaturalNumberSort::sort(std::vector<unsigned int>& vec) {
    unsigned int vec_size = static_cast<unsigned int>(vec.size());
    if (vec_size <= 1U) {
        return;
    }
    for (unsigned int i = 0U; i < vec_size; ++i) {
        while (vec[i] != i + 1U) {
            std::swap(vec[i], vec[vec[i] - 1]);
        }
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::natural_number_sort

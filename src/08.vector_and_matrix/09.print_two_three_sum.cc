#include <iostream>

#include "08.vector_and_matrix/09.print_two_three_sum.h"

namespace coding_interview_guide::vector_and_matrix::print_two_three_sum {

void PrintTwoThreeSum::print_two(const std::vector<int>& vec, int sum) {
    if (vec.size() <= 1) {
        return;
    }
    long i = 0, j = vec.size() - 1;
    int left = 0, right = 0;
    while (i < j) {
        left = vec[i];
        right = vec[j];
        if (left + right == sum) {
            std::cout << left << ", " << right << std::endl;
            while (vec[++i] == left) {
            }
            while (vec[--j] == right) {
            }
        } else if (left + right < sum) {
            ++i;
        } else {
            --j;
        }
    }
}

void PrintTwoThreeSum::print_three(const std::vector<int>& vec, int sum) {
}

}  // namespace coding_interview_guide::vector_and_matrix::print_two_three_sum

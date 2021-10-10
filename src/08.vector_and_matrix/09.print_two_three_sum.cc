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
    size_t vec_size = vec.size();
    if (vec_size <= 2) {
        return;
    }

    int target = 0, curr_num = 0;
    auto print_two = [&target, &curr_num, &vec_size, &vec](size_t start) {
        if (start + 1 == vec_size) {
            return;
        }
        long i = start, j = vec_size - 1;
        int left = 0, right = 0;
        while (i < j) {
            left = vec[i];
            right = vec[j];
            if (left + right == target) {
                std::cout << curr_num << ", " << left << ", " << right << std::endl;
                while (vec[++i] == left) {
                }
                while (vec[--j] == right) {
                }
            } else if (left + right < target) {
                ++i;
            } else {
                --j;
            }
        }
    };

    for (size_t i = 0; i < vec_size;) {
        curr_num = vec[i];
        target = sum - curr_num;
        print_two(i + 1);
        while (vec[++i] == curr_num) {
        }
    }
}

}  // namespace coding_interview_guide::vector_and_matrix::print_two_three_sum

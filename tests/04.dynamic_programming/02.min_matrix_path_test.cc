#include <gtest/gtest.h>

#include "04.dynamic_programming/02.min_matrix_path.h"

using namespace coding_interview_guide::dynamic_programming::min_matrix_path;

TEST(MIN_MATRIX_PATH, MIN_MATRIX_PATH_EXAMPLE_TEST) {
    std::vector<std::vector<long>> matrix{{1, 3, 5, 9}, {8, 1, 3, 4}, {5, 0, 6, 1}, {8, 8, 4, 0}};
    ASSERT_EQ(MinMatrixPath::min_sum(matrix), 12);
}

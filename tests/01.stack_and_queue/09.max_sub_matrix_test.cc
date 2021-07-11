#include <gtest/gtest.h>

#include "01.stack_and_queue/09.max_sub_matrix.h"

using namespace coding_interview_guide::stack_and_queue::max_sub_matrix;

TEST(MAX_SUB_MATIRX, MAX_SUB_MATIRX_EXAMPLE_TEST) {
    std::vector<std::vector<int>> input1{{1, 1, 1, 0, 1, 1}};
    size_t result1 = MaxSubMatrix::max_sub_matirx(input1);
    ASSERT_EQ(result1, 3);
    std::vector<std::vector<int>> input2{{1, 0, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 0}};
    size_t result2 = MaxSubMatrix::max_sub_matirx(input2);
    ASSERT_EQ(result2, 6);
}

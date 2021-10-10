#include <gtest/gtest.h>

#include "08.vector_and_matrix/07.find_num_in_order_matrix.h"

using namespace coding_interview_guide::vector_and_matrix::find_num_in_order_matrix;

TEST(FIND_NUM_IN_ORDER_MATRIX, FIND_NUM_IN_ORDER_MATRIX_EXAMPLE_TEST) {
    ASSERT_TRUE(FindNumInOrderMatrix::find_num({{0, 1, 2, 5}, {2, 3, 4, 7}, {4, 4, 4, 8}, {5, 7, 7, 9}}, 7));
    ASSERT_TRUE(FindNumInOrderMatrix::find_num({{1, 2, 3, 4}, {2, 3, 4, 5}}, 5));
    ASSERT_FALSE(FindNumInOrderMatrix::find_num({{0, 1, 2, 5}, {2, 3, 4, 7}, {4, 4, 4, 8}, {5, 7, 7, 9}}, 6));
    ASSERT_FALSE(FindNumInOrderMatrix::find_num({{1, 2, 3, 4}, {2, 3, 4, 5}}, 6));
}

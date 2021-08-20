#include <gtest/gtest.h>

#include "03.binary_tree/05.max_path_length_for_sum.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::max_path_length_for_sum;

TEST(MAX_PATH_LENGTH_FOR_SUM, MAX_PATH_LENGTH_FOR_SUM_EXAMPLE_TEST) {
    Node<int> node1(-3), node2(3), node3(-9), node4(1), node5(0), node6(2), node7(1), node8(1), node9(6);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper(&node3, &node6, &node7);
    construct_tree_helper(&node5, &node8, &node9);
    ASSERT_EQ(MaxPathLength::max_length(&node1, 6), 4);
    ASSERT_EQ(MaxPathLength::max_length(&node1, 1), 4);
    ASSERT_EQ(MaxPathLength::max_length(&node1, -1), 0);
    ASSERT_EQ(MaxPathLength::max_length(&node1, -9), 1);
}
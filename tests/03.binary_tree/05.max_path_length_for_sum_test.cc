#include <gtest/gtest.h>

#include "03.binary_tree/05.max_path_length_for_sum.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::max_path_length_for_sum;

TEST(MAX_PATH_LENGTH_FOR_SUM, MAX_PATH_LENGTH_FOR_SUM_EXAMPLE_TEST) {
    Node<int> node1(-3), node2(3), node3(-9), node4(1), node5(0), node6(2), node7(1), node8(1), node9(6);
    node1.left = &node2;
    node1.right = &node3;
    node2.left = &node4;
    node2.right = &node5;
    node3.left = &node6;
    node3.right = &node7;
    node5.left = &node8;
    node5.right = &node9;
    ASSERT_EQ(MaxPathLength::max_length(&node1, 6), 4);
    ASSERT_EQ(MaxPathLength::max_length(&node1, 1), 4);
}
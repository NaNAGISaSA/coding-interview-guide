#include <gtest/gtest.h>

#include "03.binary_tree/02.min_depth_for_binary_tree.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::min_depth_for_binary_tree;

TEST(MIN_DEPTH_FOR_BINARY_TREE, MIN_DEPTH_FOR_BINARY_TREE_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5);
    node1.left = &node2;
    node2.left = &node3;
    node3.right = &node4;
    node2.right = &node5;
    ASSERT_EQ(MinDepthForBinaryTree::min_depth(&node1), 3);
}

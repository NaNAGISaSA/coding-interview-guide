#include <gtest/gtest.h>

#include "03.binary_tree/12.is_balanced_binary_tree.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::is_balanced_binary_tree;

TEST(IS_BALANCED_BINARY_TREE, IS_BALANCED_BINARY_TREE_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8), node9(9);
    construct_tree_helper(&node1, &node2, &node3);
    ASSERT_TRUE(IsBalancedBinaryTree::is_balanced(&node1));
    construct_tree_helper<int>(&node2, &node4, nullptr);
    construct_tree_helper<int>(&node4, &node5, nullptr);
    ASSERT_FALSE(IsBalancedBinaryTree::is_balanced(&node1));
}

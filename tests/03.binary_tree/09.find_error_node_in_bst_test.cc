#include <gtest/gtest.h>

#include "03.binary_tree/09.find_error_node_in_bst.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_error_node_in_bst;

TEST(FIND_ERROR_NODE_IN_BST, FIND_ERROR_NODE_IN_BST_EXAMPLE_TEST_ONE) {
    Node<int> node1(1), node2(2), node3(3);
    construct_tree_helper(&node3, &node1, &node2);
    auto result = FindErrorNodeInBst::error_node(&node3);
    ASSERT_EQ(result.first, 2);
    ASSERT_EQ(result.second, 3);
}

TEST(FIND_ERROR_NODE_IN_BST, FIND_ERROR_NODE_IN_BST_EXAMPLE_TEST_TWO) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    construct_tree_helper(&node3, &node2, &node5);
    construct_tree_helper<int>(&node2, &node6, nullptr);
    construct_tree_helper(&node5, &node4, &node1);
    auto result = FindErrorNodeInBst::error_node(&node3);
    ASSERT_EQ(result.first, 1);
    ASSERT_EQ(result.second, 6);
}

#include <gtest/gtest.h>

#include "03.binary_tree/16.find_next_node_in_bt.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_next_node_in_bt;

TEST(FIND_NEXT_NODE_IN_BT, FIND_NEXT_NODE_IN_BT_TEST) {
    NewNode<int> node6(1), node3(3), node9(9), node1(1), node4(4), node2(2, &node1), node5(5, &node4), node8(8),
        node10(10), node7(7, &node8);
    construct_tree_helper<int>(&node6, &node3, &node9, nullptr);
    construct_tree_helper(&node3, &node1, &node4, &node6);
    construct_tree_helper(&node9, &node8, &node10, &node6);
    construct_tree_helper<int>(&node1, nullptr, &node2, &node3);
    construct_tree_helper<int>(&node4, nullptr, &node5, &node3);
    construct_tree_helper<int>(&node8, &node7, nullptr, &node9);
    ASSERT_EQ(FindNextNode::find_node(&node3), &node4);
    ASSERT_EQ(FindNextNode::find_node(&node5), &node6);
    ASSERT_EQ(FindNextNode::find_node(&node10), nullptr);
}

TEST(FIND_NEXT_NODE_IN_BT, FIND_NEXT_NODE_IN_BT_OPT_TEST) {
    NewNode<int> node6(1), node3(3), node9(9), node1(1), node4(4), node2(2, &node1), node5(5, &node4), node8(8),
        node10(10), node7(7, &node8);
    construct_tree_helper<int>(&node6, &node3, &node9, nullptr);
    construct_tree_helper(&node3, &node1, &node4, &node6);
    construct_tree_helper(&node9, &node8, &node10, &node6);
    construct_tree_helper<int>(&node1, nullptr, &node2, &node3);
    construct_tree_helper<int>(&node4, nullptr, &node5, &node3);
    construct_tree_helper<int>(&node8, &node7, nullptr, &node9);
    ASSERT_EQ(FindNextNode::find_node_opt(&node3), &node4);
    ASSERT_EQ(FindNextNode::find_node_opt(&node5), &node6);
    ASSERT_EQ(FindNextNode::find_node_opt(&node10), nullptr);
}

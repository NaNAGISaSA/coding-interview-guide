#include <gtest/gtest.h>

#include "03.binary_tree/16.find_next_node_in_bt.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_next_node_in_bt;

TEST(FIND_NEXT_NODE_IN_BT, FIND_NEXT_NODE_IN_BT_TEST) {
    NewNode<int> node1(1), node2(2, &node1), node3(3, &node1);
    construct_tree_helper<int>(&node1, &node2, &node3, nullptr);
    ASSERT_EQ(FindNextNode::find_node(&node1), &node3);
    ASSERT_EQ(FindNextNode::find_node(&node3), nullptr);
}
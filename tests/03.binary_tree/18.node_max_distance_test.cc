#include <gtest/gtest.h>

#include "03.binary_tree/18.node_max_distance.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::node_max_distance;

TEST(NODE_MAX_DISTANCE, NODE_MAX_DISTANCE_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper(&node3, &node6, &node7);
    construct_tree_helper<int>(&node7, &node8, nullptr);
    ASSERT_EQ(NodeMaxDistance::max_distance(&node1), 6);
    Node<int> node11(1), node22(2), node33(3), node44(4), node55(5), node66(6);
    construct_tree_helper<int>(&node11, &node22, nullptr);
    construct_tree_helper(&node22, &node33, &node55);
    construct_tree_helper<int>(&node33, &node44, nullptr);
    construct_tree_helper<int>(&node55, &node66, nullptr);
    ASSERT_EQ(NodeMaxDistance::max_distance(&node11), 5);
}

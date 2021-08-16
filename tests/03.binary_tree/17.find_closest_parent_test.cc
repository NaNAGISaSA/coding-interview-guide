#include <gtest/gtest.h>

#include "03.binary_tree/17.find_closest_parent.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_closest_parent;

TEST(FIND_CLOESTED_PARENT, FIND_CLOESTED_PARENT_POST_ORDER_METHOD_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper(&node3, &node6, &node7);
    construct_tree_helper<int>(&node7, &node8, nullptr);
    ASSERT_EQ(FindClosestNode::find_closest_parent(&node1, &node4, &node6), &node1);
    ASSERT_EQ(FindClosestNode::find_closest_parent(&node1, &node8, &node6), &node3);
}

TEST(FIND_CLOESTED_PARENT, FREQUENT_FIND_CLOESTED_PARENT_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper(&node3, &node6, &node7);
    construct_tree_helper<int>(&node7, &node8, nullptr);
    FrequentFindClosestNode algorithm(&node1);
    ASSERT_EQ(algorithm.find_closest_parent(&node4, &node6), &node1);
    ASSERT_EQ(algorithm.find_closest_parent(&node8, &node6), &node3);
}

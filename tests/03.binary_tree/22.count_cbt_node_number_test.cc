#include <gtest/gtest.h>

#include "03.binary_tree/22.count_cbt_node_number.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::count_cbt_node_number;

TEST(COUNT_CBT_NODE_NUMBER, COUNT_CBT_NODE_NUMBER_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper<int>(&node2, &node4, nullptr);
    ASSERT_EQ(CountCBTNodeNumber::count(&node1), 4);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper<int>(&node3, &node6, nullptr);
    ASSERT_EQ(CountCBTNodeNumber::count(&node1), 6);
}

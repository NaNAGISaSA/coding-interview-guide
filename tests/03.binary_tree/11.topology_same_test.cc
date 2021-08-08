#include <gtest/gtest.h>

#include "03.binary_tree/11.topology_same.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::topology_same;

TEST(TOPOLOPY_SAME, TOPOLOPY_SAME_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8), node9(9);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper(&node3, &node6, &node7);
    construct_tree_helper<int>(&node4, nullptr, &node8);
    construct_tree_helper<int>(&node5, &node9, nullptr);
    Node<int> node2_(2), node4_(4), node5_(5), node8_(8), node9_(9);
    construct_tree_helper(&node2_, &node4_, &node5_);
    construct_tree_helper<int>(&node4_, nullptr, &node8_);
    ASSERT_FALSE(TopologySame::is_same(&node1, &node2_));
    construct_tree_helper<int>(&node5_, &node9_, nullptr);
    ASSERT_TRUE(TopologySame::is_same(&node1, &node2_));
}

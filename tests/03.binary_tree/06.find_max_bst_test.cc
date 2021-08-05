#include <gtest/gtest.h>

#include "03.binary_tree/06.find_max_bst.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_max_bst;

TEST(FIND_MAX_BST, FIND_MAX_BST_EXAMPLE_TEST) {
    Node<int> node1(12), node2(10), node3(13), node4(4), node5(14), node6(2), node7(5), node8(11), node9(15),
        node10(13), node11(20), node12(16);
    construct_tree_helper(node1, node2, node3);
    construct_tree_helper(node2, node4, node5);
    construct_tree_helper(node4, node6, node7);
    construct_tree_helper(node5, node8, node9);
    construct_tree_helper(node3, node11, node12);
    ASSERT_EQ(FindMaxBST::find_max_bst(&node1), &node2);
}

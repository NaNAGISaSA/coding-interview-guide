#include <gtest/gtest.h>

#include "03.binary_tree/06.find_max_bst.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_max_bst;

TEST(FIND_MAX_BST, FIND_MAX_BST_EXAMPLE_TEST) {
    Node<int> node1(12), node2(10), node3(13), node4(4), node5(14), node6(2), node7(5), node8(11), node9(15),
        node10(13), node11(20), node12(16);
    node1.left = &node2;
    node1.right = &node3;
    node2.left = &node4;
    node2.right = &node5;
    node4.left = &node6;
    node4.right = &node7;
    node5.left = &node8;
    node5.right = &node9;
    node3.left = &node11;
    node3.right = &node12;
    ASSERT_EQ(FindMaxBST::find_max_bst(&node1), &node2);
}

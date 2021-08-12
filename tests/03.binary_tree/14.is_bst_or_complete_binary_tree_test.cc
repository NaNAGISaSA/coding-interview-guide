#include <gtest/gtest.h>

#include "03.binary_tree/14.is_bst_or_complete_binary_tree.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::is_bst_or_complete_binary_tree;

TEST(IS_BST_OR_COMPLETE_BINARY_TREE, IS_BST_TEST) {
    Node<int> node1(1), node2(2), node3(3);
    construct_tree_helper<int>(&node1, nullptr, &node3);
    construct_tree_helper<int>(&node3, &node2, nullptr);
    ASSERT_TRUE(IsBstOrCompleteBinaryTree::is_bst(&node1));
    Node<int> node4(4), node5(5), node6(7);
    construct_tree_helper(&node6, &node4, &node5);
    ASSERT_FALSE(IsBstOrCompleteBinaryTree::is_bst(&node6));
}

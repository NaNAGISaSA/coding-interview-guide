#include <gtest/gtest.h>

#include "03.binary_tree/01.traverse_binary_tree.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::traverse_binary_tree;

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_PRE_ORDER) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node1.left = &node2;
    node2.left = &node3;
    node2.right = &node4;
    node1.right = &node5;
    node5.right = &node6;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::pre_order_traverse(&node1);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_PRE_ORDER_RECURSE) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node1.left = &node2;
    node2.left = &node3;
    node2.right = &node4;
    node1.right = &node5;
    node5.right = &node6;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::pre_order_traverse_recurse(&node1);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_IN_ORDER) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node2.left = &node1;
    node2.right = &node3;
    node4.left = &node2;
    node4.right = &node6;
    node6.left = &node5;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::in_order_traverse(&node4);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_IN_ORDER_RECURSE) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node2.left = &node1;
    node2.right = &node3;
    node4.left = &node2;
    node4.right = &node6;
    node6.left = &node5;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::in_order_traverse_recurse(&node4);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_POST_ORDER_S1) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node3.left = &node1;
    node3.right = &node2;
    node6.left = &node3;
    node6.right = &node5;
    node5.right = &node4;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::post_order_traverse_s1_method(&node6);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_POST_ORDER_S2) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node3.left = &node1;
    node3.right = &node2;
    node6.left = &node3;
    node6.right = &node5;
    node5.right = &node4;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::post_order_traverse_s2_method(&node6);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

TEST(TRAVERSE_BINARY_TREE, TRAVERSE_BINARY_TREE_POST_ORDER_RECURSE) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node3.left = &node1;
    node3.right = &node2;
    node6.left = &node3;
    node6.right = &node5;
    node5.right = &node4;
    testing::internal::CaptureStdout();
    TraverseBinaryTree::post_order_traverse_recurse(&node6);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "1 2 3 4 5 6 ");
}

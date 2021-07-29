#include <gtest/gtest.h>

#include "03.binary_tree/03.print_binary_tree_elegantly.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::print_binary_tree_elegantly;

TEST(PRINT_BINARY_TREE_ELEGHANTLY, PRINT_BINARY_TREE_ELEGHANTLY_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node1.left = &node2;
    node1.right = &node3;
    node2.right = &node4;
    node3.left = &node5;
    node3.right = &node6;
    testing::internal::CaptureStdout();
    PrintBinaryTreeElegantly::print(&node1);
    // clang-format off
    std::string output = 
    "                                         v6v       \n"
    "                        v3v       \n"
    "                                         ^5^       \n"
    "       H1H       \n"
    "                                         v4v       \n"
    "                        ^2^       \n";
    // clang-format on
    ASSERT_EQ(testing::internal::GetCapturedStdout(), output);
}

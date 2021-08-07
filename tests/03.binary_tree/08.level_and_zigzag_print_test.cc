#include <gtest/gtest.h>
#include <string>

#include "03.binary_tree/08.level_and_zigzag_print.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::level_and_zigzag_print;

TEST(LEVEL_AND_ZIGZAG_PRINT, LEVEL_PRINT_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper<int>(&node2, &node4, nullptr);
    construct_tree_helper(&node3, &node5, &node6);
    construct_tree_helper(&node5, &node7, &node8);
    // clang-format off
    std::string truth = 
        "Level 1 : 1\n"
        "Level 2 : 2 3\n"
        "Level 3 : 4 5 6\n"
        "Level 4 : 7 8\n";
    // clang-format on
    testing::internal::CaptureStdout();
    PrintBinaryTree::level_print(&node1);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), truth);
}

TEST(LEVEL_AND_ZIGZAG_PRINT, LEVEL_PRINT_METHOD_TWO_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7), node8(8);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper<int>(&node2, &node4, nullptr);
    construct_tree_helper(&node3, &node5, &node6);
    construct_tree_helper(&node5, &node7, &node8);
    // clang-format off
    std::string truth = 
        "Level 1 : 1\n"
        "Level 2 : 2 3\n"
        "Level 3 : 4 5 6\n"
        "Level 4 : 7 8\n";
    // clang-format on
    testing::internal::CaptureStdout();
    PrintBinaryTree::level_print_method2(&node1);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), truth);
}

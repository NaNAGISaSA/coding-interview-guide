#include <gtest/gtest.h>

#include "03.binary_tree/15.reconstruct_bst_using_in_order_arr.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::reconstruct_bst_using_in_order_arr;

TEST(RECONSTRUCT_BST_USING_IN_ORDER_ARR, RECONSTRUCT_BST_USING_IN_ORDER_ARR_EXAMPLE_TEST) {
    std::vector<int> vec{2};
    auto root = ReconstructBstUsingInOrderArr::reconstruct(vec);
    ASSERT_EQ(root->val, 2);
    ASSERT_EQ(root->left, nullptr);
    ASSERT_EQ(root->right, nullptr);
    vec.push_back(4);
    root = ReconstructBstUsingInOrderArr::reconstruct(vec);
    ASSERT_EQ(root->val, 4);
    ASSERT_EQ(root->left->val, 2);
    ASSERT_EQ(root->right, nullptr);
    vec.push_back(6);
    root = ReconstructBstUsingInOrderArr::reconstruct(vec);
    ASSERT_EQ(root->val, 4);
    ASSERT_EQ(root->left->val, 2);
    ASSERT_EQ(root->right->val, 6);
}

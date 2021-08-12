#include <gtest/gtest.h>

#include "03.binary_tree/13.reconstruct_bst_using_arr.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::reconstruct_bst_using_arr;

TEST(RECONSTRUCT_BST_USING_ARR, RECONSTRUCT_BST_USING_ARR_EXAMPLE_TEST1) {
    std::vector<int> vec1{2, 3, 1};
    ASSERT_TRUE(ReconstructBstUsingArr::can_reconstruct(vec1));
    std::vector<int> vec2{3, 1, 2};
    ASSERT_FALSE(ReconstructBstUsingArr::can_reconstruct(vec2));
}

TEST(RECONSTRUCT_BST_USING_ARR, RECONSTRUCT_BST_USING_ARR_EXAMPLE_TEST2) {
    std::vector<int> vec1{2, 3, 1};
    auto root = ReconstructBstUsingArr::reconstruct(vec1);
    ASSERT_EQ(root->val, 1);
    ASSERT_EQ(root->left, nullptr);
    ASSERT_EQ(root->right->val, 3);
    ASSERT_EQ(root->right->left->val, 2);
    ASSERT_EQ(root->right->right, nullptr);
}

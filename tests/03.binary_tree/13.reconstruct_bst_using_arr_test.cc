#include <gtest/gtest.h>

#include "03.binary_tree/13.reconstruct_bst_using_arr.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::reconstruct_bst_using_arr;

TEST(RECONSTRUCT_BST_USING_ARR, RECONSTRUCT_BST_USING_ARR_EXAMPLE_TEST) {
    std::vector<int> vec1{2, 3, 1};
    ASSERT_TRUE(ReconstructBstUsingArr::can_reconstruct(vec1));
    std::vector<int> vec2{3, 1, 2};
    ASSERT_FALSE(ReconstructBstUsingArr::can_reconstruct(vec2));
}

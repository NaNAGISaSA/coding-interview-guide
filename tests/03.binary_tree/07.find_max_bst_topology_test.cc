#include <gtest/gtest.h>

#include "03.binary_tree/07.find_max_bst_topology.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::find_max_bst_topology;

TEST(FIND_MAX_BST_TOPOLOGY, FIND_MAX_BST_TOPOLOGY_BINARY_SEARCH_TEST) {
    Node<int> node6(6), node1(1), node0(0), node3(3), node12(12), node10(10), node13(13), node4(4), node14(14),
        node20(20), node16(16), node2(2), node5(5), node11(11), node15(15);
    construct_tree_helper(node6, node1, node12);
    construct_tree_helper(node1, node0, node3);
    construct_tree_helper(node12, node10, node13);
    construct_tree_helper(node10, node4, node14);
    construct_tree_helper(node4, node2, node5);
    construct_tree_helper(node14, node11, node15);
    construct_tree_helper(node13, node20, node16);
    ASSERT_EQ(FindMaxBSTTopology::max_topology_num(&node6), 8);
}

TEST(FIND_MAX_BST_TOPOLOGY, FIND_MAX_BST_TOPOLOGY_OPT_TEST) {
    Node<int> node6(6), node1(1), node0(0), node3(3), node12(12), node10(10), node13(13), node4(4), node14(14),
        node20(20), node16(16), node2(2), node5(5), node11(11), node15(15);
    construct_tree_helper(node6, node1, node12);
    construct_tree_helper(node1, node0, node3);
    construct_tree_helper(node12, node10, node13);
    construct_tree_helper(node10, node4, node14);
    construct_tree_helper(node4, node2, node5);
    construct_tree_helper(node14, node11, node15);
    construct_tree_helper(node13, node20, node16);
    ASSERT_EQ(FindMaxBSTTopology::max_topology_num_opt(&node6), 8);
}

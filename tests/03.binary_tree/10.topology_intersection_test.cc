#include <gtest/gtest.h>

#include "03.binary_tree/10.topology_intersection.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::topology_intersection;

TEST(TOPOLOPY_INTERSECTION, TOPOLOPY_INTERSECTION_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6), node7(7);
    construct_tree_helper(&node1, &node2, &node3);
    construct_tree_helper(&node2, &node4, &node5);
    construct_tree_helper<int>(&node3, &node6, nullptr);
    construct_tree_helper<int>(&node5, nullptr, &node7);
    ASSERT_TRUE(TopologyIntersection::topology_intersection(&node1, &node2));
}

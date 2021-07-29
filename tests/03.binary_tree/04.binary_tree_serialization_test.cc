#include <gtest/gtest.h>

#include "03.binary_tree/04.binary_tree_serialization.h"

using namespace coding_interview_guide::binary_tree;
using namespace coding_interview_guide::binary_tree::binary_tree_serialization;

TEST(BINARY_TREE_SERIAL, BINARY_TREE_SERIAL_PRE_ORDER_SERIAL_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node1.left = &node2;
    node1.right = &node3;
    node2.right = &node4;
    node3.left = &node5;
    node3.right = &node6;
    ASSERT_EQ(BinaryTreeSerial::pre_order_serial(&node1), "1!2!#!4!#!#!3!5!#!#!6!#!#!");
}

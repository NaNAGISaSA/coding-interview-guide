#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/03.delete_a_div_b_node.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::delete_a_div_b_node;

TEST(DELETE_A_DIV_B_NODE, DELETE_MIDDEL_NODE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 5);
    Node<int>* head1_ = DeleteCertainNode::delete_middle_node(head1);
    ASSERT_EQ(head1_->val, 1);
    ASSERT_EQ(head1_->next->val, 5);
    Node<int>* head2 = wrapper.make_linked_list(1, 2, 5, 8);
    Node<int>* head2_ = DeleteCertainNode::delete_middle_node(head2);
    ASSERT_EQ(head2_->val, 1);
    ASSERT_EQ(head2_->next->val, 5);
    ASSERT_EQ(head2_->next->next->val, 8);
}

TEST(DELETE_A_DIV_B_NODE, DELETE_A_DIV_B_NODE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 3, 5);
    Node<int>* head1_ = DeleteCertainNode::delete_certain_node(head1, 2, 3);
    ASSERT_EQ(head1_->val, 1);
    ASSERT_EQ(head1_->next->val, 2);
    ASSERT_EQ(head1_->next->next->val, 5);
    Node<int>* head2 = wrapper.make_linked_list(1, 2, 3, 5);
    Node<int>* head2_ = DeleteCertainNode::delete_certain_node(head2, 2, 4);
    ASSERT_EQ(head2_->val, 1);
    ASSERT_EQ(head2_->next->val, 3);
    ASSERT_EQ(head2_->next->next->val, 5);
}

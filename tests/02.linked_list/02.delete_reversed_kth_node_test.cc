#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "02.linked_list/02.delete_reversed_kth_node.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::delete_reversed_kth_node;

TEST(DELETE_REVERSED_KTH_NODE, DELETE_REVERSED_KTH_NODE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 5, 10);
    Node<int>* head1_ = DeleteReversedKthNode::delete_kth_node(head1, 2);
    ASSERT_EQ(head1_->val, 1);
    ASSERT_EQ(head1_->next->val, 2);
    ASSERT_EQ(head1_->next->next->val, 10);
    Node<int>* head2 = wrapper.make_linked_list(1, 2);
    Node<int>* head2_ = DeleteReversedKthNode::delete_kth_node(head2, 2);
    ASSERT_EQ(head2_->val, 2);
}

TEST(DELETE_REVERSED_KTH_NODE, DELETE_REVERSED_KTH_DOUBLE_NODE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    DoubleNode<int>* head1 = wrapper.make_double_linked_list(1, 2, 5, 10);
    DoubleNode<int>* head1_ = DeleteReversedKthNode::delete_kth_double_node(head1, 2);
    ASSERT_EQ(head1_->val, 1);
    ASSERT_EQ(head1_->next->val, 2);
    ASSERT_EQ(head1_->next->next->val, 10);
    ASSERT_EQ(head1_->next->next->prev, head1_->next);
    DoubleNode<int>* head2 = wrapper.make_double_linked_list(1, 2);
    DoubleNode<int>* head2_ = DeleteReversedKthNode::delete_kth_double_node(head2, 2);
    ASSERT_EQ(head2_->val, 2);
    ASSERT_EQ(head2_->prev, nullptr);
}

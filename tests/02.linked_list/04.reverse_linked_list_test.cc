#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "02.linked_list/04.reverse_linked_list.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::reverse_linked_list;

TEST(REVERSE_LINKED_LIST, REVERSE_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 3, 4);
    Node<int>* head1_ = ReverseLinkedList::reverse_linked_list(head1);
    ASSERT_EQ(head1_->val, 4);
    ASSERT_EQ(head1_->next->val, 3);
    ASSERT_EQ(head1_->next->next->val, 2);
    ASSERT_EQ(head1_->next->next->next->val, 1);
    ASSERT_EQ(head1_->next->next->next->next, nullptr);
}

TEST(REVERSE_LINKED_LIST, REVERSE_DOUBLE_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    DoubleNode<int>* head1 = wrapper.make_double_linked_list(1, 2, 3);
    DoubleNode<int>* head1_ = ReverseLinkedList::reverse_double_linked_list(head1);
    ASSERT_EQ(head1_->val, 3);
    ASSERT_EQ(head1_->prev, nullptr);
    ASSERT_EQ(head1_->next->val, 2);
    ASSERT_EQ(head1_->next->next->val, 1);
    ASSERT_EQ(head1_->next->next->next, nullptr);
}

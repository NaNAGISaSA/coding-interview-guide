#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/05.reverse_part_of_linked_list.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::reverse_part_of_linked_list;

TEST(REVERSE_PART_LINKED_LIST, REVERSE_PART_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 3, 4);
    Node<int>* head1_ = ReversePartLinkedList::reverse_linked_list(head1, 2, 4);
    ASSERT_EQ(head1_->val, 1);
    ASSERT_EQ(head1_->next->val, 4);
    ASSERT_EQ(head1_->next->next->val, 3);
    ASSERT_EQ(head1_->next->next->next->val, 2);
    ASSERT_EQ(head1_->next->next->next->next, nullptr);
}

TEST(REVERSE_PART_LINKED_LIST, REVERSE_PART_LINKED_LIST_CHANGE_HEAD) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 3, 4);
    Node<int>* head1_ = ReversePartLinkedList::reverse_linked_list(head1, 1, 3);
    ASSERT_EQ(head1_->val, 3);
    ASSERT_EQ(head1_->next->val, 2);
    ASSERT_EQ(head1_->next->next->val, 1);
    ASSERT_EQ(head1_->next->next->next->val, 4);
    ASSERT_EQ(head1_->next->next->next->next, nullptr);
    Node<int>* head2 = wrapper.make_linked_list(1);
    Node<int>* head2_ = ReversePartLinkedList::reverse_linked_list(head2, 1, 1);
    ASSERT_EQ(head2_->val, 1);
    ASSERT_EQ(head2_->next, nullptr);
}

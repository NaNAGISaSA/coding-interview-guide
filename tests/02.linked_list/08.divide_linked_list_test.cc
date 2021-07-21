#include <gtest/gtest.h>

#include "02.linked_list/08.divide_linked_list.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::divide_linked_list;

TEST(DIVIDE_LINKED_LIST, DIVIDE_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 3, 5, 2, 3, 6);
    auto head1_ = DivideLinkedList::divide_linked_list(head1, 3);
    ASSERT_EQ(head1_->val, 1);
    ASSERT_EQ(head1_->next->val, 2);
    ASSERT_EQ(head1_->next->next->val, 3);
    ASSERT_EQ(head1_->next->next->next->val, 3);
    ASSERT_EQ(head1_->next->next->next->next->val, 5);
    ASSERT_EQ(head1_->next->next->next->next->next->val, 6);
    ASSERT_EQ(head1_->next->next->next->next->next->next, nullptr);
}

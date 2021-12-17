#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/12.reverse_linked_list_by_k.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::reverse_linked_list_by_k;

TEST(REVERSE_LINKED_LIST_BY_K, REVERSE_LINKED_LIST_BY_K_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head1 = wrapper.make_linked_list(1, 2, 3, 4, 5);
    auto head1_ = ReverseLinkedListByK::reverse_linked_list(head1, 2);
    ASSERT_EQ(head1_->val, 2);
    ASSERT_EQ(head1_->next->val, 1);
    ASSERT_EQ(head1_->next->next->val, 4);
    ASSERT_EQ(head1_->next->next->next->val, 3);
    ASSERT_EQ(head1_->next->next->next->next->val, 5);
    ASSERT_EQ(head1_->next->next->next->next->next, nullptr);
    auto head2 = wrapper.make_linked_list(1, 2, 3, 4);
    auto head2_ = ReverseLinkedListByK::reverse_linked_list(head2, 2);
    ASSERT_EQ(head2_->val, 2);
    ASSERT_EQ(head2_->next->val, 1);
    ASSERT_EQ(head2_->next->next->val, 4);
    ASSERT_EQ(head2_->next->next->next->val, 3);
    ASSERT_EQ(head2_->next->next->next->next, nullptr);
}

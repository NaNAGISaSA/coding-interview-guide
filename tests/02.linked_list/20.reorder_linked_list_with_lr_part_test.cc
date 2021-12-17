#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/20.reorder_linked_list_with_lr_part.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::reorder_linked_list_with_lr_part;

TEST(REORDER_LINKED_LIST_WITH_LR_PART, REORDER_LINKED_LIST_WITH_LR_PART_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(1, 2, 3, 4, 5);
    auto head_ = ReorderLinkedListWithLRPart::reorder(head);
    ASSERT_EQ(head_->val, 1);
    ASSERT_EQ(head_->next->val, 3);
    ASSERT_EQ(head_->next->next->val, 2);
    ASSERT_EQ(head_->next->next->next->val, 4);
    ASSERT_EQ(head_->next->next->next->next->val, 5);
    ASSERT_EQ(head_->next->next->next->next->next, nullptr);
    auto head2 = wrapper.make_linked_list(1, 2, 3, 4);
    auto head2_ = ReorderLinkedListWithLRPart::reorder(head2);
    ASSERT_EQ(head2_->val, 1);
    ASSERT_EQ(head2_->next->val, 3);
    ASSERT_EQ(head2_->next->next->val, 2);
    ASSERT_EQ(head2_->next->next->next->val, 4);
    ASSERT_EQ(head2_->next->next->next->next, nullptr);
    auto head3 = wrapper.make_linked_list(1, 2, 3);
    auto head3_ = ReorderLinkedListWithLRPart::reorder(head3);
    ASSERT_EQ(head3_->val, 1);
    ASSERT_EQ(head3_->next->val, 2);
    ASSERT_EQ(head3_->next->next->val, 3);
    ASSERT_EQ(head3_->next->next->next, nullptr);
}

TEST(REORDER_LINKED_LIST_WITH_LR_PART, REORDER_LINKED_LIST_WITH_LR_PART_OPT_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(1, 2, 3, 4, 5);
    auto head_ = ReorderLinkedListWithLRPart::reorder_opt(head);
    ASSERT_EQ(head_->val, 1);
    ASSERT_EQ(head_->next->val, 3);
    ASSERT_EQ(head_->next->next->val, 2);
    ASSERT_EQ(head_->next->next->next->val, 4);
    ASSERT_EQ(head_->next->next->next->next->val, 5);
    ASSERT_EQ(head_->next->next->next->next->next, nullptr);
    auto head2 = wrapper.make_linked_list(1, 2, 3, 4);
    auto head2_ = ReorderLinkedListWithLRPart::reorder_opt(head2);
    ASSERT_EQ(head2_->val, 1);
    ASSERT_EQ(head2_->next->val, 3);
    ASSERT_EQ(head2_->next->next->val, 2);
    ASSERT_EQ(head2_->next->next->next->val, 4);
    ASSERT_EQ(head2_->next->next->next->next, nullptr);
    auto head3 = wrapper.make_linked_list(1, 2, 3);
    auto head3_ = ReorderLinkedListWithLRPart::reorder_opt(head3);
    ASSERT_EQ(head3_->val, 1);
    ASSERT_EQ(head3_->next->val, 2);
    ASSERT_EQ(head3_->next->next->val, 3);
    ASSERT_EQ(head3_->next->next->next, nullptr);
}

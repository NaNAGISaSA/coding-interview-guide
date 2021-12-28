#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/16.select_sort_linked_list.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::select_sort_linked_list;

TEST(SELECT_SORT_LINKED_LIST, SELECT_SORT_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(4, 2, 3, 1, 5);
    auto head_ = SelectSortLinkedList::select_sort(head);
    ASSERT_EQ(head_->val, 1);
    ASSERT_EQ(head_->next->val, 2);
    ASSERT_EQ(head_->next->next->val, 3);
    ASSERT_EQ(head_->next->next->next->val, 4);
    ASSERT_EQ(head_->next->next->next->next->val, 5);
    ASSERT_EQ(head_->next->next->next->next->next, nullptr);
    auto head2 = wrapper.make_linked_list(1, 2, 3);
    auto head2_ = SelectSortLinkedList::select_sort(head2);
    ASSERT_EQ(head2_->val, 1);
    ASSERT_EQ(head2_->next->val, 2);
    ASSERT_EQ(head2_->next->next->val, 3);
    ASSERT_EQ(head2_->next->next->next, nullptr);
}

TEST(SELECT_SORT_LINKED_LIST, SELECT_SORT_LINKED_LIST_REVIEW_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(3);
    auto head_ = SelectSortLinkedList::select_sort(head);
    ASSERT_EQ(head_->val, 3);
    ASSERT_EQ(head_->next, nullptr);
}

#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/13.delete_repeat_value_node.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::delete_repeat_value_node;

TEST(DELETE_REPEAT_VALUE_NODE, DELETE_REPEAT_VALUE_NODE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(1, 2, 3, 3, 3, 4, 4, 2);
    auto head_ = DeleteRepeatValueNode::delete_repeat_value_node(head);
    ASSERT_EQ(head_->val, 1);
    ASSERT_EQ(head_->next->val, 2);
    ASSERT_EQ(head_->next->next->val, 3);
    ASSERT_EQ(head_->next->next->next->val, 4);
    ASSERT_EQ(head_->next->next->next->next, nullptr);
}

TEST(DELETE_REPEAT_VALUE_NODE, DELETE_REPEAT_VALUE_NODE_OPT_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(1, 2, 3, 3, 3, 4, 4, 2);
    auto head_ = DeleteRepeatValueNode::delete_repeat_value_node_space_opt(head);
    ASSERT_EQ(head_->val, 1);
    ASSERT_EQ(head_->next->val, 2);
    ASSERT_EQ(head_->next->next->val, 3);
    ASSERT_EQ(head_->next->next->next->val, 4);
    ASSERT_EQ(head_->next->next->next->next, nullptr);
}

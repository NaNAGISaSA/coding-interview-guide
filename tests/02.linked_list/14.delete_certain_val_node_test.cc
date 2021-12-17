#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/14.delete_certain_val_node.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::delete_certain_value_node;

TEST(DELETE_CERTAIN_VALUE_NODE, DELETE_CERTAIN_VALUE_NODE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(3, 2, 3, 3, 4, 2, 1);
    auto head_ = DeleteCertainValueNode::delete_node(head, 3);
    ASSERT_EQ(head_->val, 2);
    ASSERT_EQ(head_->next->val, 4);
    ASSERT_EQ(head_->next->next->val, 2);
    ASSERT_EQ(head_->next->next->next->val, 1);
    ASSERT_EQ(head_->next->next->next->next, nullptr);
}
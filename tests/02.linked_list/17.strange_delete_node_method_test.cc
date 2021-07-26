#include <gtest/gtest.h>
#include <iostream>

#include "02.linked_list/17.strange_delete_node_method.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::strange_delete_node_method;

TEST(STRANGE_DELETE_NODE_METHOD, STRANGE_DELETE_NODE_METHOD_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(3, 2, 4, 5);
    StrangeDeleteNodeMethod::delete_node(head->next);
    ASSERT_EQ(head->val, 3);
    ASSERT_EQ(head->next->val, 4);
    ASSERT_EQ(head->next->next->val, 5);
    ASSERT_EQ(head->next->next->next, nullptr);
}

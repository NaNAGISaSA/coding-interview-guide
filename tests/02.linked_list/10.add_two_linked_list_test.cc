#include <gtest/gtest.h>

#include "00.linked_list_test_utils.h"
#include "02.linked_list/10.add_two_linked_list.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::add_two_linked_list;

TEST(ADD_TWO_LINKED_LIST, ADD_TWO_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(9, 3, 7);
    Node<int>* head2 = wrapper.make_linked_list(6, 3);
    auto result = AddTwoLinkedList::add_two_linked_list(head1, head2);
    ASSERT_EQ(result->val, 1);
    ASSERT_EQ(result->next->val, 0);
    ASSERT_EQ(result->next->next->val, 0);
    ASSERT_EQ(result->next->next->next->val, 0);
    ASSERT_EQ(result->next->next->next->next, nullptr);
}

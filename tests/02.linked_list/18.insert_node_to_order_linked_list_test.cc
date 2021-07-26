#include <gtest/gtest.h>
#include <iostream>

#include "02.linked_list/18.insert_node_to_order_linked_list.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::insert_node_to_order_linked_list;

TEST(INSERT_NODE_TO_ORDERED_LINKED_LIST, INSERT_NODE_TO_ORDERED_LINKED_LIST_COMMON_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(1, 2, 4);
    head->next->next->next = head;
    auto head1 = InsertNodeToOrderLinkedList::insert_node(head, 2);
    ASSERT_EQ(head1->val, 1);
    ASSERT_EQ(head1->next->val, 2);
    ASSERT_EQ(head1->next->next->val, 2);
    ASSERT_EQ(head1->next->next->next->val, 4);
    ASSERT_EQ(head1->next->next->next->next, head1);
    head1->next->next->next->next = nullptr;
}

TEST(INSERT_NODE_TO_ORDERED_LINKED_LIST, INSERT_NODE_TO_ORDERED_LINKED_LIST_BORDER_TEST) {
    LinkedListRAII<int> wrapper;
    auto head = wrapper.make_linked_list(1, 2, 4);
    head->next->next->next = head;
    auto head1 = InsertNodeToOrderLinkedList::insert_node(head, 0);
    ASSERT_EQ(head1->val, 0);
    ASSERT_EQ(head1->next->val, 1);
    ASSERT_EQ(head1->next->next->val, 2);
    ASSERT_EQ(head1->next->next->next->val, 4);
    ASSERT_EQ(head1->next->next->next->next, head1);
    auto head2 = InsertNodeToOrderLinkedList::insert_node(head1, 5);
    ASSERT_EQ(head2->val, 0);
    ASSERT_EQ(head2->next->val, 1);
    ASSERT_EQ(head2->next->next->val, 2);
    ASSERT_EQ(head2->next->next->next->val, 4);
    ASSERT_EQ(head2->next->next->next->next->val, 5);
    ASSERT_EQ(head2->next->next->next->next->next, head2);
    head2->next = nullptr;
}

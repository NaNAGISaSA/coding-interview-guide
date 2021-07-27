#include <gtest/gtest.h>

#include "02.linked_list/19.merge_order_linked_list.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::merge_order_linked_list;

TEST(MERGE_ORDERED_LINKED_LIST, MERGE_ORDERED_LINKED_LIST_EXAMPLE_TEST) {
    Node<int> node1(1), node2(2), node3(3), node4(4), node5(5), node6(6);
    node1.next = &node4;
    node4.next = &node5;
    node2.next = &node3;
    node3.next = &node6;
    auto head = MergeOrderLinkedList::merge(&node1, &node2);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->val, 4);
    ASSERT_EQ(head->next->next->next->next->val, 5);
    ASSERT_EQ(head->next->next->next->next->next->val, 6);
    ASSERT_EQ(head->next->next->next->next->next->next, nullptr);
}

TEST(MERGE_ORDERED_LINKED_LIST, MERGE_ORDERED_LINKED_LIST_BORDER_TEST) {
    Node<int> node1(1), node2(2), node3(2), node4(3);
    node1.next = &node2;
    node3.next = &node4;
    auto head = MergeOrderLinkedList::merge(&node1, &node3);
    ASSERT_EQ(head->val, 1);
    ASSERT_EQ(head->next->val, 2);
    ASSERT_EQ(head->next->next->val, 2);
    ASSERT_EQ(head->next->next->next->val, 3);
    ASSERT_EQ(head->next->next->next->next, nullptr);
}

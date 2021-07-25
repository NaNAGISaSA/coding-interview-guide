#include <gtest/gtest.h>

#include "02.linked_list/15.bst_to_double_linked_list.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::bst_to_double_linked_list;

TEST(BST_TO_DOUBLE_LINKED_LIST, BST_TO_DOUBLE_LINKED_LIST_EXAMPLE_TEST) {
    BST<int> bst2(2), bst5(5), bst8(8);
    BST<int> bst4(4, &bst2, &bst5), bst7(7, nullptr, &bst8);
    BST<int> root(6, &bst4, &bst7);
    auto head = BST2DoubleLinkedList::transfer(&root);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 4);
    ASSERT_EQ(head->next->next->val, 5);
    ASSERT_EQ(head->next->next->next->val, 6);
    ASSERT_EQ(head->next->next->next->next->val, 7);
    ASSERT_EQ(head->next->next->next->next->next->val, 8);
    ASSERT_EQ(head->next->next->next->next->next->next, nullptr);
    ASSERT_EQ(head->next->prev, head);
    ASSERT_EQ(head->next->next->next->prev, head->next->next);
    ASSERT_EQ(head->next->next->next->next->next->prev, head->next->next->next->next);
}

TEST(BST_TO_DOUBLE_LINKED_LIST, BST_TO_DOUBLE_LINKED_LIST_OPT_EXAMPLE_TEST) {
    BST<int> bst2(2), bst5(5), bst8(8);
    BST<int> bst4(4, &bst2, &bst5), bst7(7, nullptr, &bst8);
    BST<int> root(6, &bst4, &bst7);
    auto head = BST2DoubleLinkedList::transfer_recurse(&root);
    ASSERT_EQ(head->val, 2);
    ASSERT_EQ(head->next->val, 4);
    ASSERT_EQ(head->next->next->val, 5);
    ASSERT_EQ(head->next->next->next->val, 6);
    ASSERT_EQ(head->next->next->next->next->val, 7);
    ASSERT_EQ(head->next->next->next->next->next->val, 8);
    ASSERT_EQ(head->next->next->next->next->next->next, nullptr);
    ASSERT_EQ(head->next->prev, head);
    ASSERT_EQ(head->next->next->next->prev, head->next->next);
    ASSERT_EQ(head->next->next->next->next->next->prev, head->next->next->next->next);
}

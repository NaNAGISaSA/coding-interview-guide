#include <gtest/gtest.h>

#include "02.linked_list/07.palindrome_linked_list.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::palindrome_linked_list;

TEST(PALINDROME_LINKED_LIST, PALINDROME_LINKED_LIST_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 3);
    ASSERT_FALSE(PalindromeLinkedList::is_palindrome(head1));
    Node<int>* head2 = wrapper.make_linked_list(1, 2, 1);
    ASSERT_TRUE(PalindromeLinkedList::is_palindrome(head2));
    Node<int>* head3 = wrapper.make_linked_list(1, 2, 2, 1);
    ASSERT_TRUE(PalindromeLinkedList::is_palindrome(head3));
}

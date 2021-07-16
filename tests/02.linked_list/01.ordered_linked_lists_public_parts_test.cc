#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "02.linked_list/01.ordered_linked_lists_public_parts.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::ordered_linked_list_public_part;

TEST(ORDERED_LINKED_LIST_PUBLIC_PART, ORDERED_LINKED_LIST_PUBLIC_PART_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 5, 8, 10);
    Node<int>* head2 = wrapper.make_linked_list(1, 2, 3, 8, 9, 10, 15);
    std::vector<int> result = LinkedListPublicPart::find_public_part(head1, head2);
    ASSERT_THAT(result, testing::ElementsAre(1, 2, 8, 10));
    Node<int>* head3 = wrapper.make_linked_list(2);
    Node<int>* head4 = wrapper.make_linked_list(1, 2);
    std::vector<int> result2 = LinkedListPublicPart::find_public_part(head3, head4);
    ASSERT_THAT(result2, testing::ElementsAre(2));
}

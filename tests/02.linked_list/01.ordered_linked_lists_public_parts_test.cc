#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "02.linked_list/01.ordered_linked_lists_public_parts.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::ordered_linked_list_public_part;

TEST(ORDERED_LINKED_LIST_PUBLIC_PART, ORDERED_LINKED_LIST_PUBLIC_PART_EXAMPLE_TEST){
    LinkedListRAII<int> wrapper;
    Node<int>* head1 = wrapper.make_linked_list(1, 2, 5, 8, 10);
    Node<int>* head2 = wrapper.make_linked_list(1, 2, 3, 8, 9, 10, 15);
    std::vector<int> result = LinkedListPublicPart::find_public_part(head1, head2);
    ASSERT_THAT(result, testing::ElementsAre(1, 2, 8, 10));
}

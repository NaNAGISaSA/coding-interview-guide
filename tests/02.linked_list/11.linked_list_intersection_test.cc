#include <gtest/gtest.h>

#include "02.linked_list/11.linked_list_intersection.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::linked_list_intersection;

TEST(LINKED_LIST_INTERSECTION, LINKED_LIST_INTERSECTION_IS_LOOP_TEST) {
    LinkedListRAII<int> wrapper;
    auto head1 = wrapper.make_linked_list(1, 2, 3, 4, 5);
    ASSERT_EQ(FindLinkedListIntersection::linked_list_loop(head1), nullptr);
    auto head2 = wrapper.make_linked_list(1, 2, 3);
    head2->next->next->next = head2;
    ASSERT_EQ(FindLinkedListIntersection::linked_list_loop(head2), head2);
    head2->next->next->next = nullptr;
    auto head3 = wrapper.make_linked_list(1, 2, 3, 4);
    head3->next->next->next->next = head3->next;
    ASSERT_EQ(FindLinkedListIntersection::linked_list_loop(head3), head3->next);
    head3->next->next->next->next = nullptr;
}

TEST(LINKED_LIST_INTERSECTION, LINKED_LIST_INTERSECTION_EXAMPLE_TEST) {
}
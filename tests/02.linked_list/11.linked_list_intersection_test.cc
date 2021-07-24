#include <gtest/gtest.h>

#include "02.linked_list/11.linked_list_intersection.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::linked_list_intersection;

TEST(LINKED_LIST_INTERSECTION, LINKED_LIST_INTERSECTION_IS_LOOP_TEST) {
    LinkedListRAII<int> wrapper;
    auto head1 = wrapper.make_linked_list(1, 2, 3, 4, 5);
    ASSERT_EQ(FindLinkedListLoop::linked_list_loop(head1), nullptr);
    auto head2 = wrapper.make_linked_list(1, 2, 3);
    head2->next->next->next = head2;
    ASSERT_EQ(FindLinkedListLoop::linked_list_loop(head2), head2);
    head2->next->next->next = nullptr;
    auto head3 = wrapper.make_linked_list(1, 2, 3, 4);
    head3->next->next->next->next = head3->next;
    ASSERT_EQ(FindLinkedListLoop::linked_list_loop(head3), head3->next);
    head3->next->next->next->next = nullptr;
}

TEST(LINKED_LIST_INTERSECTION, LINKED_LIST_INTERSECTION_NO_LOOP_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head1 = wrapper.make_linked_list(1, 2, 3, 4, 5);
    auto head2 = wrapper.make_linked_list(1, 2, 3);
    ASSERT_EQ(FindLinkedListIntersection::find_intersection(head1, head2), nullptr);
    auto reserve = head2->next->next->next;
    head2->next->next = head1->next;
    ASSERT_EQ(FindLinkedListIntersection::find_intersection(head1, head2), head1->next);
    head2->next->next = reserve;
}

TEST(LINKED_LIST_INTERSECTION, LINKED_LIST_INTERSECTION_WITH_LOOP_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    auto head1 = wrapper.make_linked_list(1, 2, 3, 4);
    auto head2 = wrapper.make_linked_list(1, 2);
    head1->next->next->next->next = head1->next->next;
    head2->next->next = head1->next;
    ASSERT_EQ(FindLinkedListIntersection::find_intersection(head1, head2), head1->next);
    head1->next->next->next->next = head1->next;
    head2->next->next = head1->next->next;
    auto result = FindLinkedListIntersection::find_intersection(head1, head2);
    ASSERT_TRUE(result == head1->next || result == head2->next->next);
    head1->next->next->next->next = nullptr;
    head2->next->next = nullptr;
}

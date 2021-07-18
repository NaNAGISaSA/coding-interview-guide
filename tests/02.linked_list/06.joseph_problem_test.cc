#include <gtest/gtest.h>

#include "02.linked_list/06.joseph_problem.h"
#include "linked_list_test_utils.h"

using namespace coding_interview_guide::linked_list;
using namespace coding_interview_guide::linked_list::joseph_problem;

namespace {
void make_circle(Node<int>* head) {
    auto node_head = head;
    while (head->next != nullptr) {
        head = head->next;
    }
    head->next = node_head;
}
}  // namespace

TEST(JOSEPH_PROBLEM, JOSEPH_PROBLEM_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head = wrapper.make_linked_list(1, 2, 3, 4, 5);
    make_circle(head);
    ASSERT_EQ(JosephProblem::live_man_number(head, 3), 4);
    head->next = nullptr;
}

TEST(JOSEPH_PROBLEM, JOSEPH_PROBLEM_STEP_ONE_EXAMPLE_TEST) {
    LinkedListRAII<int> wrapper;
    Node<int>* head = wrapper.make_linked_list(1, 2, 3, 4, 5);
    make_circle(head);
    ASSERT_EQ(JosephProblem::live_man_number(head, 1), 5);
    head->next = nullptr;
}

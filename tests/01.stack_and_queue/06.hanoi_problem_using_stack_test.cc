#include <gtest/gtest.h>
#include <deque>

#include "01.stack_and_queue/06.hanoi_problem_using_stack.h"

using namespace coding_interview_guide::stack_and_queue::hanoi_problem_using_stack;

TEST(HANOI_PROBLEM_STACK, HANOI_PROBLEM_RECURSE_METHOD_EXAMPLE_TEST) {
    auto t2_result = HanoiProblem::recurse_method(2);
    std::string path =
        "Move 1 from left to mid\nMove 1 from mid to right\nMove 2 from left to mid\nMove 1 from right to mid\n"
        "Move 1 from mid to left\nMove 2 from mid to right\nMove 1 from left to mid\nMove 1 from mid to right\n";
    ASSERT_EQ(t2_result.first, 8);
    ASSERT_EQ(t2_result.second, path);
    auto t3_result = HanoiProblem::recurse_method(3);
    ASSERT_EQ(t3_result.first, 26);
}

TEST(HANOI_PROBLEM_STACK, HANOI_PROBLEM_STACK_METHOD_EXAMPLE_TEST) {
    ASSERT_EQ(HanoiProblem::stack_method(2), 8);
    ASSERT_EQ(HanoiProblem::stack_method(3), 26);
}

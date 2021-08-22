#include <gtest/gtest.h>

#include "04.dynamic_programming/01.fibonacci_sequence.h"

using namespace coding_interview_guide::dynamic_programming::fibonacci_problem;

TEST(FIBONACCI_PROBLEM, FIBONACCI_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(FibProblem::fib_number(6), 8);
    ASSERT_EQ(FibProblem::fib_number(10), 55);
    ASSERT_EQ(FibProblem::fib_number_opt(6), 8);
    ASSERT_EQ(FibProblem::fib_number_opt(10), 55);
}

TEST(STEP_PROBLEM, STEP_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(StepProblem::situations(6), 13);
    ASSERT_EQ(StepProblem::situations(10), 89);
    ASSERT_EQ(StepProblem::situations_opt(6), 13);
    ASSERT_EQ(StepProblem::situations_opt(10), 89);
}

TEST(COW_PROBLEM, COW_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(CowProblem::cow_number(6), 9);
    ASSERT_EQ(CowProblem::cow_number(10), 41);
    ASSERT_EQ(CowProblem::cow_number_opt(6), 9);
    ASSERT_EQ(CowProblem::cow_number_opt(10), 41);
}

#include <gtest/gtest.h>

#include "04.dynamic_programming/01.fibonacci_sequence.h"

using namespace coding_interview_guide::dynamic_programming::fibonacci_problem;

TEST(FIBONACCI_PROBLEM, FIBONACCI_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(FibProblem::fib_number(6), 8);
    ASSERT_EQ(FibProblem::fib_number(10), 55);
    ASSERT_EQ(FibProblem::fib_number_opt(6), 8);
    ASSERT_EQ(FibProblem::fib_number_opt(10), 55);
}

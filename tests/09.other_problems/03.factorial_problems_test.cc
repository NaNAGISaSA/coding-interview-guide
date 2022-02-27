#include <gtest/gtest.h>

#include "09.other_problems/03.factorial_problems.h"

using namespace coding_interview_guide::other_problems::factorial_problems;

TEST(FACTORIAL_PROBLEMS, FACTORIAL_PROBLEMS_EXAMPLE_TEST) {
    ASSERT_EQ(FactorialProblems::zero_number(4), 0U);
    ASSERT_EQ(FactorialProblems::zero_number(5), 1U);
    ASSERT_EQ(FactorialProblems::zero_number(1000), 249U);
}

TEST(FACTORIAL_PROBLEMS, FACTORIAL_BINARY_PROBLEMS_EXAMPLE_TEST) {
    ASSERT_EQ(FactorialProblems::binary_number(1), 0U);
    ASSERT_EQ(FactorialProblems::binary_number(2), 1U);
    ASSERT_EQ(FactorialProblems::binary_number(1000), 994U);
}

TEST(FACTORIAL_PROBLEMS, FACTORIAL_BINARY_PROBLEMS_OPT_EXAMPLE_TEST) {
    ASSERT_EQ(FactorialProblems::binary_number_opt(1), 0U);
    ASSERT_EQ(FactorialProblems::binary_number_opt(2), 1U);
    ASSERT_EQ(FactorialProblems::binary_number_opt(1000), 994U);
}

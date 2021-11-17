#include <gtest/gtest.h>

#include "09.other_problems/23.divide_candy_problem.h"

using namespace coding_interview_guide::other_problems::divide_candy_problem;

TEST(DIVIDE_CANDY_PROBLEM, DIVIDE_CANDY_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({1, 2, 2}), 4);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({2, 2, 1}), 4);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({5, 3, 2, 1}), 10);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({1, 1, 1, 1}), 4);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({2, 2, 4, 4, 2}), 7);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({1, 2, 3, 2, 3, 1}), 10);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({1, 5, 3, 2, 1, 1}), 12);
}

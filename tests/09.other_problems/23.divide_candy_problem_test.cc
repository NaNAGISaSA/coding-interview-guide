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
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({5, 4, 3, 3, 2, 1}), 12);
}

TEST(DIVIDE_CANDY_PROBLEM, DIVIDE_CANDY_PROBLEM_ADV_EXAMPLE_TEST) {
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({2, 2, 1}), 5);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({1, 2, 2}), 5);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({1, 1, 1, 1}), 4);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({2, 2, 4, 4, 2}), 7);
    ASSERT_EQ(DivideCandyProblem::min_candy_num1({1, 2, 3, 2, 3, 1}), 10);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({5, 4, 3, 3, 2, 1}), 18);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({1, 2, 3, 3, 4, 5}), 18);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({1, 3, 3, 3, 2, 1}), 13);
    ASSERT_EQ(DivideCandyProblem::min_candy_num2({1, 3, 3, 5, 5, 4, 3, 3, 2, 1, 3, 2, 2}), 32);
}

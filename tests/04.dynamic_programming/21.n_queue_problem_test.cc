#include <gtest/gtest.h>

#include "04.dynamic_programming/21.n_queen_problem.h"

using namespace coding_interview_guide::dynamic_programming::n_queen_problem;

TEST(N_QUEEN_PROBLEM, N_QUEEN_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(NQueenProblem::methods(1), 1);
    ASSERT_EQ(NQueenProblem::methods(2), 0);
    ASSERT_EQ(NQueenProblem::methods(3), 0);
    ASSERT_EQ(NQueenProblem::methods(8), 92);
}

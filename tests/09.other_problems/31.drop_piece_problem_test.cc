#include <gtest/gtest.h>

#include "09.other_problems/31.drop_piece_problem.h"

using namespace coding_interview_guide::other_problems::drop_piece_problem;

TEST(DROP_PIECE_PROBLEM, DROP_PIECE_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(DropPieceProblem::minimum_times(10, 1), 10);
    ASSERT_EQ(DropPieceProblem::minimum_times(3, 2), 2);
    ASSERT_EQ(DropPieceProblem::minimum_times(105, 2), 14);
}

TEST(DROP_PIECE_PROBLEM, DROP_PIECE_PROBLEM_OPT_EXAMPLE_TEST) {
    ASSERT_EQ(DropPieceProblem::minimum_times_opt(10, 1), 10);
    ASSERT_EQ(DropPieceProblem::minimum_times_opt(3, 2), 2);
    ASSERT_EQ(DropPieceProblem::minimum_times_opt(105, 2), 14);
}

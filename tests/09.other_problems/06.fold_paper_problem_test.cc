#include <gtest/gtest.h>

#include "09.other_problems/06.fold_paper_problem.h"

using namespace coding_interview_guide::other_problems::fold_paper_problem;

TEST(FOLD_PAPER_PROBLEM, FOLD_PAPER_PROBLEM_EXAMPLE_TEST_ONE) {
    testing::internal::CaptureStdout();
    FoldPaperProblem::print_crease(2);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "down\ndown\nup\n");
}

TEST(FOLD_PAPER_PROBLEM, FOLD_PAPER_PROBLEM_EXAMPLE_TEST_TWO) {
    testing::internal::CaptureStdout();
    FoldPaperProblem::print_crease(3);
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "down\ndown\nup\ndown\ndown\nup\nup\n");
}

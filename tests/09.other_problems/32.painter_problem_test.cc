#include <gtest/gtest.h>

#include "09.other_problems/32.painter_problem.h"

using namespace coding_interview_guide::other_problems::painter_problem;

TEST(PAINTER_PROBLEM, PAINTER_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(PainterProblem::min_time({3, 1, 4}, 2), 4);
    ASSERT_EQ(PainterProblem::min_time({1, 1, 1, 4, 3}, 3), 4);
    ASSERT_EQ(PainterProblem::min_time({99, 82, 44, 35, 3}, 2), 164);
}

#include <gtest/gtest.h>

#include "09.other_problems/33.post_office_problem.h"

using namespace coding_interview_guide::other_problems::post_office_problem;

TEST(POST_OFFICE_PROBLEM, POST_OFFICE_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(PostOfficeProblem::min_distance({1, 2, 3, 4, 5, 1000}, 2), 6);
    ASSERT_EQ(PostOfficeProblem::min_distance({1, 3, 4, 5, 7, 8}, 2), 6);
}

#include <gtest/gtest.h>

#include "04.dynamic_programming/09.hanoi_problem.h"

using namespace coding_interview_guide::dynamic_programming::hanoi_problem;

TEST(HANOI_PROBLEM, HANOI_PROBLEM_ORIGIN_EXAMPLE_TEST) {
    testing::internal::CaptureStdout();
    HanoiProblem::origin_problem(3);
    std::string truth =
        "move from left to right\nmove from left to mid\nmove from right to mid\nmove from left to right\n"
        "move from mid to left\nmove from mid to right\nmove from left to right\n";
    ASSERT_EQ(testing::internal::GetCapturedStdout(), truth);
}

TEST(HANOI_PROBLEM, HANOI_PROBLEM_ADVANCED_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{1, 1}, vec2{2, 1}, vec3{3, 3}, vec4{2, 2};
    ASSERT_EQ(HanoiProblem::advanced_problem(vec1), 0);
    ASSERT_EQ(HanoiProblem::advanced_problem(vec2), 1);
    ASSERT_EQ(HanoiProblem::advanced_problem(vec3), 3);
    ASSERT_EQ(HanoiProblem::advanced_problem(vec4), -1);
}

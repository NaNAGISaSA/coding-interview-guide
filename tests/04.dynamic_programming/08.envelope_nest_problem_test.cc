#include <gtest/gtest.h>

#include "04.dynamic_programming/08.envelope_nest_problem.h"

using namespace coding_interview_guide::dynamic_programming::envelope_nest_problem;

TEST(ENVELOPE_NEST_PROBLEM, ENVELOPE_NEST_PROBLEM_EXAMPLE_TEST) {
    std::vector<std::vector<unsigned int>> vec1{{3, 4}, {2, 3}, {4, 5}, {1, 3}, {2, 2}, {3, 6}, {1, 2}, {3, 2}, {2, 4}},
        vec2{{1, 4}, {4, 1}};
    ASSERT_EQ(EnvelopeNestProblem::nest_number(vec1), 4);
    ASSERT_EQ(EnvelopeNestProblem::nest_number(vec2), 1);
}

TEST(ENVELOPE_NEST_PROBLEM, ENVELOPE_NEST_PROBLEM_OPT_EXAMPLE_TEST) {
    std::vector<std::vector<unsigned int>> vec1{{3, 4}, {2, 3}, {4, 5}, {1, 3}, {2, 2}, {3, 6}, {1, 2}, {3, 2}, {2, 4}},
        vec2{{1, 4}, {4, 1}};
    ASSERT_EQ(EnvelopeNestProblem::nest_number_time_opt(vec1), 4);
    ASSERT_EQ(EnvelopeNestProblem::nest_number_time_opt(vec2), 1);
}

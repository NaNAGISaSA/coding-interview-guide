#include <gtest/gtest.h>

#include "06.big_data/04.island_problem.h"

using namespace coding_interview_guide::big_data::island_problem;

TEST(ISLAND_PROBLEM, ISLAND_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(IslandProblem::island_number({{1, 0, 1, 1}}), 2);
    ASSERT_EQ(IslandProblem::island_number({{1, 0, 1, 1}, {1, 0, 1, 1}, {0, 0, 0, 0}, {1, 0, 1, 0}}), 4);
    ASSERT_EQ(IslandProblem::island_number({{1, 1, 1, 0}, {1, 1, 0, 1}}), 2);
    ASSERT_EQ(IslandProblem::island_number({{1, 1, 1, 1, 1, 1, 1, 1},
                                            {1, 0, 0, 0, 0, 0, 0, 1},
                                            {1, 0, 1, 1, 1, 1, 1, 1},
                                            {1, 0, 1, 0, 0, 0, 0, 0},
                                            {1, 0, 1, 1, 1, 1, 1, 1},
                                            {1, 0, 0, 0, 0, 0, 0, 1},
                                            {1, 1, 1, 1, 1, 1, 1, 1}}),
              1);
}

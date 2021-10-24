#include <gmock/gmock.h>

#include "08.vector_and_matrix/30.container_water_problem.h"

using namespace coding_interview_guide::vector_and_matrix::container_water_problem;

TEST(CONTAINER_WATER_PROBLEM, CONTAINER_WATER_PROBLEM_EXAMPLE_TEST) {
    ASSERT_EQ(ContainerWaterProblem::capacity({3, 1, 2, 5, 2, 4}), 5);
    ASSERT_EQ(ContainerWaterProblem::capacity({4, 5, 1, 3, 2}), 2);
}

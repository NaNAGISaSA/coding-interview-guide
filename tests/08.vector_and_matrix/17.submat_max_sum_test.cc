#include <gtest/gtest.h>

#include "08.vector_and_matrix/17.submat_max_sum.h"

using namespace coding_interview_guide::vector_and_matrix::submat_max_sum;

TEST(SUBMAT_MAX_SUM, SUBMAT_MAX_SUM_EXAMPLE_TEST) {
    ASSERT_EQ(SubmatMaxSum::max_sum({{-90, 48, 78}, {64, -40, 64}, {-81, -7, 66}}), 209);
    ASSERT_EQ(SubmatMaxSum::max_sum({{-1, -1, -1}, {-1, 2, 2}, {-1, -1, -1}}), 4);
}

#include <gtest/gtest.h>

#include "08.vector_and_matrix/19.subarr_max_mul.h"

using namespace coding_interview_guide::vector_and_matrix::subarr_max_mul;

TEST(SUBARR_MAX_MUL, SUBARR_MAX_MUL_EXAMPLE_TEST) {
    ASSERT_DOUBLE_EQ(SubarrMaxMul::max_mul({-2.5, 4.0, 0.0, 3.0, 0.5, 8.0, -1.0}), 12.0);
    ASSERT_DOUBLE_EQ(SubarrMaxMul::max_mul({-2.5, 4.0, 0.0, 3.0, 0.5, 0.0, 8.0, -1.0}), 8.0);
    ASSERT_DOUBLE_EQ(SubarrMaxMul::max_mul({-2.5, 4.0, 0.0, 3.0, 0.5, -8.0, -1.5}), 18.0);
}

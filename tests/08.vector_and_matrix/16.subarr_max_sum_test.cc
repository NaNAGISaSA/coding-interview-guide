#include <gtest/gtest.h>

#include "08.vector_and_matrix/16.subarr_max_sum.h"

using namespace coding_interview_guide::vector_and_matrix::subarr_max_sum;

TEST(SUBARR_MAX_SUM, SUBARR_MAX_SUM_EXAMPLE_TEST) {
    ASSERT_EQ(SubarrMaxSum::max_sum({1, -2, 3, 5, -2, 6, -1}), 12);
    ASSERT_EQ(SubarrMaxSum::max_sum({1, -2, 3, -2, 5, -1}), 6);
}

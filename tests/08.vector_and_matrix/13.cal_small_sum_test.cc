#include <gtest/gtest.h>

#include "08.vector_and_matrix/13.cal_small_sum.h"

using namespace coding_interview_guide::vector_and_matrix::cal_small_sum;

TEST(CAL_SMALL_SUM, CAL_SMALL_SUM_EXAMPLE_TEST) {
    ASSERT_EQ(CalSmallSum::cal_small_sum({1, -3, -1}), -3);
    ASSERT_EQ(CalSmallSum::cal_small_sum({1, 3, 5, 2, 4, 6}), 27);
}

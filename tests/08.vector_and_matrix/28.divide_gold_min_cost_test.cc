#include <gtest/gtest.h>

#include "08.vector_and_matrix/28.divide_gold_min_cost.h"

using namespace coding_interview_guide::vector_and_matrix::divide_gold_min_cost;

TEST(DIVIDE_GOLD_MIN_COST, DIVIDE_GOLD_MIN_COST_EXAMPLE_TEST) {
    ASSERT_EQ(DivideGoldMinCost::min_cost({10, 30, 20}), 90);
    ASSERT_EQ(DivideGoldMinCost::min_cost({3, 9, 5, 2, 4, 4}), 67);
}

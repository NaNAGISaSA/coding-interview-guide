#include <gtest/gtest.h>

#include "04.dynamic_programming/17.num_of_expr_combination.h"

using namespace coding_interview_guide::dynamic_programming::num_of_expr_combination;

TEST(NUM_OF_EXPR_COMBINATION, NUM_OF_EXPR_COMBINATION_EXAMPLE_TEST) {
    ASSERT_EQ(NumOfExprCombination::number("1^0|0|1", false), 2);
    ASSERT_EQ(NumOfExprCombination::number("1", false), 0);
    ASSERT_EQ(NumOfExprCombination::number("0|1", true), 1);
    ASSERT_EQ(NumOfExprCombination::number("1&0|1^0&0|0^1^0", true), 287);
}

TEST(NUM_OF_EXPR_COMBINATION, NUM_OF_EXPR_COMBINATION_DP_EXAMPLE_TEST) {
    ASSERT_EQ(NumOfExprCombination::number_dp("1^0|0|1", false), 2);
    ASSERT_EQ(NumOfExprCombination::number_dp("1", false), 0);
    ASSERT_EQ(NumOfExprCombination::number_dp("0|1", true), 1);
    ASSERT_EQ(NumOfExprCombination::number_dp("1&0|1^0&0|0^1^0", true), 287);
}

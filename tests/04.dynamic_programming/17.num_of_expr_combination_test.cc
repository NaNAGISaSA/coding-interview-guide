#include <gtest/gtest.h>

#include "04.dynamic_programming/17.num_of_expr_combination.h"

using namespace coding_interview_guide::dynamic_programming::num_of_expr_combination;

TEST(NUM_OF_EXPR_COMBINATION, NUM_OF_EXPR_COMBINATION_EXAMPLE_TEST) {
    std::string str1("1^0|0|1"), str2("1"), str3("0|1");
    ASSERT_EQ(NumOfExprCombination::number(str1, false), 2);
    ASSERT_EQ(NumOfExprCombination::number(str2, false), 0);
    ASSERT_EQ(NumOfExprCombination::number(str3, true), 1);
}

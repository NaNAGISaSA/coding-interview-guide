#include <gtest/gtest.h>

#include "04.dynamic_programming/13.min_edit_cost.h"

using namespace coding_interview_guide::dynamic_programming::min_edit_cost;

TEST(MIN_EDIT_COST, MIN_EDIT_COST_EXAMPLE_TEST) {
    std::string str1("abc"), str2("adc");
    ASSERT_EQ(MinEditCost::min_cost(str1, str2, 5, 3, 2), 2);
    ASSERT_EQ(MinEditCost::min_cost(str1, str2, 5, 3, 10), 8);
    ASSERT_EQ(MinEditCost::min_cost(str1, str1, 5, 3, 2), 0);
    std::string str3("ab12cd3"), str4("abcdf");
    ASSERT_EQ(MinEditCost::min_cost(str3, str4, 5, 3, 2), 8);
}

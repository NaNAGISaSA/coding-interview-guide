#include <gtest/gtest.h>

#include "05.string/14.cal_str_expr.h"

using namespace coding_interview_guide::string::cal_str_expr;

TEST(CAL_STR_EXPR, CAL_STR_EXPR_EXAMPLE_TEST) {
    ASSERT_EQ(CalStrExpr::get_result("-3+1*4"), 1L);
    ASSERT_EQ(CalStrExpr::get_result("-3-5+9/2"), -4L);
    ASSERT_EQ(CalStrExpr::get_result("1*4+(-3)-10"), -9L);
    ASSERT_EQ(CalStrExpr::get_result("3+(1+3)/3"), 4L);
    ASSERT_EQ(CalStrExpr::get_result("3+((1+3))/3"), 4L);
    ASSERT_EQ(CalStrExpr::get_result("48*((70-65)-43)+8*1"), -1816L);
}

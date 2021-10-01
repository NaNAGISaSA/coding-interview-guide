#include <gtest/gtest.h>

#include "07.bitwise/01.change_int_value.h"

using namespace coding_interview_guide::bitwise::change_int_value;

TEST(CHANGE_INT_VALUE, CHANGE_INT_VALUE_EXAMPLE_TEST) {
    int a = 10, b = 111;
    SwapValue::swap(a, b);
    ASSERT_EQ(a, 111);
    ASSERT_EQ(b, 10);
}

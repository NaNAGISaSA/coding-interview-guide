#include <gtest/gtest.h>

#include "07.bitwise/03.arithmetic_operations.h"

using namespace coding_interview_guide::bitwise::arithmetic_operations;

TEST(ARITHMETIC_OPERATIONS, ARITHMETIC_OPERATIONS_ADD_EXAMPLE_TEST) {
    ASSERT_EQ(ArithmeticOperations::add(1, 3), 4);
    ASSERT_EQ(ArithmeticOperations::add(1, -3), -2);
    ASSERT_EQ(ArithmeticOperations::add(-1, 3), 2);
    ASSERT_EQ(ArithmeticOperations::add(-1, -3), -4);
}

TEST(ARITHMETIC_OPERATIONS, ARITHMETIC_OPERATIONS_SUB_EXAMPLE_TEST) {
    ASSERT_EQ(ArithmeticOperations::sub(3, 1), 2);
    ASSERT_EQ(ArithmeticOperations::sub(1, 3), -2);
    ASSERT_EQ(ArithmeticOperations::sub(1, -3), 4);
    ASSERT_EQ(ArithmeticOperations::sub(-1, 3), -4);
    ASSERT_EQ(ArithmeticOperations::sub(-1, -3), 2);
    ASSERT_EQ(ArithmeticOperations::sub(-3, -1), -2);
}

TEST(ARITHMETIC_OPERATIONS, ARITHMETIC_OPERATIONS_MULTI_EXAMPLE_TEST) {
    ASSERT_EQ(ArithmeticOperations::multi(3, 4), 12);
    ASSERT_EQ(ArithmeticOperations::multi(3, -4), -12);
    ASSERT_EQ(ArithmeticOperations::multi(-3, 4), -12);
    ASSERT_EQ(ArithmeticOperations::multi(-3, -4), 12);
    ASSERT_EQ(ArithmeticOperations::multi(-3, 0), 0);
    ASSERT_EQ(ArithmeticOperations::multi(0, -3), 0);
}

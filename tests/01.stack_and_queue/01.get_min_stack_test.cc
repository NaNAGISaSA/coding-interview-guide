#include <gtest/gtest.h>

#include "01.stack_and_queue/01.get_min_stack.h"

using namespace coding_interview_guide::stack_and_queue::get_min_stack;

TEST(GET_MIN_STACK, GET_MIN_STACK_EXAMPLE_TEST) {
    GetMinStack<int> stack;
    stack.push(3);
    stack.push(2);
    stack.push(1);
    ASSERT_EQ(stack.get_min(), 1);
    stack.pop();
    ASSERT_EQ(stack.get_min(), 2);
}

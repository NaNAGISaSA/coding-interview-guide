#include <gtest/gtest.h>
#include <deque>

#include "01.stack_and_queue/03.recurse_reverse_stack.h"

using namespace coding_interview_guide::stack_and_queue::recurse_reverse_stack;

TEST(RECURSE_REVERSE_STACK, RECURSE_REVERSE_STACK_EXAMPLE_TEST) {
    std::deque<int> queue{1, 2, 3, 4, 5};
    std::stack<int> stack(std::move(queue));
    RecurseReverseStack<int>::reverse_stack(stack);
    ASSERT_EQ(stack.top(), 1);
    stack.pop();
    ASSERT_EQ(stack.top(), 2);
    stack.pop();
    ASSERT_EQ(stack.top(), 3);
    stack.pop();
    ASSERT_EQ(stack.top(), 4);
    stack.pop();
    ASSERT_EQ(stack.top(), 5);
}

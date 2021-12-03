#include <gtest/gtest.h>
#include <deque>

#include "01.stack_and_queue/05.stack_sort.h"

using namespace coding_interview_guide::stack_and_queue::stack_sort;

TEST(STACK_SORT, STACK_SORT_EXAMPLE_TEST) {
    std::deque<int> deque{1, 5, 3, 6, 2};
    std::stack<int> stack(std::move(deque));
    SortStack::sort_stack(stack);
    ASSERT_EQ(stack.top(), 6);
    stack.pop();
    ASSERT_EQ(stack.top(), 5);
    stack.pop();
    ASSERT_EQ(stack.top(), 3);
    stack.pop();
    ASSERT_EQ(stack.top(), 2);
    stack.pop();
    ASSERT_EQ(stack.top(), 1);
}

TEST(STACK_SORT, STACK_SORT_OPT_EXAMPLE_TEST) {
    std::deque<int> deque{1, 5, 3, 6};
    std::stack<int> stack(std::move(deque));
    SortStack::sort_stack_opt(stack);
    ASSERT_EQ(stack.top(), 6);
    stack.pop();
    ASSERT_EQ(stack.top(), 5);
    stack.pop();
    ASSERT_EQ(stack.top(), 3);
    stack.pop();
    ASSERT_EQ(stack.top(), 1);
}
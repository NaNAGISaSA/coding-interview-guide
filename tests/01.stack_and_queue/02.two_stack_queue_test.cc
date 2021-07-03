#include "01.stack_and_queue/02.two_stack_queue.h"
#include <gtest/gtest.h>

using namespace coding_interview_guide::stack_and_queue::two_stack_queue;

TEST(TWO_STACK_QUEUE, TWO_STACK_QUEUE_EXAMPLE_TEST) {
    TwoStackQueue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    ASSERT_EQ(queue.front(), 1);
    queue.pop();
    ASSERT_EQ(queue.front(), 2);
    queue.pop();
    ASSERT_EQ(queue.front(), 3);
}

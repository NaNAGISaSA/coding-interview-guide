#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "01.stack_and_queue/08.monotone_stack.h"

using namespace coding_interview_guide::stack_and_queue::monotone_stack;

TEST(MONOTONE_STACK, MONOTONE_STACK_EXAMPLE_TEST) {
    const std::vector<int> input{3, 4, 1, 5, 6, 2, 7};
    auto result = MonotoneStack::get_near_less_no_repeat(input);
    const std::vector<std::vector<int>> truth{{-1, 2}, {0, 2}, {-1, -1}, {2, 5}, {3, 5}, {2, -1}, {5, -1}};
    for (size_t i = 0; i < input.size(); ++i) {
        ASSERT_THAT(result[i], truth[i]);
    }
}

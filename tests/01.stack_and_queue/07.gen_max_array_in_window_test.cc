#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "01.stack_and_queue/07.gen_max_array_in_window.h"

using namespace coding_interview_guide::stack_and_queue::gen_max_array_in_window;

TEST(GEN_MAX_ARRAY_IN_WINDOW, GEN_MAX_ARRAY_IN_WINDOW_EXAMPLE_TEST) {
    const std::vector<int> input{4, 3, 5, 4, 3, 3, 6, 7};
    std::vector<int> result1 = GenMaxArrayInWindow::get_max_array(input, 1);
    ASSERT_THAT(result1, testing::ElementsAre(4, 3, 5, 4, 3, 3, 6, 7));
    std::vector<int> result2 = GenMaxArrayInWindow::get_max_array(input, 3);
    ASSERT_THAT(result2, testing::ElementsAre(5, 5, 5, 4, 6, 7));
}

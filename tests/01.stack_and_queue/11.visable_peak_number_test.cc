#include <gtest/gtest.h>

#include "01.stack_and_queue/11.visable_peak_number.h"

using namespace coding_interview_guide::stack_and_queue::visable_peak_number;

TEST(VISABLE_PEAK_NUM, VISABLE_PEAK_NUM_EXAMPLE_TEST) {
    std::vector<int> input1{1, 2, 3, 5, 4};
    size_t result1 = VisablePeakNumber::get_visable_peak_number(input1);
    ASSERT_EQ(result1, 7);
    std::vector<int> input2{2, 3, 1, 5, 4};
    size_t result2 = VisablePeakNumber::get_visable_peak_number(input2);
    ASSERT_EQ(result2, 7);
}
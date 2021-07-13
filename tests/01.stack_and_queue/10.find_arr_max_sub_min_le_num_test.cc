#include <gtest/gtest.h>

#include "01.stack_and_queue/10.find_arr_max_sub_min_le_num.h"

using namespace coding_interview_guide::stack_and_queue::find_arr_max_sub_min_le_num;

TEST(FIND_ARR_LE_NUM, FIND_ARR_LE_NUM_EXAMPLE_TEST) {
    std::vector<int> input1{1, 2, 3, 4, 5};
    size_t result1 = FindArrLeNum::find_arr(input1, 2);
    ASSERT_EQ(result1, 12);
    std::vector<int> input2{2, 3, 1, 5, 4};
    size_t result2 = FindArrLeNum::find_arr(input2, 3);
    ASSERT_EQ(result2, 9);
}

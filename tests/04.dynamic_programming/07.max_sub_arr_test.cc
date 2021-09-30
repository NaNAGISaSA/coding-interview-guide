#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "04.dynamic_programming/07.max_sub_arr.h"

using namespace coding_interview_guide::dynamic_programming::max_sub_arr;

TEST(MAX_SUB_ARR, MAX_SUB_ARR_EXAMPLE_TEST) {
    ASSERT_THAT(MaxSubArr::arr({2, 1, 5, 3, 6, 4, 8, 9, 7}), testing::ElementsAre(1, 3, 4, 8, 9));
    ASSERT_THAT(MaxSubArr::arr({1, 2, 8, 6, 4}), testing::ElementsAre(1, 2, 4));
}

TEST(MAX_SUB_ARR, MAX_SUB_ARR_OPT_EXAMPLE_TEST) {
    ASSERT_THAT(MaxSubArr::arr_time_opt({2, 1, 5, 3, 6, 4, 8, 9, 7}), testing::ElementsAre(1, 3, 4, 8, 9));
    ASSERT_THAT(MaxSubArr::arr_time_opt({1, 2, 8, 6, 4}), testing::ElementsAre(1, 2, 4));
}

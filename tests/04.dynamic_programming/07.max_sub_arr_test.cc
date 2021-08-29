#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "04.dynamic_programming/07.max_sub_arr.h"

using namespace coding_interview_guide::dynamic_programming::max_sub_arr;

TEST(MAX_SUB_ARR, MAX_SUB_ARR_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{2, 1, 5, 3, 6, 4, 8, 9, 7}, vec2{1, 2, 8, 6, 4};
    ASSERT_THAT(MaxSubArr::arr(vec1), testing::ElementsAre(1, 3, 4, 8, 9));
    ASSERT_THAT(MaxSubArr::arr(vec2), testing::ElementsAre(1, 2, 4));
}

// TEST(MAX_SUB_ARR, MAX_SUB_ARR_OPT_EXAMPLE_TEST) {
//     std::vector<unsigned int> vec1{2, 1, 5, 3, 6, 4, 8, 9, 7}, vec2{1, 2, 8, 6, 4};
//     ASSERT_THAT(MaxSubArr::arr_time_opt(vec1), testing::ElementsAre(1, 3, 4, 8, 9));
//     ASSERT_THAT(MaxSubArr::arr_time_opt(vec2), testing::ElementsAre(1, 2, 4));
// }

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "09.other_problems/28.arr_sum_top_k.h"

using namespace coding_interview_guide::other_problems::arr_sum_top_k;

TEST(ARR_SUM_TOP_K, ARR_SUM_TOP_K_EXAMPLE_TEST) {
    ASSERT_THAT(ArrSumTopK::topk({1, 2, 3, 4, 5}, {3, 5, 7, 9, 11}, 4), testing::ElementsAre(16, 15, 14, 14));
    ASSERT_THAT(ArrSumTopK::topk({1, 2, 3}, {3, 5}, 5), testing::ElementsAre(8, 7, 6, 6, 5));
}

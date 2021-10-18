#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "08.vector_and_matrix/22.multi_not_contain_curr_idx.h"

using namespace coding_interview_guide::vector_and_matrix::multi_not_contain_curr_idx;

TEST(MULTI_NOT_CONTAIN_CURR_IDX, MULTI_NOT_CONTAIN_CURR_IDX_EXAMPLE_TEST) {
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result({2, 3, 1, 4}), testing::ElementsAre(12, 8, 24, 6));
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result({2, 3, -2, 4}), testing::ElementsAre(-24, -16, 24, -12));
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result({2, 0, -3}), testing::ElementsAre(0, -6, 0));
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result({2, 0, 0, 1}), testing::ElementsAre(0, 0, 0, 0));
}

TEST(MULTI_NOT_CONTAIN_CURR_IDX, MULTI_NOT_CONTAIN_CURR_IDX_ADV_EXAMPLE_TEST) {
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result_adv({2, 3, 1, 4}), testing::ElementsAre(12, 8, 24, 6));
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result_adv({2, 3, -2, 4}), testing::ElementsAre(-24, -16, 24, -12));
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result_adv({2, 0, -3}), testing::ElementsAre(0, -6, 0));
    ASSERT_THAT(MultiNotContainCurrIdx::multi_result_adv({2, 0, 0, 1}), testing::ElementsAre(0, 0, 0, 0));
}

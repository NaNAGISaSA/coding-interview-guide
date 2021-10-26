#include <gtest/gtest.h>

#include "08.vector_and_matrix/27.project_max_profit.h"

using namespace coding_interview_guide::vector_and_matrix::project_max_profit;

TEST(PROJECT_MAX_PROFIT, PROJECT_MAX_PROFIT_EXAMPLE_TEST) {
    ASSERT_EQ(ProjectMaxProfit::max_profit(3, 2, {5, 4, 1, 2}, {3, 5, 3, 2}), 11U);
    ASSERT_EQ(ProjectMaxProfit::max_profit(1, 3, {1, 3}, {3, 5}), 9U);
}

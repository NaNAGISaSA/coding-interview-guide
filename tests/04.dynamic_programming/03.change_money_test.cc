#include <gtest/gtest.h>

#include "04.dynamic_programming/03.change_money.h"

using namespace coding_interview_guide::dynamic_programming::change_money;

TEST(CHANGE_MONEY, CHANGE_MONEY_EXAMPLE_TEST) {
    std::vector<unsigned int> money_case1{2, 3, 5}, money_case2{3, 5};
    ASSERT_EQ(ChangeMoney::min_currency(money_case1, 20), 4);
    ASSERT_EQ(ChangeMoney::min_currency(money_case1, 0), 0);
    ASSERT_EQ(ChangeMoney::min_currency(money_case2, 30), 6);
    ASSERT_EQ(ChangeMoney::min_currency(money_case2, 2), -1);
}

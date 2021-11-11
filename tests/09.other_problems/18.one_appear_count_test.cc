#include <gtest/gtest.h>

#include "09.other_problems/18.one_appear_count.h"

using namespace coding_interview_guide::other_problems::one_appear_count;

TEST(ONE_APPEAR_COUNT, ONE_APPEAR_COUNT_EXAMPLE_TEST) {
    ASSERT_EQ(OneAppearCount::count(5), 1);
    ASSERT_EQ(OneAppearCount::count(11), 4);
    ASSERT_EQ(OneAppearCount::count(300), 160);
    ASSERT_EQ(OneAppearCount::count(2345), 1775);
}

TEST(ONE_APPEAR_COUNT, ONE_APPEAR_COUNT_OPT_EXAMPLE_TEST) {
    ASSERT_EQ(OneAppearCount::count_opt(5), 1);
    ASSERT_EQ(OneAppearCount::count_opt(11), 4);
    ASSERT_EQ(OneAppearCount::count_opt(300), 160);
    ASSERT_EQ(OneAppearCount::count_opt(2345), 1775);
}

#include <gtest/gtest.h>

#include "07.bitwise/04.number_of_one.h"

using namespace coding_interview_guide::bitwise::number_of_one;

TEST(NUMBER_OF_ONE, NUMBER_OF_ONE_M1_EXAMPLE_TEST) {
    ASSERT_EQ(NumberOfOne::count_m1(7), 3U);
    ASSERT_EQ(NumberOfOne::count_m1(-2), 31U);
    ASSERT_EQ(NumberOfOne::count_m1(0), 0U);
}

TEST(NUMBER_OF_ONE, NUMBER_OF_ONE_M2_EXAMPLE_TEST) {
    ASSERT_EQ(NumberOfOne::count_m2(7), 3U);
    ASSERT_EQ(NumberOfOne::count_m2(-2), 31U);
    ASSERT_EQ(NumberOfOne::count_m2(0), 0U);
}

TEST(NUMBER_OF_ONE, NUMBER_OF_ONE_M3_EXAMPLE_TEST) {
    ASSERT_EQ(NumberOfOne::count_m3(7), 3U);
    ASSERT_EQ(NumberOfOne::count_m3(-2), 31U);
    ASSERT_EQ(NumberOfOne::count_m3(0), 0U);
}

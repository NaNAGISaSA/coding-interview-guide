#include <gtest/gtest.h>

#include "05.string/04.statistics_str.h"

using namespace coding_interview_guide::string::statistics_str;

TEST(STATISTICS_STR, STATISTICS_STR_CONVERT_EXAMPLE_TEST) {
    ASSERT_EQ(StatisticsStr::convert("aaabbbbcccd"), "a_3_b_4_c_3_d_1");
    ASSERT_EQ(StatisticsStr::convert("offerofferzainaliiiiii"),
              "o_1_f_2_e_1_r_1_o_1_f_2_e_1_r_1_z_1_a_1_i_1_n_1_a_1_l_1_i_6");
    ASSERT_EQ(StatisticsStr::convert("ha"), "h_1_a_1");
    ASSERT_EQ(StatisticsStr::convert("hhhhhhhhhhhaaa"), "h_11_a_3");
}

TEST(STATISTICS_STR, STATISTICS_STR_REVERT_EXAMPLE_TEST) {
    ASSERT_EQ(StatisticsStr::revert("a_3_b_4_c_3_d_1", 0), 'a');
    ASSERT_EQ(StatisticsStr::revert("a_3_b_4_c_3_d_1", 5), 'b');
    ASSERT_EQ(StatisticsStr::revert("a_3_b_4_c_3_d_1", 7), 'c');
    ASSERT_EQ(StatisticsStr::revert("a_3_b_4_c_3_d_1", 10), 'd');
    ASSERT_EQ(StatisticsStr::revert("a_3_b_4_c_3_d_1", 11), static_cast<char>(0));
    ASSERT_EQ(StatisticsStr::revert("a_13_b_10", 7), 'a');
    ASSERT_EQ(StatisticsStr::revert("a_13_b_10", 15), 'b');
}

#include <gtest/gtest.h>

#include "09.other_problems/22.en_zh_cn_num.h"

using namespace coding_interview_guide::other_problems::en_zh_cn_num;

TEST(EN_ZH_CN_NUM, EN_ZH_CN_NUM_EXAMPLE_TEST) {
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(0), "零");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(19), "十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(79), "七十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(319), "三百一十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(250), "二百五十");
    ASSERT_TRUE(EnZhCnNum::num_to_zh_cn(1014) == "一千零一十四" || EnZhCnNum::num_to_zh_cn(1014) == "一千零十四");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(6840), "六千八百四十");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(120000), "十二万");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(34569), "三万四千五百六十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(3450069), "三百四十五万零六十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(2'100'000'000), "二十一亿");
    ASSERT_TRUE(EnZhCnNum::num_to_zh_cn(500'120'789) == "五亿零一十二万零七百八十九" ||
                EnZhCnNum::num_to_zh_cn(500'120'789) == "五亿零十二万零七百八十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(-6840), "负六千八百四十");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(-3450069), "负三百四十五万零六十九");
    ASSERT_EQ(EnZhCnNum::num_to_zh_cn(-2'147'483'648), "负二十一亿四千七百四十八万三千六百四十八");
}

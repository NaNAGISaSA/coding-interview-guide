#include <gtest/gtest.h>

#include "04.dynamic_programming/10.max_common_subsequence.h"

using namespace coding_interview_guide::dynamic_programming::max_common_subsequence;

TEST(MAX_COMMON_SUBSEQUENCE, MAX_COMMON_SUBSEQUENCE_EXAMPLE_TEST) {
    ASSERT_EQ(MaxCommonSubsequence::subsequence("1A", "B1CA"), std::string("1A"));
    ASSERT_EQ(MaxCommonSubsequence::subsequence("1A2C3D4B56", "B1D23CA45B6A"), std::string("12C4B6"));
}

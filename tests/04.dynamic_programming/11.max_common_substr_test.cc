#include <gtest/gtest.h>

#include "04.dynamic_programming/11.max_common_substr.h"

using namespace coding_interview_guide::dynamic_programming::max_common_substr;

TEST(MAX_COMMON_SUBSTR, MAX_COMMON_SUBSTR_EXAMPLE_TEST) {
    ASSERT_EQ(MaxCommonSubstr::max_substr("1AB2345CD", "12345EF"), std::string("2345"));
    ASSERT_EQ(MaxCommonSubstr::max_substr("A123B4", "CD1234"), std::string("123"));
}

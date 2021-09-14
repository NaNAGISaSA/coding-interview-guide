#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "05.string/07.adjust_and_replace_str.h"

using namespace coding_interview_guide::string::adjust_and_replace_str;

TEST(ADJUST_AND_REPLACE_STR, ADJUST_AND_REPLACE_STR_Q1_EXAMPLE_TEST) {
    std::vector<char> vec1(18, '\0'), vec2{'1', ' ', '\0', '\0', '\0'};
    vec1[0] = 'a';
    vec1[1] = ' ';
    vec1[2] = 'b';
    vec1[3] = ' ';
    vec1[4] = ' ';
    vec1[5] = ' ';
    vec1[6] = 'c';
    AdjustStr::adjust_str1(vec1);
    AdjustStr::adjust_str1(vec2);
    // clang-format off
    ASSERT_THAT(vec1, testing::ElementsAre(
                'a', '%', '2', '0', 'b', '%', '2', '0', '%', '2', '0', '%', '2', '0', 'c', '\0', '\0', '\0'));
    // clang-format on
    ASSERT_THAT(vec2, testing::ElementsAre('1', '%', '2', '0', '\0'));
}

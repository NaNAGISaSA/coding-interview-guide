#include <gtest/gtest.h>

#include "05.string/16.min_concat_str.h"

using namespace coding_interview_guide::string::min_concat_str;

TEST(MIN_CONCAT_STR, MIN_CONCAT_STR_EXAMPLE_TEST) {
    std::vector<std::string> vec1{"abc", "de"}, vec2{"b", "ba"};
    ASSERT_EQ(MinConcatStr::min_str(vec1), "abcde");
    ASSERT_EQ(MinConcatStr::min_str(vec2), "bab");
}

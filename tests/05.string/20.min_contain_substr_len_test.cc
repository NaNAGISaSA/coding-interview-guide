#include <gtest/gtest.h>

#include "05.string/20.min_contain_substr_len.h"

using namespace coding_interview_guide::string::min_contain_substr_len;

TEST(MIN_CONTAIN_SUBSTR_LEN, MIN_CONTAIN_SUBSTR_LEN_EXAMPLE_TEST) {
    ASSERT_EQ(MinContainSubstrLen::min_len("abcde", "ac"), 3L);
    ASSERT_EQ(MinContainSubstrLen::min_len("adabbca", "acb"), 3L);
    ASSERT_EQ(MinContainSubstrLen::min_len("abcde", "acc"), 0L);
}

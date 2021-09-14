#include <gtest/gtest.h>

#include "05.string/06.find_str_in_order_vec.h"

using namespace coding_interview_guide::string::find_str_in_order_vec;

TEST(FIND_STR_IN_ORDER_VEC, FIND_STR_IN_ORDER_VEC_EXAMPLE_TEST) {
    std::vector<std::string> vec1{"null", "a", "null", "a", "a", "null", "ab", "ac", "null", "b"},
        vec2{"awk", "grep", "null", "sed"}, vec3{"null", "null", "null", "cc"};
    ASSERT_EQ(FindStrInOrderVec::find_index(vec1, "a"), 1);
    ASSERT_EQ(FindStrInOrderVec::find_index(vec1, "null"), -1);
    ASSERT_EQ(FindStrInOrderVec::find_index(vec1, "c"), -1);
    ASSERT_EQ(FindStrInOrderVec::find_index(vec2, "sed"), 3);
    ASSERT_EQ(FindStrInOrderVec::find_index(vec3, "cc"), 3);
}

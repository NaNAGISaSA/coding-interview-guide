#include <gtest/gtest.h>

#include "05.string/10.two_str_min_distance.h"

using namespace coding_interview_guide::string::two_str_min_distance;

TEST(TWO_STR_MIN_DISTANCE, TWO_STR_MIN_DISTANCE_EXAMPLE_TEST) {
    std::vector<std::string> vec1{"1", "3", "3", "3", "2", "3", "1"}, vec2{"CD"};
    ASSERT_EQ(TwoStrMinDistance::min_distance(vec1, "1", "2"), 2);
    ASSERT_EQ(TwoStrMinDistance::min_distance(vec2, "AB", "CD"), -1);
    ASSERT_EQ(TwoStrMinDistance::min_distance(vec2, "CD", "CD"), 0);
}

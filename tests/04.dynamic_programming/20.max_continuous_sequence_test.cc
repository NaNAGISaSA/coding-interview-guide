#include <gtest/gtest.h>

#include "04.dynamic_programming/20.max_continuous_sequence.h"

using namespace coding_interview_guide::dynamic_programming::max_continuous_sequence;

TEST(MAX_CONTINUOUS_SEQUENCE, MAX_CONTINUOUS_SEQUENCE_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{10, 4, 20, 1, 3, 2}, vec2{1, 1, 1}, vec3{1, 5, 8, 3, 6, 4, 7, 2, 10, 11};
    ASSERT_EQ(MaxContinuousSequence::length(vec1), 4);
    ASSERT_EQ(MaxContinuousSequence::length(vec2), 1);
    ASSERT_EQ(MaxContinuousSequence::length(vec3), 8);
}

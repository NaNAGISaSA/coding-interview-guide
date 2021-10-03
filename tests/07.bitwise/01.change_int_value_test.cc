#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <vector>

#include "07.bitwise/01.change_int_value.h"

using namespace coding_interview_guide::bitwise::change_int_value;

TEST(CHANGE_INT_VALUE, CHANGE_INT_VALUE_EXAMPLE_TEST) {
    std::vector<int> vec{10, 111, -10, -11};
    SwapValue::swap(vec[0], vec[1]);
    SwapValue::swap(vec[2], vec[3]);
    ASSERT_THAT(vec, testing::ElementsAre(111, 10, -11, -10));
}

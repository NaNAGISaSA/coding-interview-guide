#include <gtest/gtest.h>

#include "05.string/24.max_xor_value.h"

using namespace coding_interview_guide::string::max_xor_value;

TEST(MAX_XOR_VALUE, MAX_XOR_VALUE_EXAMPLE_TEST) {
    ASSERT_EQ(MaxXorValue::max_value({3}), 3);
    ASSERT_EQ(MaxXorValue::max_value({3, -28, -29, 2}), 7);
}

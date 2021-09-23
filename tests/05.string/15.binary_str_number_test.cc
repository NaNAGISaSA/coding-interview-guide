#include <gtest/gtest.h>

#include "05.string/15.binary_str_number.h"

using namespace coding_interview_guide::string::binary_str_number;

TEST(BINARY_STR_NUMBER, BINARY_STR_NUMBER_EXAMPLE_TEST) {
    ASSERT_EQ(BinaryStrNumber::get_number(1), 1L);
    ASSERT_EQ(BinaryStrNumber::get_number(2), 2L);
    ASSERT_EQ(BinaryStrNumber::get_number(3), 3L);
    ASSERT_EQ(BinaryStrNumber::get_number(4), 5L);
    ASSERT_EQ(BinaryStrNumber::get_number(6), 13L);
    ASSERT_EQ(BinaryStrNumber::get_number(8), 34L);
}

#include <gtest/gtest.h>

#include "04.dynamic_programming/16.num_of_int_str_to_char.h"

using namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char;

TEST(NUM_OF_INT_STR_TO_CHAR, NUM_OF_INT_STR_TO_CHAR_EXAMPLE_TEST) {
    ASSERT_EQ(IntStrToChar::number("1111"), 5);
    ASSERT_EQ(IntStrToChar::number("10"), 1);
    ASSERT_EQ(IntStrToChar::number("110011"), 0);
    ASSERT_EQ(IntStrToChar::number("11311"), 6);
}

#include <gtest/gtest.h>

#include "04.dynamic_programming/16.num_of_int_str_to_char.h"

using namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char;

TEST(NUM_OF_INT_STR_TO_CHAR, NUM_OF_INT_STR_TO_CHAR_EXAMPLE_TEST) {
    std::string str1("1111"), str2("10"), str3("110011"), str4("11311");
    ASSERT_EQ(IntStrToChar::number(str1), 5);
    ASSERT_EQ(IntStrToChar::number(str2), 1);
    ASSERT_EQ(IntStrToChar::number(str3), 0);
    ASSERT_EQ(IntStrToChar::number(str4), 6);
}

#include <gtest/gtest.h>

#include "05.string/18.find_new_type_str.h"

using namespace coding_interview_guide::string::find_new_type_str;

TEST(FIND_NEW_TYPE_STR, FIND_NEW_TYPE_STR_EXAMPLE_TEST) {
    ASSERT_EQ(FindNewTypeStr::find_str("aaABCDEcBCg", 2), "AB");
    ASSERT_EQ(FindNewTypeStr::find_str("aaABCDEcBCg", 5), "CD");
    ASSERT_EQ(FindNewTypeStr::find_str("aaABCDEcBCg", 7), "Ec");
    ASSERT_EQ(FindNewTypeStr::find_str("aaABCDEcBCg", 10), "g");
    ASSERT_EQ(FindNewTypeStr::find_str("aAa", 0), "a");
    ASSERT_EQ(FindNewTypeStr::find_str("Aaa", 0), "Aa");
}

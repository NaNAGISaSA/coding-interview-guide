#include <gtest/gtest.h>

#include "05.string/05.char_only_appare_once.h"

using namespace coding_interview_guide::string::char_only_appare_once;

TEST(CHAR_ONLY_APPARE_ONCE, CHAR_ONLY_APPARE_ONCE_EXAMPLE_TEST) {
    std::string str1("adlwpfe1234"), str2(""), str3("ahko20a76"), str4("abd124c5d");
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once_time_opt(str1));
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once_time_opt(str2));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once_time_opt(str3));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once_time_opt(str4));
}

TEST(CHAR_ONLY_APPARE_ONCE, CHAR_ONLY_APPARE_ONCE_TIME_OPT_EXAMPLE_TEST) {
    std::string str1("adlwpfe1234"), str2(""), str3("ahko20a76"), str4("abd124c5d");
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once_space_opt(str1));
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once_space_opt(str2));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once_space_opt(str3));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once_space_opt(str4));
}

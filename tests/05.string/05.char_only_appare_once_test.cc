#include <gtest/gtest.h>

#include "05.string/05.char_only_appare_once.h"

using namespace coding_interview_guide::string::char_only_appare_once;

TEST(CHAR_ONLY_APPARE_ONCE, CHAR_ONLY_APPARE_ONCE_EXAMPLE_TEST) {
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once("adlwpfe1234"));
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once(""));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once("ahko20a76"));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once("abd124c5d"));
}

TEST(CHAR_ONLY_APPARE_ONCE, CHAR_ONLY_APPARE_ONCE_TIME_OPT_EXAMPLE_TEST) {
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once_time_opt("adlwpfe1234"));
    ASSERT_TRUE(CharOnlyAppareOnce::appare_once_time_opt(""));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once_time_opt("ahko20a76"));
    ASSERT_FALSE(CharOnlyAppareOnce::appare_once_time_opt("abd124c5d"));
}

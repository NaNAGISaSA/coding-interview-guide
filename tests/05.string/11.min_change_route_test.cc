#include <gtest/gtest.h>

#include "05.string/11.min_change_route.h"

using namespace coding_interview_guide::string::min_change_route;

TEST(MIN_CHANGE_ROUTE, MIN_CHANGE_ROUTE_EXAMPLE_TEST) {
    std::vector<std::string> vec1{"cab", "acc", "cbc", "ccc", "cac", "cbb", "aab", "abb"}, vec2{"ab", "ae", "ce", "cd"};
    // clang-format off
    ASSERT_EQ(MinChangeRoute::min_route(vec1, "abc", "cab"),
        "abc -> abb -> aab -> cab\n"
        "abc -> abb -> cbb -> cab\n"
        "abc -> cbc -> cac -> cab\n"
        "abc -> cbc -> cbb -> cab\n");
    // clang-format on
    ASSERT_EQ(MinChangeRoute::min_route(vec2, "ab", "cd"), "ab -> ae -> ce -> cd\n");
}

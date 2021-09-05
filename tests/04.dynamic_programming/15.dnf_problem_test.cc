#include <gtest/gtest.h>

#include "04.dynamic_programming/15.dnf_problem.h"

using namespace coding_interview_guide::dynamic_programming::dnf_problem;

TEST(DNF_PROBLEM, DNF_PROBLEM_EXAMPLE_TEST) {
    std::vector<std::vector<int>> map1{{-2, -3, 3}, {-5, -10, 1}, {0, 30, -5}},
        map2{{-2, -3, 3}, {-5, -10, 1}, {0, 30, 5}}, map3{{2, 2}, {1, 1}, {1, 1}};
    ASSERT_EQ(DNF::max_hp(map1), 7);
    ASSERT_EQ(DNF::max_hp(map2), 6);
    ASSERT_EQ(DNF::max_hp(map3), 1);
}

#include <gtest/gtest.h>

#include "09.other_problems/13.disjoint_set.h"

using namespace coding_interview_guide::other_problems::disjoint_set;

TEST(DISJOINT_SET, DISJOINT_SET_EXAMPLE_TEST) {
    DisjointSet set({1, 2, 3, 4});
    ASSERT_FALSE(set.is_same_set(2, 3));
    set.union_set(1, 2);
    set.union_set(1, 3);
    ASSERT_TRUE(set.is_same_set(2, 3));
    ASSERT_FALSE(set.is_same_set(1, 4));
}

#include <gtest/gtest.h>

#include "09.other_problems/10.design_lru_struct.h"

using namespace coding_interview_guide::other_problems::design_lru_struct;

TEST(DESIGN_LRU_STRUCT, DESIGN_LRU_STRUCT_EXAMPLE_TEST) {
    LRUCache cache(2);
    cache.set(1, 2);
    cache.set(2, 4);
    cache.set(1, 10);
    cache.set(3, 6);
    ASSERT_EQ(cache.get(1), 10);
    cache.set(4, 8);
    ASSERT_EQ(cache.get(3), -1);
    ASSERT_EQ(cache.get(1), 10);
    ASSERT_EQ(cache.get(4), 8);
}

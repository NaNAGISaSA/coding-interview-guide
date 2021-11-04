#include <gtest/gtest.h>

#include "09.other_problems/11.design_lfu_struct.h"

using namespace coding_interview_guide::other_problems::design_lfu_struct;

TEST(DESIGN_LFU_STRUCT, DESIGN_LFU_STRUCT_EXAMPLE_TEST) {
    LFUCache cache(3);
    cache.set(1, 2);
    cache.set(2, 4);
    cache.set(3, 6);
    cache.set(2, 8);
    cache.set(3, 10);
    ASSERT_EQ(cache.get(1), 2);
    cache.set(4, 12);
    ASSERT_EQ(cache.get(2), -1);
    ASSERT_EQ(cache.get(3), 10);
    cache.set(5, 14);
    ASSERT_EQ(cache.get(4), -1);
}

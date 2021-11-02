#include <gtest/gtest.h>

#include "09.other_problems/08.set_all_hash_table.h"

using namespace coding_interview_guide::other_problems::set_all_hash_table;

TEST(SET_ALL_HASH_TABLE, SET_ALL_HASH_TABLE_EXAMPLE_TEST) {
    SetAllHashTable<int, int> map;
    map.put(1, 2);
    map.put(2, 4);
    ASSERT_EQ(map.get(2), 4);
    ASSERT_TRUE(map.contains(1));
    ASSERT_FALSE(map.contains(3));
    map.set_all(10);
    map.put(3, 6);
    ASSERT_EQ(map.get(1), 10);
    ASSERT_EQ(map.get(2), 10);
    ASSERT_EQ(map.get(3), 6);
}

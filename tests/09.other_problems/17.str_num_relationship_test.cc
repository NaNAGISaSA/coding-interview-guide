#include <gtest/gtest.h>

#include "09.other_problems/17.str_num_relationship.h"

using namespace coding_interview_guide::other_problems::str_num_relationship;

TEST(STR_NUM_RELATIONSHIP, STR_NUM_RELATIONSHIP_STR_TO_NUM_TEST) {
    ASSERT_EQ(StrNumRelationship::str_to_num({'A', 'B', 'C'}, "AAAC"), 42);
    ASSERT_EQ(StrNumRelationship::str_to_num({'A', 'B', 'C'}, "CBC"), 36);
    ASSERT_EQ(StrNumRelationship::str_to_num({'C', 'B', 'A', 'D'}, "CBDA"), 115);
}

TEST(STR_NUM_RELATIONSHIP, STR_NUM_RELATIONSHIP_NUM_TO_STR_TEST) {
    ASSERT_EQ(StrNumRelationship::num_to_str({'A', 'B', 'C'}, 42), "AAAC");
    ASSERT_EQ(StrNumRelationship::num_to_str({'A', 'B', 'C'}, 36), "CBC");
    ASSERT_EQ(StrNumRelationship::num_to_str({'C', 'B', 'A', 'D'}, 115), "CBDA");
}

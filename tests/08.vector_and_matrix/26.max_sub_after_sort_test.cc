#include <gtest/gtest.h>

#include "08.vector_and_matrix/26.max_sub_after_sort.h"

using namespace coding_interview_guide::vector_and_matrix::max_sub_after_sort;

TEST(MAX_SUB_AFTER_SORT, MAX_SUB_AFTER_SORT_EXAMPLE_TEST) {
    ASSERT_EQ(MaxSubAfterSort::max_sub({9, 3, 1, 10}), 6U);
    ASSERT_EQ(MaxSubAfterSort::max_sub({3, 8, 5, 11, 9}), 3U);
    ASSERT_EQ(MaxSubAfterSort::max_sub({3, 3, 3, 3}), 0U);
}

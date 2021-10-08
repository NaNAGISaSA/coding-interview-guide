#include <gtest/gtest.h>

#include "08.vector_and_matrix/05.min_len_need_sort.h"

using namespace coding_interview_guide::vector_and_matrix::min_len_need_sort;

TEST(MIN_LEN_NEED_SORT, MIN_LEN_NEED_SORT_EXAMPLE_TEST) {
    ASSERT_EQ(MinLenNeedSort::min_len({1, 5, 3, 4, 2, 6, 7}), 4L);
    ASSERT_EQ(MinLenNeedSort::min_len({7, 5, 3, 4, 1}), 2L);
}

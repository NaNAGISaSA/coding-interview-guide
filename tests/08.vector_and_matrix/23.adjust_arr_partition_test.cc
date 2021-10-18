#include <gtest/gtest.h>

#include "08.vector_and_matrix/23.adjust_arr_partition.h"

using namespace coding_interview_guide::vector_and_matrix::adjust_arr_partition;

TEST(ADJUST_ARR_PARTITION, ADJUST_ARR_PARTITION_Q1_EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 9}, vec2{2, 3, 4, 5, 3};
    std::vector<int> truth1{1, 2, 3, 4, 5, 6, 7, 8, 9}, truth2{2, 3, 4, 5};
    AdjustArrPartition::adjust1(vec1);
    AdjustArrPartition::adjust1(vec2);
    for (size_t i = 0; i < truth1.size(); ++i) {
        ASSERT_EQ(truth1[i], vec1[i]);
    }
    for (size_t i = 0; i < truth2.size(); ++i) {
        ASSERT_EQ(truth2[i], vec2[i]);
    }
}

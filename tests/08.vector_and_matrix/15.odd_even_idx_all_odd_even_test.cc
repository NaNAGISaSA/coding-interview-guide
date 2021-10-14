#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "08.vector_and_matrix/15.odd_even_idx_all_odd_even.h"

using namespace coding_interview_guide::vector_and_matrix::odd_even_idx_all_odd_even;

TEST(ODD_EVEN_IDX_ALL_ODD_EVEN, ODD_EVEN_IDX_ALL_ODD_EVEN_EXAMPLE_TEST) {
    std::vector<int> vec1{1, 2, 3, 4, 5}, vec2{2, 4, 1, 6, 8};
    OddEvenIdxAllOddEven::adjust(vec1);
    OddEvenIdxAllOddEven::adjust(vec2);
    ASSERT_THAT(vec1, testing::ElementsAre(2, 1, 4, 3, 5));
    ASSERT_THAT(vec2, testing::ElementsAre(2, 1, 4, 6, 8));
}

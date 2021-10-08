#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "08.vector_and_matrix/04.find_min_k_number.h"

using namespace coding_interview_guide::vector_and_matrix::find_min_k_number;

TEST(FIND_MIN_K_NUMBER, FIND_MIN_K_NUMBER_EXAMPLE_TEST) {
    auto result1 = FindMinKNumber::min_number({6, 8, 9, 5, 2, 1, 9, 6}, 3);
    ASSERT_THAT(result1, testing::ElementsAre(5, 2, 1));
    auto result2 = FindMinKNumber::min_number({6, 8, 9, 5, 2, 1, 9, 6}, 2);
    ASSERT_THAT(result2, testing::ElementsAre(2, 1));
    auto result3 = FindMinKNumber::min_number({6, 8, 9, 5, 2, 1, 9, 6}, 1);
    ASSERT_THAT(result3, testing::ElementsAre(1));
}

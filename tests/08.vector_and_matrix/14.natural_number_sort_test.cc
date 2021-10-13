#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "08.vector_and_matrix/14.natural_number_sort.h"

using namespace coding_interview_guide::vector_and_matrix::natural_number_sort;

TEST(NATURAL_NUMBER_SORT, NATURAL_NUMBER_SORT_EXAMPLE_TEST) {
    std::vector<unsigned int> vec{1, 4, 2, 5, 3};
    NaturalNumberSort::sort(vec);
    ASSERT_THAT(vec, testing::ElementsAre(1, 2, 3, 4, 5));
}

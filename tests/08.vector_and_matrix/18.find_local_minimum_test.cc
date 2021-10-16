#include <gtest/gtest.h>

#include "08.vector_and_matrix/18.find_local_minimum.h"

using namespace coding_interview_guide::vector_and_matrix::find_local_minimum;

TEST(FIND_LOCAL_MINIMUM, FIND_LOCAL_MINIMUM_EXAMPLE_TEST) {
    ASSERT_EQ(FindLocalMinimum::find({2, 1, 3}), 1);
    ASSERT_EQ(FindLocalMinimum::find({3, 2, 1, 5}), 2);
}

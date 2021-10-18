#include <gtest/gtest.h>

#include "08.vector_and_matrix/21.border_one_max_square.h"

using namespace coding_interview_guide::vector_and_matrix::border_one_max_square;

TEST(BORDER_ONE_MAX_SQUARE, BORDER_ONE_MAX_SQUARE_EXAMPLE_TEST) {
    ASSERT_EQ(BorderOneMaxSquare::max_square(
                  {{0, 1, 1, 1, 1}, {0, 1, 0, 0, 1}, {0, 1, 0, 0, 1}, {0, 1, 1, 1, 1}, {0, 1, 0, 1, 1}}),
              4);
    ASSERT_EQ(BorderOneMaxSquare::max_square({{1, 1, 1, 1}, {1, 0, 1, 0}, {1, 1, 1, 1}, {1, 0, 1, 1}}), 3);
}

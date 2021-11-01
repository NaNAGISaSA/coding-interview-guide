#include <gtest/gtest.h>

#include "09.other_problems/07.splice_rectangle.h"

using namespace coding_interview_guide::other_problems::splice_rectangle;

TEST(SPLICE_RECTANGLE, SPLICE_RECTANGLE_EXAMPLE_TEST) {
    ASSERT_FALSE(SpliceRectangle::can_splice({{1, 1, 3, 3}, {3, 1, 4, 2}, {1, 3, 2, 4}, {3, 2, 4, 4}}));
    ASSERT_FALSE(SpliceRectangle::can_splice({{1, 1, 3, 3}, {3, 2, 4, 3}, {3, 2, 4, 4}, {1, 3, 2, 4}, {2, 3, 3, 4}}));
    ASSERT_TRUE(SpliceRectangle::can_splice({{1, 1, 3, 3}, {3, 1, 4, 2}, {3, 2, 4, 4}, {1, 3, 2, 4}, {2, 3, 3, 4}}));
}

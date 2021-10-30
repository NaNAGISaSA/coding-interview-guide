#include <gtest/gtest.h>

#include "09.other_problems/04.point_in_rectangle.h"

using namespace coding_interview_guide::other_problems::point_in_rectangle;

TEST(POINT_IN_RECTANGLE, POINT_IN_RECTANGLE_EXAMPLE_TEST) {
    ASSERT_TRUE(PointInRectangle::judge({2.00, 2.50}, {3.00, 5.00}, {3.00, 1.50}, {4.00, 4.00}, {3.21, 3.78}));
    ASSERT_FALSE(PointInRectangle::judge({2.00, 2.50}, {3.00, 5.00}, {3.00, 1.50}, {4.00, 4.00}, {6.21, 8.69}));
}

#include <gtest/gtest.h>

#include "09.other_problems/05.point_in_triangle.h"

using namespace coding_interview_guide::other_problems::point_in_triangle;

TEST(POINT_IN_TRIANGLE, POINT_IN_TRIANGLE_EXAMPLE_TEST) {
    ASSERT_TRUE(PointInTriangle::judge(-1.0, 0.0, 1.5, 3.5, 2.7, -3.1, 1.2, 0.2));
    ASSERT_FALSE(PointInTriangle::judge(-1.0, 0.0, 1.5, 3.5, 2.7, -3.1, 2.5, 0.0));
}

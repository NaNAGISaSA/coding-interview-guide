#include <gtest/gtest.h>

#include "04.dynamic_programming/06.balloon_game_max_point.h"

using namespace coding_interview_guide::dynamic_programming::balloon_game_max_point;

TEST(BALLOON_GAME_MAX_POINT, BALLOON_GAME_MAX_POINT_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{3, 2, 5}, vec2{23, 4, 45, 65, 23, 43, 54, 56};
    ASSERT_EQ(BalloonGameMaxPoint::max_point(vec1), 50);
    ASSERT_EQ(BalloonGameMaxPoint::max_point(vec2), 639019);
}

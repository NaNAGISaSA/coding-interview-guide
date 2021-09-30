#include <gtest/gtest.h>

#include "04.dynamic_programming/06.balloon_game_max_point.h"

using namespace coding_interview_guide::dynamic_programming::balloon_game_max_point;

TEST(BALLOON_GAME_MAX_POINT, BALLOON_GAME_MAX_POINT_EXAMPLE_TEST) {
    ASSERT_EQ(BalloonGameMaxPoint::max_point({3, 2, 5}), 50);
    ASSERT_EQ(BalloonGameMaxPoint::max_point({23, 4, 45, 65, 23, 43, 54, 56}), 639019);
}

TEST(BALLOON_GAME_MAX_POINT, BALLOON_GAME_MAX_POINT_DP_EXAMPLE_TEST) {
    ASSERT_EQ(BalloonGameMaxPoint::max_point_dp({3, 2, 5}), 50);
    ASSERT_EQ(BalloonGameMaxPoint::max_point_dp({23, 4, 45, 65, 23, 43, 54, 56}), 639019);
}

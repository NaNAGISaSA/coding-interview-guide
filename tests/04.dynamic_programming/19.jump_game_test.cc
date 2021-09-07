#include <gtest/gtest.h>

#include "04.dynamic_programming/19.jump_game.h"

using namespace coding_interview_guide::dynamic_programming::jump_game;

TEST(JUMP_GAME, JUMP_GAME_EXAMPLE_TEST) {
    std::vector<unsigned int> vec1{3, 2, 3, 1, 1, 4}, vec2{2, 2, 3, 2, 1, 4, 1, 2};
    ASSERT_EQ(JumpGame::steps(vec1), 2);
    ASSERT_EQ(JumpGame::steps(vec2), 3);
}

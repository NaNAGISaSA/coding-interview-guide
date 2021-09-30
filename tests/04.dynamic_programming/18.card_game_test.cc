#include <gtest/gtest.h>

#include "04.dynamic_programming/18.card_game.h"

using namespace coding_interview_guide::dynamic_programming::card_game;

TEST(CARD_GAME, CARD_GAME_EXAMPLE_TEST) {
    ASSERT_EQ(CardGame::winner_point({1, 2, 100, 4}), 101);
    ASSERT_EQ(CardGame::winner_point({1, 5, 3, 100, 11, 10}), 115);
}

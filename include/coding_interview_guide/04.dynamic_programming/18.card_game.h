#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CARD_GAME_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CARD_GAME_H_

/*
【题目】
给定一个整型数组arr，代表数值不同的纸牌排成一条线，玩家A和玩家B依次拿走每张纸牌，规定玩家A先拿，玩家B后拿，
但是每个玩家每次只能拿走最左和最右的纸牌，玩家A和玩家B绝顶聪明。请返回最后的获胜者的分数。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::card_game {

class CardGame {
public:
    static unsigned long winner_point(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::card_game

#endif

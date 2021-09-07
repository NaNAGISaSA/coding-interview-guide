#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_JUMP_GAME_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_JUMP_GAME_H_

/*
【题目】
给定数组arr，arr[i]==k代表可以从位置向右跳1~k个距离。比如，arr[2]==3,代表可以从位置2跳到位置3、位置4或位置5。
如果从位置0出发，返回最少跳几次能跳到arr最后的位置上。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::jump_game {

class JumpGame {
public:
    static unsigned int steps(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::jump_game

#endif

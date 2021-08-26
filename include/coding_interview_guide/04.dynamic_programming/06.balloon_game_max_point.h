#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_BALLOON_GAME_MAX_POINT_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_BALLOON_GAME_MAX_POINT_H_

/*
【题目】
给定一个数组arr,长度为N。代表排有分数的气球。 每打爆一个气球都能获得分数，假设打爆气球的分数为X，获得分数的规则如下:
1)如果被打爆气球的左边有没被打爆的气球，找到离被打爆气球最近的气球，假设分数为L:如果被打爆气球的右边有没被打爆的气球，找到离被打爆气球最近的气球，假设分数为R.获得分数为L*X*R
2)如果被打爆的气球的左边有没被打爆的气球，找到离被打爆气球最近的气球，假设分数为L:如果被打爆气球的右边所有气球都已经被打爆，获得分数为L*X。
3)如果被打爆气球的左边所有的气球都已经被打爆:如果被打爆气球的右边有没被打爆的气球，找到离被打爆气球最近的气球。获得分数为X*R.
4)如果被打爆气球的左边和右边所有的气球都已经被打爆。获得分数为X。
目标是打爆所有气球，获得每次打爆的分数。通过选择打爆气球的顺序，可以得到不同的总分，请返回能获得的最大分。
【备注】
所有气球的分数均 >= 1。
【要求】
时间复杂度为O(N^3)
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::balloon_game_max_point {

class BalloonGameMaxPoint {
public:
    static unsigned long max_point(const std::vector<unsigned int>& vec);
    static unsigned long max_point_dp(const std::vector<unsigned int>& vec);
};

}  // namespace coding_interview_guide::dynamic_programming::balloon_game_max_point

#endif

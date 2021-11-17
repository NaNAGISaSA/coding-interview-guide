#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DIVIDE_CANDY_PROBLEM_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_DIVIDE_CANDY_PROBLEM_H_

/*
【题目】
一群孩子做游戏，现在请你根据游戏得分来发糖果，要求如下：
1. 每个孩子不管得分多少，起码分到一个糖果。
2. 任意两个相邻的孩子之间，得分较多的孩子必须拿多一些糖果。(若相同则无此限制)
给定一个数组arr代表得分数组，请返回最少需要多少糖果。
【进阶】
加入如下规则：
3. 任意两个相邻的孩子之间的得分如果一样多，糖果数必须相同。
给定一个数组arr代表得分数组，请返回最少需要多少糖果。
【要求】
两问题时间复杂度均为O(N)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::divide_candy_problem {

class DivideCandyProblem {
public:
    static unsigned int min_candy_num1(const std::vector<unsigned int>& point);
    static unsigned int min_candy_num2(const std::vector<unsigned int>& point);
};

}  // namespace coding_interview_guide::other_problems::divide_candy_problem

#endif

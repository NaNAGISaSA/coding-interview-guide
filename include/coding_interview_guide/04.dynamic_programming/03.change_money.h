#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_MONEY_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_MONEY_H_

/*
【题目】
给定数组arr，arr中所有的值都为正整数且不重复。
每个值代表一种面值的货币，每种面值的货币可以使用任意张，再给定一个aim，代表要找的钱数，求组成aim的最少货币数。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::change_money {

class ChangeMoney {
public:
    static int min_currency(const std::vector<unsigned int>& vec, unsigned int aim);
};

}  // namespace coding_interview_guide::dynamic_programming::change_money

#endif

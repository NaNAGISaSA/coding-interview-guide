#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_MONEY_METHODS_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_MONEY_METHODS_H_

/*
【题目】
给定数组arr，arr中所有的值都为正整数且不重复。
每个值代表一种面值的货币，每种面值的货币可以使用任意张，再给定一个aim，代表要找的钱数，求有几种换钱的方法。
*/

#include <vector>

namespace coding_interview_guide::dynamic_programming::change_money_methods {

class ChangeMoneyMethods {
public:
    static unsigned long methods_number(const std::vector<unsigned int>& vec, const unsigned int aim);
    static unsigned long methods_number_space_opt(const std::vector<unsigned int>& vec, const unsigned int aim);
};

}  // namespace coding_interview_guide::dynamic_programming::change_money_methods

#endif

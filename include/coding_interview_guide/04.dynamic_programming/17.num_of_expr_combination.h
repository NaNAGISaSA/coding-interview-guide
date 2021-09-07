#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_NUM_OF_EXPR_COMBINATION_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_NUM_OF_EXPR_COMBINATION_H_

/*
【题目】
给定一个只由0（假）、1（真）、&（逻辑与）、|（逻辑或）和^（异或）五种字符组成的字符串express，
再给定一个布尔值desired。求出express能有多少种组合方式，可以达到desired的结果。
*/

#include <string>

namespace coding_interview_guide::dynamic_programming::num_of_expr_combination {

class NumOfExprCombination {
public:
    static unsigned long number(const std::string& input, bool desired);
    static unsigned long number_dp(const std::string& input, bool desired);
};

}  // namespace coding_interview_guide::dynamic_programming::num_of_expr_combination

#endif

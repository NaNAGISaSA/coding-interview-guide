#ifndef _CODING_INTERVIEW_GUIDE_STRING_CAL_STR_EXPR_H_
#define _CODING_INTERVIEW_GUIDE_STRING_CAL_STR_EXPR_H_

/*
【题目】
给定一个字符串str，str表示一个公式，公式里可以有整数，加减乘除和左右括号，返回公式的计算结果。
【说明】
1. 题目中所有运算都是整型运算，向下取整；
2. 保证数据合法，不会出现除0等情况；
3. 如果是负数，就需要用括号括起来，如4*（-3），但是如果负数作为公式开头或者括号部分的开头，则可以没有括号，如-3*4。
*/

#include <string>

namespace coding_interview_guide::string::cal_str_expr {

class CalStrExpr {
public:
    static long get_result(const std::string& str);
};

}  // namespace coding_interview_guide::string::cal_str_expr

#endif
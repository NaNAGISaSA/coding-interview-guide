#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_NUM_OF_INT_STR_TO_CHAR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_NUM_OF_INT_STR_TO_CHAR_H_

/*
【题目】
给定一个字符串str，str全部由数字字符组成，如果str中的某一个或者相邻两个字符组成的子串值在1~26之间，则这个子串可以转换为一个字母。
规定‘1’转换为“A”，“2”转换为“B”......"26"转化为“Z“。请求出str有多少种不同的转换结果。
*/

#include <string>

namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char {

class IntStrToChar {
public:
    static unsigned long number(const std::string& str);
};

}  // namespace coding_interview_guide::dynamic_programming::num_of_int_str_to_char

#endif
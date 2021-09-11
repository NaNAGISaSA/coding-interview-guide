#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_INT_STR_TO_INT_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_CHANGE_INT_STR_TO_INT_H_

/*
【题目】
给定一个字符串str，如果str符合日常书写的整数形式，并且属于32位整数范围，返回str代表的整数值，否则返回0。
*/

#include <string>

namespace coding_interview_guide::string::change_int_str_to_int {

class ChangeIntStrToInt {
public:
    static int number(const std::string& str);
};

}  // namespace coding_interview_guide::string::change_int_str_to_int

#endif
#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FIND_NEW_TYPE_STR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_FIND_NEW_TYPE_STR_H_

/*
【题目】
新类型字符的定义如下:
1. 新类型字符是长度为1或者2的字符串；
2. 表现形式可以仅是小写字母，例如，"e"，也可以是大写字母+小写字母，例如，"Ab"，还可以是大写字母+大写字母，例如，"DC"。
现在给定一个字符串str, str一定是若干新类型字符正确组合的结果。比如"eaCCBi"，由新类型字符"e"、"a”、"CC"和"Bi"拼成。
再给定一个整数k，代表str中的位置。请返回第k个位置的新类型字符。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
*/

#include <string>

namespace coding_interview_guide::string::find_new_type_str {

class FindNewTypeStr {
public:
    static std::string find_str(const std::string& str, size_t index);
};

}  // namespace coding_interview_guide::string::find_new_type_str

#endif
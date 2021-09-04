#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_STR_CROSS_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_STR_CROSS_H_
/*
【题目】
给定三个字符串str1、str2 和aim,如果aim包含且仅包含来自str1和str2的所有字符，
而且在aim中属于str1的字符之间保持原来在str1中的顺序，属于str2的字符之间保持原来在str2中的顺序，那么称aim是str1和str2的交错组成。
实现一个函数，判断aim是否是str1和str2交错组成。
*/

#include <string>

namespace coding_interview_guide::dynamic_programming::str_cross {

class StrCross {
public:
    static bool is_corss(const std::string& str1, const std::string& str2, const std::string& aim);
};

}  // namespace coding_interview_guide::dynamic_programming::str_cross

#endif
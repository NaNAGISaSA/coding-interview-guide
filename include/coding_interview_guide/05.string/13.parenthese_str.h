#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_PARENTHESE_STR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_PARENTHESE_STR_H_

/*
【题目】
给定一个字符串str，判断是不是整体有效的括号字符串(整体有效：
即存在一种括号匹配方案，使每个括号字符均能找到对应的反向括号，且字符串中不包含非括号字符)。
【要求】
时间复杂度O（N），额外空间复杂度O（1）。
【补充】
给定一个括号字符串，返回最长的有效子串。
*/

#include <string>

namespace coding_interview_guide::string::parenthese_str {

class ParentheseStr {
public:
    static bool is_valid(const std::string& str);
    static std::string max_valid_str(const std::string& str);
};

}  // namespace coding_interview_guide::string::parenthese_str

#endif
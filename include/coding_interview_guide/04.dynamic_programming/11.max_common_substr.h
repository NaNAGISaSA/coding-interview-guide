#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_COMMON_SUBSTR_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_COMMON_SUBSTR_H_

/*
【题目】
给定两个字符串str1和str2，输出两个字符串的最长公共子串。
*/

#include <string>

namespace coding_interview_guide::dynamic_programming::max_common_substr {

class MaxCommonSubstr {
public:
    static std::string max_substr(const std::string& str1, const std::string& str2);
    static std::string max_substr_space_opt(const std::string& str1, const std::string& str2);
};

}  // namespace coding_interview_guide::dynamic_programming::max_common_substr

#endif
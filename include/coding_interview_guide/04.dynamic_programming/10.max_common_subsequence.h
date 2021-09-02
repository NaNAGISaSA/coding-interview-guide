#ifndef _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_COMMON_SUBSEQUENCE_H_
#define _CODING_INTERVIEW_GUIDE_DYNAMIC_PROGRAMMING_MAX_COMMON_SUBSEQUENCE_H_

/*
【题目】
给定两个字符串str1和str2，输出连个字符串的最长公共子序列。
*/

#include <string>

namespace coding_interview_guide::dynamic_programming::max_common_subsequence {

class MaxCommonSubsequence {
public:
    static std::string subsequence(const std::string& a, const std::string& b);
    static std::string subsequence_dp(const std::string& a, const std::string& b);
};

}  // namespace coding_interview_guide::dynamic_programming::max_common_subsequence

#endif
